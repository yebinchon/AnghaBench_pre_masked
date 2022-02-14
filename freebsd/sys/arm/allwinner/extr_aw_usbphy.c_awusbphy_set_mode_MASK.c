
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct phynode {int dummy; } ;
struct awusbphy_softc {int mode; int phy_ctrl; TYPE_1__* phy_conf; } ;
typedef int device_t ;
struct TYPE_2__ {int phy0_route; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;


 int FUNC_1 (int ,int ,int ) ;
 int VAR_14 ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct awusbphy_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct phynode*) ;
 intptr_t FUNC_7 (struct phynode*) ;

__attribute__((used)) static int
FUNC_8(struct phynode *VAR_15, int VAR_16)
{
 device_t VAR_17;
 intptr_t VAR_18;
 struct awusbphy_softc *VAR_19;
 uint32_t VAR_20;
 int VAR_21, VAR_22;

 VAR_17 = FUNC_6(VAR_15);
 VAR_18 = FUNC_7(VAR_15);
 VAR_19 = FUNC_5(VAR_17);

 if (VAR_18 != 0) {
  if (VAR_16 != 129)
   return (VAR_2);
  return (0);
 }

 switch (VAR_16) {
 case 129:
  VAR_20 = FUNC_3(VAR_19->phy_ctrl, VAR_13);
  VAR_20 &= ~(VAR_14 | VAR_9 | VAR_0);
  VAR_20 |= (VAR_10 | VAR_1);
  VAR_20 &= ~VAR_3;
  VAR_20 |= (VAR_4 << VAR_5);
  VAR_20 &= ~VAR_6;
  VAR_20 |= (VAR_7 << VAR_8);
  FUNC_4(VAR_19->phy_ctrl, VAR_13, VAR_20);
  if (VAR_19->phy_conf->phy0_route == 1) {
   VAR_21 = FUNC_2(VAR_17, &VAR_22);
   if (VAR_21)
    goto out;
   if (VAR_22 == 0)
    FUNC_0(VAR_19->phy_ctrl, VAR_11,
      VAR_12);
   else
    FUNC_1(VAR_19->phy_ctrl, VAR_11,
      VAR_12);
  }
  break;
 case 128:

  break;
 }

 VAR_19->mode = VAR_16;


out:
 return (0);
}
