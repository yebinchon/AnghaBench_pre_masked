
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {int duplex; int link_status; int flow_ctrl; } ;
struct elink_phy {scalar_t__ req_line_speed; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef scalar_t__ elink_status_t ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int FUNC_2 (struct bxe_softc*,char*,int,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct elink_params*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (struct elink_phy*,struct elink_params*) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*,struct elink_vars*,int) ;
 scalar_t__ FUNC_6 (struct elink_phy*,struct elink_params*,struct elink_vars*,int,int,int) ;
 int FUNC_7 (struct elink_phy*,struct elink_params*,struct elink_vars*,int) ;

__attribute__((used)) static elink_status_t FUNC_8(struct elink_phy *VAR_24,
          struct elink_params *VAR_25,
          struct elink_vars *VAR_26)
{
 struct bxe_softc *VAR_27 = VAR_25->sc;

 uint16_t VAR_28, VAR_29 = VAR_1, VAR_30 = 0, VAR_31;
 elink_status_t VAR_32 = VAR_5;


 FUNC_0(VAR_27, VAR_24,
     VAR_22,
     VAR_14,
     &VAR_28);
 if (VAR_28 & VAR_15) {
  VAR_29 = VAR_0;
  FUNC_1(VAR_27, "duplex status read from phy is = %x\n",
    VAR_29);
 } else {
  FUNC_1(VAR_27, "phy status does not allow interface to be FULL_DUPLEX : %x\n",
   VAR_28);
 }


 if (VAR_28 & VAR_16)
  VAR_30 = 1;
 VAR_31 = VAR_28 & VAR_2;
 FUNC_2(VAR_27, "gp_status 0x%x, is_link_up %d, speed_mask 0x%x\n",
         VAR_28, VAR_30, VAR_31);
 VAR_32 = FUNC_6(VAR_24, VAR_25, VAR_26, VAR_30, VAR_31,
      VAR_29);
 if (VAR_32 == VAR_4)
  return VAR_32;

 if (VAR_28 & VAR_16) {
  if (FUNC_3(VAR_25)) {
   VAR_26->duplex = VAR_29;
   FUNC_5(VAR_24, VAR_25, VAR_26, VAR_28);
   if (VAR_24->req_line_speed == VAR_3)
    FUNC_7(VAR_24, VAR_25, VAR_26,
            VAR_28);
  }
 } else {
  if ((VAR_24->req_line_speed == VAR_3) &&
      FUNC_3(VAR_25)) {

   FUNC_4(VAR_24, VAR_25);
  }
 }


 if (FUNC_3(VAR_25) &&
     (VAR_26->link_status & VAR_6)) {
  uint16_t VAR_33;

  FUNC_0(VAR_27, VAR_24, VAR_21,
      VAR_13, &VAR_33);

  if (VAR_33 & VAR_10)
   VAR_26->link_status |=
    VAR_7;
  if (VAR_33 & (VAR_12 |
      VAR_11))
   VAR_26->link_status |=
    VAR_8;

  FUNC_0(VAR_27, VAR_24, VAR_23,
      VAR_17, &VAR_33);

  if (VAR_33 & VAR_20)
   VAR_26->link_status |=
    VAR_9;
  if (VAR_33 & (VAR_18 | VAR_19))
   VAR_26->link_status |=
    VAR_8;
 }

 FUNC_2(VAR_27, "duplex %x  flow_ctrl 0x%x link_status 0x%x\n",
     VAR_26->duplex, VAR_26->flow_ctrl, VAR_26->link_status);
 return VAR_32;
}
