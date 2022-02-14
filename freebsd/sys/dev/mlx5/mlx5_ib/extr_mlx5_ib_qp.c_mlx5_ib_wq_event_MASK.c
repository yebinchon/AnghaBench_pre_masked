
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wq_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct mlx5_ib_rwq {TYPE_2__ ibwq; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_core_qp {int qpn; } ;
struct TYPE_3__ {TYPE_2__* wq; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;


 int VAR_0 ;

 int FUNC_0 (struct mlx5_ib_dev*,char*,int,int ) ;
 int FUNC_1 (struct ib_event*,int ) ;
 struct mlx5_ib_dev* FUNC_2 (int ) ;
 struct mlx5_ib_rwq* FUNC_3 (struct mlx5_core_qp*) ;

__attribute__((used)) static void FUNC_4(struct mlx5_core_qp *VAR_1, int VAR_2)
{
 struct mlx5_ib_rwq *VAR_3 = FUNC_3(VAR_1);
 struct mlx5_ib_dev *VAR_4 = FUNC_2(VAR_3->ibwq.device);
 struct ib_event VAR_5;

 if (VAR_3->ibwq.event_handler) {
  VAR_5.device = VAR_3->ibwq.device;
  VAR_5.element.wq = &VAR_3->ibwq;
  switch (VAR_2) {
  case 128:
   VAR_5.event = VAR_0;
   break;
  default:
   FUNC_0(VAR_4, "Unexpected event type %d on WQ %06x\n", VAR_2, VAR_1->qpn);
   return;
  }

  VAR_3->ibwq.event_handler(&VAR_5, VAR_3->ibwq.wq_context);
 }
}
