
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ifmedia {int ifm_media; } ;
struct TYPE_5__ {int forced_speed_duplex; void* autoneg; } ;
struct TYPE_4__ {int autoneg_advertised; } ;
struct TYPE_6__ {TYPE_2__ mac; TYPE_1__ phy; } ;
struct adapter {int dev; TYPE_3__ hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;






 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 struct ifmedia* FUNC_5 (int ) ;
 struct adapter* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_12)
{
 struct adapter *VAR_13 = FUNC_6(VAR_12);
 struct ifmedia *VAR_14 = FUNC_5(VAR_12);

 FUNC_2("em_if_media_change: begin");

 if (FUNC_1(VAR_14->ifm_media) != VAR_9)
  return (VAR_7);

 switch (FUNC_0(VAR_14->ifm_media)) {
 case 128:
  VAR_13->hw.mac.autoneg = VAR_6;
  VAR_13->hw.phy.autoneg_advertised = VAR_5;
  break;
 case 133:
 case 132:
 case 131:
  VAR_13->hw.mac.autoneg = VAR_6;
  VAR_13->hw.phy.autoneg_advertised = VAR_0;
  break;
 case 130:
  VAR_13->hw.mac.autoneg = VAR_8;
  VAR_13->hw.phy.autoneg_advertised = 0;
  if ((VAR_14->ifm_media & VAR_11) == VAR_10)
   VAR_13->hw.mac.forced_speed_duplex = VAR_1;
  else
   VAR_13->hw.mac.forced_speed_duplex = VAR_2;
  break;
 case 129:
  VAR_13->hw.mac.autoneg = VAR_8;
  VAR_13->hw.phy.autoneg_advertised = 0;
  if ((VAR_14->ifm_media & VAR_11) == VAR_10)
   VAR_13->hw.mac.forced_speed_duplex = VAR_3;
  else
   VAR_13->hw.mac.forced_speed_duplex = VAR_4;
  break;
 default:
  FUNC_3(VAR_13->dev, "Unsupported media type\n");
 }

 FUNC_4(VAR_12);

 return (0);
}
