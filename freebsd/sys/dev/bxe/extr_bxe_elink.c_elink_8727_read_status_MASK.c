
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {scalar_t__ line_speed; int fault_detected; int duplex; } ;
struct elink_phy {int flags; scalar_t__ req_line_speed; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (struct bxe_softc*,char*,int) ;
 scalar_t__ FUNC_3 (struct elink_params*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*) ;
 int FUNC_6 (struct bxe_softc*,struct elink_phy*,int ) ;
 int FUNC_7 (struct bxe_softc*,int ,int) ;
 int FUNC_8 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_9 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_10 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_11 (struct bxe_softc*,struct elink_phy*,int ,int ) ;
 int FUNC_12 (struct elink_params*,struct elink_phy*,int) ;

__attribute__((used)) static uint8_t FUNC_13(struct elink_phy *VAR_18,
     struct elink_params *VAR_19,
     struct elink_vars *VAR_20)

{
 struct bxe_softc *VAR_21 = VAR_19->sc;
 uint8_t VAR_22 = 0;
 uint16_t VAR_23 = 0;
 uint16_t VAR_24, VAR_25, VAR_26;


 FUNC_8(VAR_21, VAR_18,
   VAR_6, VAR_7,
   &VAR_25);
 if (!VAR_25)
  return 0;


 FUNC_8(VAR_21, VAR_18,
   VAR_6, VAR_9,
   &VAR_24);
 VAR_20->line_speed = 0;
 FUNC_2(VAR_21, "8727 RX_ALARM_STATUS  0x%x\n", VAR_24);

 FUNC_11(VAR_21, VAR_18, VAR_12,
        VAR_11);

 FUNC_8(VAR_21, VAR_18,
   VAR_6, VAR_10, &VAR_26);

 FUNC_2(VAR_21, "8727 LASI status 0x%x\n", VAR_26);


 FUNC_8(VAR_21, VAR_18,
   VAR_6, VAR_16, &VAR_26);




 if (!(VAR_18->flags & VAR_1) && !(VAR_24 & (1<<5))) {

  FUNC_8(VAR_21, VAR_18,
    VAR_6, VAR_14,
    &VAR_26);

  if ((VAR_26 & (1<<8)) == 0) {
   uint8_t VAR_27 = VAR_19->port;
   if (!FUNC_0(VAR_21))
    VAR_27 = FUNC_4(VAR_21) + (VAR_19->port << 1);
   FUNC_2(VAR_21,
      "8727 Power fault has been detected on port %d\n",
      VAR_27);
   FUNC_7(VAR_21, VAR_3, VAR_27);







   FUNC_9(VAR_21, VAR_18,
      VAR_6,
      VAR_8, (1<<5));

   FUNC_8(VAR_21, VAR_18,
     VAR_6,
     VAR_17, &VAR_26);

   VAR_26 |= (1<<8);
   FUNC_9(VAR_21, VAR_18,
      VAR_6,
      VAR_17, VAR_26);

   FUNC_8(VAR_21, VAR_18,
    VAR_6,
    VAR_9, &VAR_24);
   FUNC_6(VAR_19->sc, VAR_18, 0);
   return 0;
  }
 }


 if (VAR_24 & (1<<5)) {
  FUNC_5(VAR_18, VAR_19);

  FUNC_9(VAR_21, VAR_18,
     VAR_6, VAR_8,
     ((1<<5) | (1<<2)));
 }

 if (!(VAR_18->flags & VAR_2)) {
  FUNC_1(VAR_21, "Enabling 8727 TX laser\n");
  FUNC_12(VAR_19, VAR_18, 1);
 } else {
  FUNC_1(VAR_21, "Tx is disabled\n");
  return 0;
 }

 FUNC_8(VAR_21, VAR_18,
   VAR_6,
   VAR_13, &VAR_23);




 if ((VAR_23 & (1<<2)) && (!(VAR_23 & (1<<15)))) {
  VAR_22 = 1;
  VAR_20->line_speed = VAR_5;
  FUNC_2(VAR_21, "port %x: External link up in 10G\n",
      VAR_19->port);
 } else if ((VAR_23 & (1<<0)) && (!(VAR_23 & (1<<13)))) {
  VAR_22 = 1;
  VAR_20->line_speed = VAR_4;
  FUNC_2(VAR_21, "port %x: External link up in 1G\n",
      VAR_19->port);
 } else {
  VAR_22 = 0;
  FUNC_2(VAR_21, "port %x: External link is down\n",
      VAR_19->port);
 }


 if (VAR_20->line_speed == VAR_5) {
  FUNC_8(VAR_21, VAR_18, VAR_6,
       VAR_12, &VAR_26);

  FUNC_8(VAR_21, VAR_18, VAR_6,
       VAR_12, &VAR_26);

  if (VAR_26 & (1<<0)) {
   VAR_20->fault_detected = 1;
  }
 }

 if (VAR_22) {
  FUNC_10(VAR_18, VAR_19, VAR_20);
  VAR_20->duplex = VAR_0;
  FUNC_2(VAR_21, "duplex = 0x%x\n", VAR_20->duplex);
 }

 if ((FUNC_3(VAR_19)) &&
     (VAR_18->req_line_speed == VAR_4)) {
  FUNC_8(VAR_21, VAR_18,
    VAR_6,
    VAR_15, &VAR_26);



  if (VAR_22)
   VAR_26 &= ~(3<<10);
  else
   VAR_26 |= (3<<10);
  FUNC_9(VAR_21, VAR_18,
     VAR_6,
     VAR_15, VAR_26);
 }
 return VAR_22;
}
