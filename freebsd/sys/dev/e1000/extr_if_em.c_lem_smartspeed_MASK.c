
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {scalar_t__ autoneg; } ;
struct TYPE_6__ {scalar_t__ type; int autoneg_advertised; } ;
struct TYPE_8__ {TYPE_2__ mac; TYPE_1__ phy; } ;
struct adapter {scalar_t__ smartspeed; TYPE_3__ hw; scalar_t__ link_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (TYPE_3__*,int ,int*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct adapter *VAR_11)
{
 u16 VAR_12;

 if (VAR_11->link_active || (VAR_11->hw.phy.type != VAR_10) ||
     VAR_11->hw.mac.autoneg == 0 ||
     (VAR_11->hw.phy.autoneg_advertised & VAR_0) == 0)
  return;

 if (VAR_11->smartspeed == 0) {


  FUNC_1(&VAR_11->hw, VAR_7, &VAR_12);
  if (!(VAR_12 & VAR_9))
   return;
  FUNC_1(&VAR_11->hw, VAR_7, &VAR_12);
  if (VAR_12 & VAR_9) {
   FUNC_1(&VAR_11->hw,
       VAR_6, &VAR_12);
   if(VAR_12 & VAR_1) {
    VAR_12 &= ~VAR_1;
    FUNC_2(&VAR_11->hw,
        VAR_6, VAR_12);
    VAR_11->smartspeed++;
    if(VAR_11->hw.mac.autoneg &&
       !FUNC_0(&VAR_11->hw) &&
       !FUNC_1(&VAR_11->hw,
        VAR_8, &VAR_12)) {
     VAR_12 |= (VAR_4 |
          VAR_5);
     FUNC_2(&VAR_11->hw,
         VAR_8, VAR_12);
    }
   }
  }
  return;
 } else if(VAR_11->smartspeed == VAR_2) {

  FUNC_1(&VAR_11->hw, VAR_6, &VAR_12);
  VAR_12 |= VAR_1;
  FUNC_2(&VAR_11->hw, VAR_6, VAR_12);
  if(VAR_11->hw.mac.autoneg &&
     !FUNC_0(&VAR_11->hw) &&
     !FUNC_1(&VAR_11->hw, VAR_8, &VAR_12)) {
   VAR_12 |= (VAR_4 |
        VAR_5);
   FUNC_2(&VAR_11->hw, VAR_8, VAR_12);
  }
 }

 if(VAR_11->smartspeed++ == VAR_3)
  VAR_11->smartspeed = 0;
}
