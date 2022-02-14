
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filter_disabled; } ;
struct mlx5e_priv {int state; TYPE_2__* ifp; TYPE_1__ vlan; } ;
struct TYPE_4__ {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void
FUNC_2(struct mlx5e_priv *VAR_2)
{
 if (VAR_2->vlan.filter_disabled) {
  VAR_2->vlan.filter_disabled = 0;
  if (VAR_2->ifp->if_flags & VAR_0)
   return;
  if (FUNC_1(VAR_1, &VAR_2->state))
   FUNC_0(VAR_2);
 }
}
