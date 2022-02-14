
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_srq_attr {int srq_limit; int max_wr; } ;
struct ibv_srq {TYPE_1__* context; int handle; } ;
struct ibv_modify_srq {int attr_mask; int srq_limit; int max_wr; int srq_handle; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int FUNC_0 (struct ibv_modify_srq*,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ibv_srq*,struct ibv_srq_attr*,int,struct ibv_modify_srq*,size_t) ;
 size_t FUNC_2 (int ,struct ibv_modify_srq*,size_t) ;

int FUNC_3(struct ibv_srq *VAR_3,
         struct ibv_srq_attr *VAR_4,
         int VAR_5,
         struct ibv_modify_srq *VAR_6, size_t VAR_7)
{
 if (VAR_1 == 3)
  return FUNC_1(VAR_3, VAR_4, VAR_5,
          VAR_6, VAR_7);

 FUNC_0(VAR_6, VAR_7, VAR_0);

 VAR_6->srq_handle = VAR_3->handle;
 VAR_6->attr_mask = VAR_5;
 VAR_6->max_wr = VAR_4->max_wr;
 VAR_6->srq_limit = VAR_4->srq_limit;

 if (FUNC_2(VAR_3->context->cmd_fd, VAR_6, VAR_7) != VAR_7)
  return VAR_2;

 return 0;
}
