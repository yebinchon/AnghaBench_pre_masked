
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_qp {TYPE_2__* context; } ;
struct TYPE_3__ {int (* destroy_qp ) (struct ibv_qp*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct ibv_qp*) ;

int FUNC_1(struct ibv_qp *VAR_0)
{
 return VAR_0->context->ops.destroy_qp(VAR_0);
}
