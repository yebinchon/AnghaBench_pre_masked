
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rds_sock {int rs_rdma_lock; int rs_rdma_keys; } ;
struct rds_mr {int r_trans_private; TYPE_1__* r_trans; int r_refcount; } ;
struct TYPE_4__ {struct rds_mr* op_rdma_mr; } ;
struct rds_message {scalar_t__ m_rdma_cookie; TYPE_2__ rdma; } ;
struct cmsghdr {scalar_t__ cmsg_len; } ;
typedef int rds_rdma_cookie_t ;
struct TYPE_3__ {int (* sync_mr ) (int ,int ) ;} ;


 int FUNC_0 (struct cmsghdr*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 struct rds_mr* FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(struct rds_sock *VAR_2, struct rds_message *VAR_3,
     struct cmsghdr *VAR_4)
{
 unsigned long VAR_5;
 struct rds_mr *VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;

 if (VAR_4->cmsg_len < FUNC_1(sizeof(rds_rdma_cookie_t))
  || VAR_3->m_rdma_cookie != 0)
  return -VAR_1;

 FUNC_3(&VAR_3->m_rdma_cookie, FUNC_0(VAR_4), sizeof(VAR_3->m_rdma_cookie));






 VAR_7 = FUNC_5(VAR_3->m_rdma_cookie);

 FUNC_6(&VAR_2->rs_rdma_lock, VAR_5);
 VAR_6 = FUNC_4(&VAR_2->rs_rdma_keys, VAR_7, ((void*)0));
 if (!VAR_6)
  VAR_8 = -VAR_1;
 else
  FUNC_2(&VAR_6->r_refcount);
 FUNC_7(&VAR_2->rs_rdma_lock, VAR_5);

 if (VAR_6) {
  VAR_6->r_trans->sync_mr(VAR_6->r_trans_private, VAR_0);
  VAR_3->rdma.op_rdma_mr = VAR_6;
 }
 return VAR_8;
}
