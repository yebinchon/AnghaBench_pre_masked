
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_ib_dev {int uar_lock; int uar_map; TYPE_3__* dev; } ;
struct TYPE_4__ {int device; } ;
struct mlx4_ib_cq {int mcq; TYPE_1__ ibcq; } ;
struct ib_cq {int dummy; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
struct TYPE_6__ {TYPE_2__* persist; } ;
struct TYPE_5__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 struct mlx4_ib_cq* FUNC_2 (struct ib_cq*) ;
 struct mlx4_ib_dev* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct ib_cq *VAR_5, enum ib_cq_notify_flags VAR_6)
{
 struct mlx4_ib_cq *VAR_7 = FUNC_2(VAR_5);
 struct mlx4_ib_dev *VAR_8 = FUNC_3(VAR_7->ibcq.device);

 if (FUNC_4(VAR_8->dev->persist->state &
       VAR_4))
  return -1;

 FUNC_1(&VAR_7->mcq,
      (VAR_6 & VAR_1) == VAR_0 ?
      VAR_3 : VAR_2,
      VAR_8->uar_map,
      FUNC_0(&VAR_8->uar_lock));

 return 0;
}
