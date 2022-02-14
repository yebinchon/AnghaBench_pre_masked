
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_srq_attr {int srq_limit; int max_sge; int max_wr; } ;
struct ibv_srq {TYPE_1__* context; int handle; } ;
struct ibv_query_srq_resp {int srq_limit; int max_sge; int max_wr; } ;
struct ibv_query_srq {scalar_t__ reserved; int srq_handle; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int FUNC_0 (struct ibv_query_srq*,size_t,int ,struct ibv_query_srq_resp*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ibv_query_srq_resp*,int) ;
 int VAR_1 ;
 size_t FUNC_2 (int ,struct ibv_query_srq*,size_t) ;

int FUNC_3(struct ibv_srq *VAR_2, struct ibv_srq_attr *VAR_3,
        struct ibv_query_srq *VAR_4, size_t VAR_5)
{
 struct ibv_query_srq_resp VAR_6;

 FUNC_0(VAR_4, VAR_5, VAR_0, &VAR_6, sizeof VAR_6);
 VAR_4->srq_handle = VAR_2->handle;
 VAR_4->reserved = 0;

 if (FUNC_2(VAR_2->context->cmd_fd, VAR_4, VAR_5) != VAR_5)
  return VAR_1;

 (void) FUNC_1(&VAR_6, sizeof VAR_6);

 VAR_3->max_wr = VAR_6.max_wr;
 VAR_3->max_sge = VAR_6.max_sge;
 VAR_3->srq_limit = VAR_6.srq_limit;

 return 0;
}
