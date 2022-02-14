
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifmediareq {int dummy; } ;
struct ifmedia {int ifm_media; } ;
struct TYPE_2__ {int autoneg; int req_link_speed; } ;
struct bnxt_softc {int ctx; TYPE_1__ link_info; int dev; } ;
typedef int if_ctx_t ;


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
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bnxt_softc*,int,int,int) ;
 int FUNC_3 (int ,struct ifmediareq*) ;
 int FUNC_4 (int ,char*) ;
 struct ifmedia* FUNC_5 (int ) ;
 struct bnxt_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_12)
{
 struct bnxt_softc *VAR_13 = FUNC_6(VAR_12);
 struct ifmedia *VAR_14 = FUNC_5(VAR_12);
 struct ifmediareq VAR_15;
 int VAR_16;

 if (FUNC_1(VAR_14->ifm_media) != VAR_11)
  return VAR_1;

 switch (FUNC_0(VAR_14->ifm_media)) {
 case 146:
  VAR_13->link_info.autoneg &= ~VAR_0;
  VAR_13->link_info.req_link_speed =
      VAR_3;
  break;
 case 153:
 case 151:
 case 152:
  VAR_13->link_info.autoneg &= ~VAR_0;
  VAR_13->link_info.req_link_speed =
      VAR_5;
  break;
 case 139:
 case 138:
  VAR_13->link_info.autoneg &= ~VAR_0;
  VAR_13->link_info.req_link_speed =
      VAR_8;
  break;
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
  VAR_13->link_info.autoneg &= ~VAR_0;
  VAR_13->link_info.req_link_speed =
      VAR_4;
  break;
 case 140:
  VAR_13->link_info.autoneg &= ~VAR_0;
  VAR_13->link_info.req_link_speed =
      VAR_6;
  break;
 case 137:
 case 136:
 case 135:
  VAR_13->link_info.autoneg &= ~VAR_0;
  VAR_13->link_info.req_link_speed =
      VAR_7;
  break;
 case 134:
 case 133:
 case 132:
 case 131:
  VAR_13->link_info.autoneg &= ~VAR_0;
  VAR_13->link_info.req_link_speed =
      VAR_9;
  break;
 case 130:
 case 129:
  VAR_13->link_info.autoneg &= ~VAR_0;
  VAR_13->link_info.req_link_speed =
      VAR_10;
  break;
 case 150:
 case 149:
 case 148:
 case 147:
  VAR_13->link_info.autoneg &= ~VAR_0;
  VAR_13->link_info.req_link_speed =
   VAR_2;
  break;
 default:
  FUNC_4(VAR_13->dev,
      "Unsupported media type!  Using auto\n");

 case 128:

  VAR_13->link_info.autoneg |= VAR_0;
  break;
 }
 VAR_16 = FUNC_2(VAR_13, 1, 1, 1);
 FUNC_3(VAR_13->ctx, &VAR_15);
 return VAR_16;
}
