
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int duplex; int speed; } ;
struct xgbe_prv_data {int speed_set; TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_0 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_4)
{
 if (FUNC_0(VAR_4)) {
  VAR_4->phy.speed = VAR_2;
 } else {
  switch (VAR_4->speed_set) {
  case 129:
   VAR_4->phy.speed = VAR_1;
   break;

  case 128:
   VAR_4->phy.speed = VAR_3;
   break;
  }
 }
 VAR_4->phy.duplex = VAR_0;
}
