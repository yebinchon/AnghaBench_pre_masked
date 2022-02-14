
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_event_channel {int dummy; } ;
struct TYPE_2__ {int ps; int qp_type; struct rdma_event_channel* channel; void* context; } ;
struct cma_id_private {int handle; int sync; int cond; int mut; TYPE_1__ id; } ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;
typedef enum ibv_qp_type { ____Placeholder_ibv_qp_type } ibv_qp_type ;


 struct cma_id_private* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 struct rdma_event_channel* FUNC_3 () ;
 int FUNC_4 (struct cma_id_private*) ;

__attribute__((used)) static struct cma_id_private *FUNC_5(struct rdma_event_channel *VAR_0,
         void *VAR_1,
         enum rdma_port_space VAR_2,
         enum ibv_qp_type VAR_3)
{
 struct cma_id_private *VAR_4;

 VAR_4 = FUNC_0(1, sizeof(*VAR_4));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->id.context = VAR_1;
 VAR_4->id.ps = VAR_2;
 VAR_4->id.qp_type = VAR_3;
 VAR_4->handle = 0xFFFFFFFF;

 if (!VAR_0) {
  VAR_4->id.channel = FUNC_3();
  if (!VAR_4->id.channel)
   goto err;
  VAR_4->sync = 1;
 } else {
  VAR_4->id.channel = VAR_0;
 }

 FUNC_2(&VAR_4->mut, ((void*)0));
 if (FUNC_1(&VAR_4->cond, ((void*)0)))
  goto err;

 return VAR_4;

err: FUNC_4(VAR_4);
 return ((void*)0);
}
