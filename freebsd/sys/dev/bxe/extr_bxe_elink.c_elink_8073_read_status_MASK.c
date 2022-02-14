
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {scalar_t__ line_speed; int link_status; int duplex; } ;
struct elink_phy {scalar_t__ req_line_speed; } ;
struct elink_params {int port; int lane_config; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int FUNC_2 (struct bxe_softc*,char*,int,int) ;
 int FUNC_3 (struct bxe_softc*,char*,int,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_4 (struct bxe_softc*,struct elink_phy*) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 scalar_t__ FUNC_6 (struct bxe_softc*,struct elink_phy*) ;
 int FUNC_7 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_8 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_9 (struct bxe_softc*,struct elink_phy*,struct elink_vars*) ;

__attribute__((used)) static uint8_t FUNC_10(struct elink_phy *VAR_23,
     struct elink_params *VAR_24,
     struct elink_vars *VAR_25)
{
 struct bxe_softc *VAR_26 = VAR_24->sc;
 uint8_t VAR_27 = 0;
 uint16_t VAR_28, VAR_29;
 uint16_t VAR_30 = 0;
 uint16_t VAR_31 = 0;

 FUNC_7(VAR_26, VAR_23,
   VAR_12, VAR_14, &VAR_28);

 FUNC_1(VAR_26, "8703 LASI status 0x%x\n", VAR_28);


 FUNC_7(VAR_26, VAR_23,
   VAR_10, VAR_11, &VAR_29);
 FUNC_7(VAR_26, VAR_23,
   VAR_10, VAR_11, &VAR_28);
 FUNC_2(VAR_26, "807x PCS status 0x%x->0x%x\n", VAR_29, VAR_28);

 FUNC_7(VAR_26, VAR_23,
   VAR_12, VAR_17, &VAR_28);


 FUNC_7(VAR_26, VAR_23,
   VAR_12, VAR_13, &VAR_29);

 FUNC_1(VAR_26, "KR 0x9003 0x%x\n", VAR_29);


 FUNC_7(VAR_26, VAR_23,
   VAR_10, VAR_11, &VAR_29);
 FUNC_1(VAR_26, "KR PCS status 0x%x\n", VAR_29);

 FUNC_7(VAR_26, VAR_23,
   VAR_12, VAR_19, &VAR_29);
 FUNC_7(VAR_26, VAR_23,
   VAR_12, VAR_19, &VAR_28);
 VAR_27 = ((VAR_28 & 4) == 4);
 FUNC_1(VAR_26, "PMA_REG_STATUS=0x%x\n", VAR_28);

 if (VAR_27 &&
      ((VAR_23->req_line_speed != VAR_2))) {
  if (FUNC_6(VAR_26, VAR_23) != 0)
   return 0;
 }
 FUNC_7(VAR_26, VAR_23,
   VAR_7, VAR_8, &VAR_31);
 FUNC_7(VAR_26, VAR_23,
   VAR_7, VAR_8, &VAR_31);


 FUNC_7(VAR_26, VAR_23,
   VAR_12, VAR_19, &VAR_29);
 FUNC_7(VAR_26, VAR_23,
   VAR_12, VAR_19, &VAR_28);
 FUNC_3(VAR_26, "KR PMA status 0x%x->0x%x,"
     "an_link_status=0x%x\n", VAR_29, VAR_28, VAR_31);

 VAR_27 = (((VAR_28 & 4) == 4) || (VAR_31 & (1<<1)));
 if (VAR_27 && FUNC_4(VAR_26, VAR_23)) {




  FUNC_8(VAR_26, VAR_23,
     VAR_12, VAR_18,
     0x26BC);


  FUNC_8(VAR_26, VAR_23,
     VAR_12, VAR_16,
     0x0333);
 }
 FUNC_7(VAR_26, VAR_23,
   VAR_12, VAR_15,
   &VAR_30);


 if ((VAR_30 & (1<<2)) && (!(VAR_30 & (1<<15)))) {
  VAR_27 = 1;
  VAR_25->line_speed = VAR_2;
  FUNC_1(VAR_26, "port %x: External link up in 10G\n",
      VAR_24->port);
 } else if ((VAR_30 & (1<<1)) && (!(VAR_30 & (1<<14)))) {
  VAR_27 = 1;
  VAR_25->line_speed = VAR_3;
  FUNC_1(VAR_26, "port %x: External link up in 2.5G\n",
      VAR_24->port);
 } else if ((VAR_30 & (1<<0)) && (!(VAR_30 & (1<<13)))) {
  VAR_27 = 1;
  VAR_25->line_speed = VAR_1;
  FUNC_1(VAR_26, "port %x: External link up in 1G\n",
      VAR_24->port);
 } else {
  VAR_27 = 0;
  FUNC_1(VAR_26, "port %x: External link is down\n",
      VAR_24->port);
 }

 if (VAR_27) {

  if (VAR_24->lane_config &
      VAR_22) {

   FUNC_7(VAR_26, VAR_23,
     VAR_20,
     VAR_21, &VAR_28);



   if (VAR_25->line_speed == VAR_1) {
    FUNC_0(VAR_26, "Swapping 1G polarity for"
           "the 8073\n");
    VAR_28 |= (1<<3);
   } else
    VAR_28 &= ~(1<<3);

   FUNC_8(VAR_26, VAR_23,
      VAR_20,
      VAR_21,
      VAR_28);
  }
  FUNC_9(VAR_26, VAR_23, VAR_25);
  FUNC_5(VAR_23, VAR_24, VAR_25);
  VAR_25->duplex = VAR_0;
 }

 if (VAR_25->link_status & VAR_4) {
  FUNC_7(VAR_26, VAR_23, VAR_7,
    VAR_9, &VAR_28);

  if (VAR_28 & (1<<5))
   VAR_25->link_status |=
    VAR_5;
  if (VAR_28 & (1<<7))
   VAR_25->link_status |=
    VAR_6;
 }

 return VAR_27;
}
