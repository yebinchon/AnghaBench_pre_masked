
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_cq {TYPE_1__* context; void* cq_context; } ;
struct ibv_comp_event {scalar_t__ cq_handle; } ;
struct ibv_comp_channel {int fd; } ;
struct TYPE_4__ {int (* cq_event ) (struct ibv_cq*) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;


 int FUNC_0 (int ,struct ibv_comp_event*,int) ;
 int FUNC_1 (struct ibv_cq*) ;

int FUNC_2(struct ibv_comp_channel *VAR_0,
         struct ibv_cq **VAR_1, void **VAR_2)
{
 struct ibv_comp_event VAR_3;

 if (FUNC_0(VAR_0->fd, &VAR_3, sizeof VAR_3) != sizeof VAR_3)
  return -1;

 *VAR_1 = (struct ibv_cq *) (uintptr_t) VAR_3.cq_handle;
 *VAR_2 = (*VAR_1)->cq_context;

 if ((*VAR_1)->context->ops.cq_event)
  (*VAR_1)->context->ops.cq_event(*VAR_1);

 return 0;
}
