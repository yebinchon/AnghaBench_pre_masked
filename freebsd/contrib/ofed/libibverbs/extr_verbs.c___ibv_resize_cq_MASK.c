
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_cq {TYPE_2__* context; } ;
struct TYPE_3__ {int (* resize_cq ) (struct ibv_cq*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_cq*,int) ;

int FUNC_1(struct ibv_cq *VAR_1, int VAR_2)
{
 if (!VAR_1->context->ops.resize_cq)
  return VAR_0;

 return VAR_1->context->ops.resize_cq(VAR_1, VAR_2);
}
