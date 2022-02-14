
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_ib_demux_pv_ctx {scalar_t__ state; int * cq; int * pd; TYPE_1__* qp; scalar_t__ has_smi; int wq; } ;
struct TYPE_2__ {int * qp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx4_ib_demux_pv_ctx*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct mlx4_ib_demux_pv_ctx *VAR_4)
{
 if (VAR_4->state > VAR_0) {
  VAR_4->state = VAR_1;
  FUNC_0(VAR_4->wq);
  if (VAR_4->has_smi) {
   FUNC_3(VAR_4->qp[0].qp);
   VAR_4->qp[0].qp = ((void*)0);
   FUNC_4(VAR_4, VAR_3, 0);
  }
  FUNC_3(VAR_4->qp[1].qp);
  VAR_4->qp[1].qp = ((void*)0);
  FUNC_4(VAR_4, VAR_2, 0);
  FUNC_1(VAR_4->pd);
  VAR_4->pd = ((void*)0);
  FUNC_2(VAR_4->cq);
  VAR_4->cq = ((void*)0);
  VAR_4->state = VAR_0;
 }
}
