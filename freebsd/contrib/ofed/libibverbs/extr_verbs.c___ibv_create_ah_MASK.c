
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_pd {TYPE_2__* context; } ;
struct ibv_ah_attr {int dummy; } ;
struct ibv_ah {struct ibv_pd* pd; TYPE_2__* context; } ;
struct TYPE_3__ {struct ibv_ah* (* create_ah ) (struct ibv_pd*,struct ibv_ah_attr*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 struct ibv_ah* FUNC_0 (struct ibv_pd*,struct ibv_ah_attr*) ;

struct ibv_ah *FUNC_1(struct ibv_pd *VAR_0, struct ibv_ah_attr *VAR_1)
{
 struct ibv_ah *VAR_2 = VAR_0->context->ops.create_ah(VAR_0, VAR_1);

 if (VAR_2) {
  VAR_2->context = VAR_0->context;
  VAR_2->pd = VAR_0;
 }

 return VAR_2;
}
