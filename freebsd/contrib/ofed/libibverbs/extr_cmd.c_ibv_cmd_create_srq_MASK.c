
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_sge; int max_wr; int srq_limit; } ;
struct ibv_srq_init_attr {TYPE_2__ attr; } ;
struct ibv_srq {TYPE_1__* context; int handle; } ;
struct ibv_pd {TYPE_1__* context; int handle; } ;
struct ibv_create_srq_resp_v5 {int dummy; } ;
struct ibv_create_srq_resp {int max_sge; int max_wr; int srq_handle; } ;
struct ibv_create_srq {uintptr_t user_handle; int srq_limit; int max_sge; int max_wr; int pd_handle; } ;
struct TYPE_3__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_create_srq*,size_t,int ,struct ibv_create_srq_resp*,size_t) ;
 int FUNC_1 (struct ibv_create_srq_resp*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*,void*,size_t) ;
 size_t FUNC_3 (int ,struct ibv_create_srq*,size_t) ;

int FUNC_4(struct ibv_pd *VAR_3,
         struct ibv_srq *VAR_4, struct ibv_srq_init_attr *VAR_5,
         struct ibv_create_srq *VAR_6, size_t VAR_7,
         struct ibv_create_srq_resp *VAR_8, size_t VAR_9)
{
 FUNC_0(VAR_6, VAR_7, VAR_0, VAR_8, VAR_9);
 VAR_6->user_handle = (uintptr_t) VAR_4;
 VAR_6->pd_handle = VAR_3->handle;
 VAR_6->max_wr = VAR_5->attr.max_wr;
 VAR_6->max_sge = VAR_5->attr.max_sge;
 VAR_6->srq_limit = VAR_5->attr.srq_limit;

 if (FUNC_3(VAR_3->context->cmd_fd, VAR_6, VAR_7) != VAR_7)
  return VAR_2;

 (void) FUNC_1(VAR_8, VAR_9);

 VAR_4->handle = VAR_8->srq_handle;
 VAR_4->context = VAR_3->context;

 if (VAR_1 > 5) {
  VAR_5->attr.max_wr = VAR_8->max_wr;
  VAR_5->attr.max_sge = VAR_8->max_sge;
 } else {
  struct ibv_create_srq_resp_v5 *VAR_10 =
   (struct ibv_create_srq_resp_v5 *) VAR_8;

  FUNC_2((void *) VAR_8 + sizeof *VAR_8,
   (void *) VAR_10 + sizeof *VAR_10,
   VAR_9 - sizeof *VAR_8);
 }

 return 0;
}
