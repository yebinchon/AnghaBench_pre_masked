
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibv_cq {TYPE_2__* context; struct ibv_comp_channel* channel; } ;
struct ibv_comp_channel {TYPE_3__* context; int refcnt; } ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_4__ {int (* destroy_cq ) (struct ibv_cq*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ibv_cq*) ;

int FUNC_3(struct ibv_cq *VAR_0)
{
 struct ibv_comp_channel *VAR_1 = VAR_0->channel;
 int VAR_2;

 VAR_2 = VAR_0->context->ops.destroy_cq(VAR_0);

 if (VAR_1) {
  if (!VAR_2) {
   FUNC_0(&VAR_1->context->mutex);
   --VAR_1->refcnt;
   FUNC_1(&VAR_1->context->mutex);
  }
 }

 return VAR_2;
}
