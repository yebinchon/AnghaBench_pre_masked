
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ autoneg; int advertising; scalar_t__ speed; } ;
struct xgbe_prv_data {TYPE_1__ phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct xgbe_prv_data *VAR_3)
{
 if (VAR_3->phy.autoneg == VAR_1) {
  if (VAR_3->phy.advertising & VAR_0)
   return 1;
 } else {
  if (VAR_3->phy.speed == VAR_2)
   return 1;
 }

 return 0;
}
