
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_resize_cq_resp {int cqe; } ;
struct ibv_resize_cq {int cqe; int cq_handle; } ;
struct ibv_cq {int cqe; TYPE_1__* context; int handle; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int FUNC_0 (struct ibv_resize_cq*,size_t,int ,struct ibv_resize_cq_resp*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct ibv_resize_cq_resp*,size_t) ;
 int VAR_1 ;
 size_t FUNC_2 (int ,struct ibv_resize_cq*,size_t) ;

int FUNC_3(struct ibv_cq *VAR_2, int VAR_3,
        struct ibv_resize_cq *VAR_4, size_t VAR_5,
        struct ibv_resize_cq_resp *VAR_6, size_t VAR_7)
{
 FUNC_0(VAR_4, VAR_5, VAR_0, VAR_6, VAR_7);
 VAR_4->cq_handle = VAR_2->handle;
 VAR_4->cqe = VAR_3;

 if (FUNC_2(VAR_2->context->cmd_fd, VAR_4, VAR_5) != VAR_5)
  return VAR_1;

 (void) FUNC_1(VAR_6, VAR_7);

 VAR_2->cqe = VAR_6->cqe;

 return 0;
}
