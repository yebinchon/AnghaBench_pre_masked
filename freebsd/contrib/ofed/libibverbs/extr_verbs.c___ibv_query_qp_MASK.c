
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_qp_init_attr {int dummy; } ;
struct ibv_qp_attr {int qp_state; } ;
struct ibv_qp {int state; TYPE_2__* context; } ;
struct TYPE_3__ {int (* query_qp ) (struct ibv_qp*,struct ibv_qp_attr*,int,struct ibv_qp_init_attr*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_qp*,struct ibv_qp_attr*,int,struct ibv_qp_init_attr*) ;

int FUNC_1(struct ibv_qp *VAR_1, struct ibv_qp_attr *VAR_2,
     int VAR_3,
     struct ibv_qp_init_attr *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_1->context->ops.query_qp(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_3 & VAR_0)
  VAR_1->state = VAR_2->qp_state;

 return 0;
}
