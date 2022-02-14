
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {int link_status; int phy_link_up; int line_speed; int duplex; int mac_type; int flow_ctrl; } ;
struct elink_phy {scalar_t__ req_line_speed; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int FUNC_2 (struct bxe_softc*,char*,int,int) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static elink_status_t FUNC_3(struct elink_phy *VAR_24,
         struct elink_params *VAR_25,
          struct elink_vars *VAR_26,
          uint16_t VAR_27,
          uint16_t VAR_28,
          uint16_t VAR_29)
{
 struct bxe_softc *VAR_30 = VAR_25->sc;
 if (VAR_24->req_line_speed == VAR_19)
  VAR_26->link_status |= VAR_22;
 if (VAR_27) {
  FUNC_0(VAR_30, "phy link up\n");

  VAR_26->phy_link_up = 1;
  VAR_26->link_status |= VAR_23;

  switch (VAR_28) {
  case 135:
   VAR_26->line_speed = VAR_13;
   if (VAR_29 == VAR_0)
    VAR_26->link_status |= VAR_7;
   else
    VAR_26->link_status |= VAR_8;
   break;

  case 142:
   VAR_26->line_speed = VAR_14;
   if (VAR_29 == VAR_0)
    VAR_26->link_status |= VAR_4;
   else
    VAR_26->link_status |= VAR_5;
   break;

  case 134:
  case 133:
   VAR_26->line_speed = VAR_15;
   if (VAR_29 == VAR_0)
    VAR_26->link_status |= VAR_2;
   else
    VAR_26->link_status |= VAR_3;
   break;

  case 130:
   VAR_26->line_speed = VAR_18;
   if (VAR_29 == VAR_0)
    VAR_26->link_status |= VAR_10;
   else
    VAR_26->link_status |= VAR_11;
   break;

  case 129:
  case 128:
   FUNC_1(VAR_30,
     "link speed unsupported  gp_status 0x%x\n",
      VAR_28);
   return VAR_20;

  case 138:
  case 140:
  case 141:
  case 139:
  case 137:
  case 136:
   VAR_26->line_speed = VAR_16;
   VAR_26->link_status |= VAR_6;
   break;
  case 132:
  case 131:
   VAR_26->line_speed = VAR_17;
   VAR_26->link_status |= VAR_9;
   break;
  default:
   FUNC_1(VAR_30,
      "link speed unsupported gp_status 0x%x\n",
      VAR_28);
   return VAR_20;
  }
 } else {
  FUNC_0(VAR_30, "phy link down\n");

  VAR_26->phy_link_up = 0;

  VAR_26->duplex = VAR_0;
  VAR_26->flow_ctrl = VAR_1;
  VAR_26->mac_type = VAR_12;
 }
 FUNC_2(VAR_30, " in elink_get_link_speed_duplex vars->link_status = %x, vars->duplex = %x\n",
   VAR_26->link_status, VAR_26->duplex);
 FUNC_2(VAR_30, " phy_link_up %x line_speed %d\n",
      VAR_26->phy_link_up, VAR_26->line_speed);
 return VAR_21;
}
