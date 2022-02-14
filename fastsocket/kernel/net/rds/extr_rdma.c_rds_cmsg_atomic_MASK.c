
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct rds_sock {scalar_t__ rs_recverr; } ;
struct TYPE_14__ {int swap_mask; int compare_mask; int swap; int compare; } ;
struct TYPE_11__ {int nocarry_mask; int add; } ;
struct TYPE_16__ {int op_active; int op_notify; int op_silent; TYPE_8__* op_notifier; scalar_t__ op_remote_addr; int op_rkey; scalar_t__ op_recverr; int op_sg; TYPE_5__ op_m_cswp; void* op_type; TYPE_2__ op_m_fadd; } ;
struct rds_message {TYPE_7__ atomic; } ;
struct TYPE_15__ {int swap_mask; int compare_mask; int swap; int compare; } ;
struct TYPE_13__ {int swap; int compare; } ;
struct TYPE_12__ {int nocarry_mask; int add; } ;
struct TYPE_10__ {int add; } ;
struct rds_atomic_args {int flags; int local_addr; int cookie; scalar_t__ remote_addr; int user_token; TYPE_6__ m_cswp; TYPE_4__ cswp; TYPE_3__ m_fadd; TYPE_1__ fadd; } ;
struct page {int dummy; } ;
struct cmsghdr {scalar_t__ cmsg_len; int cmsg_type; } ;
struct TYPE_17__ {int n_status; int n_user_token; } ;


 int FUNC_0 () ;
 struct rds_atomic_args* FUNC_1 (struct cmsghdr*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_8__*) ;
 TYPE_8__* FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct rds_message*,int) ;
 int FUNC_8 (int,int,struct page**,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,struct page*,int,int ) ;

int FUNC_12(struct rds_sock *VAR_9, struct rds_message *VAR_10,
      struct cmsghdr *VAR_11)
{
 struct page *VAR_12 = ((void*)0);
 struct rds_atomic_args *VAR_13;
 int VAR_14 = 0;

 if (VAR_11->cmsg_len < FUNC_2(sizeof(struct rds_atomic_args))
  || VAR_10->atomic.op_active)
  return -VAR_1;

 VAR_13 = FUNC_1(VAR_11);


 switch (VAR_11->cmsg_type) {
 case 130:
  VAR_10->atomic.op_type = VAR_5;
  VAR_10->atomic.op_m_fadd.add = VAR_13->fadd.add;
  VAR_10->atomic.op_m_fadd.nocarry_mask = 0;
  break;
 case 128:
  VAR_10->atomic.op_type = VAR_5;
  VAR_10->atomic.op_m_fadd.add = VAR_13->m_fadd.add;
  VAR_10->atomic.op_m_fadd.nocarry_mask = VAR_13->m_fadd.nocarry_mask;
  break;
 case 131:
  VAR_10->atomic.op_type = VAR_4;
  VAR_10->atomic.op_m_cswp.compare = VAR_13->cswp.compare;
  VAR_10->atomic.op_m_cswp.swap = VAR_13->cswp.swap;
  VAR_10->atomic.op_m_cswp.compare_mask = ~0;
  VAR_10->atomic.op_m_cswp.swap_mask = ~0;
  break;
 case 129:
  VAR_10->atomic.op_type = VAR_4;
  VAR_10->atomic.op_m_cswp.compare = VAR_13->m_cswp.compare;
  VAR_10->atomic.op_m_cswp.swap = VAR_13->m_cswp.swap;
  VAR_10->atomic.op_m_cswp.compare_mask = VAR_13->m_cswp.compare_mask;
  VAR_10->atomic.op_m_cswp.swap_mask = VAR_13->m_cswp.swap_mask;
  break;
 default:
  FUNC_0();
 }

 VAR_10->atomic.op_notify = !!(VAR_13->flags & VAR_6);
 VAR_10->atomic.op_silent = !!(VAR_13->flags & VAR_7);
 VAR_10->atomic.op_active = 1;
 VAR_10->atomic.op_recverr = VAR_9->rs_recverr;
 VAR_10->atomic.op_sg = FUNC_7(VAR_10, 1);
 if (!VAR_10->atomic.op_sg) {
  VAR_14 = -VAR_2;
  goto err;
 }


 if (VAR_13->local_addr & 0x7) {
  VAR_14 = -VAR_0;
  goto err;
 }

 VAR_14 = FUNC_8(VAR_13->local_addr, 1, &VAR_12, 1);
 if (VAR_14 != 1)
  goto err;
 VAR_14 = 0;

 FUNC_11(VAR_10->atomic.op_sg, VAR_12, 8, FUNC_5(VAR_13->local_addr));

 if (VAR_10->atomic.op_notify || VAR_10->atomic.op_recverr) {





  VAR_10->atomic.op_notifier = FUNC_4(sizeof(*VAR_10->atomic.op_notifier), VAR_3);
  if (!VAR_10->atomic.op_notifier) {
   VAR_14 = -VAR_2;
   goto err;
  }

  VAR_10->atomic.op_notifier->n_user_token = VAR_13->user_token;
  VAR_10->atomic.op_notifier->n_status = VAR_8;
 }

 VAR_10->atomic.op_rkey = FUNC_9(VAR_13->cookie);
 VAR_10->atomic.op_remote_addr = VAR_13->remote_addr + FUNC_10(VAR_13->cookie);

 return VAR_14;
err:
 if (VAR_12)
  FUNC_6(VAR_12);
 FUNC_3(VAR_10->atomic.op_notifier);

 return VAR_14;
}
