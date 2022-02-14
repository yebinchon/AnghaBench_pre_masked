
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mlx4_cq {TYPE_2__* cqe; TYPE_1__* cur_qp; } ;
struct ibv_cq_ex {int dummy; } ;
struct TYPE_4__ {int sl_vid; } ;
struct TYPE_3__ {scalar_t__ link_layer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibv_cq_ex*) ;
 struct mlx4_cq* FUNC_2 (int ) ;

__attribute__((used)) static uint8_t FUNC_3(struct ibv_cq_ex *VAR_1)
{
 struct mlx4_cq *VAR_2 = FUNC_2(FUNC_1(VAR_1));

 if ((VAR_2->cur_qp) && (VAR_2->cur_qp->link_layer == VAR_0))
  return FUNC_0(VAR_2->cqe->sl_vid) >> 13;
 else
  return FUNC_0(VAR_2->cqe->sl_vid) >> 12;
}
