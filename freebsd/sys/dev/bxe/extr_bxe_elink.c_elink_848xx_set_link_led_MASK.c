
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_phy {int type; } ;
struct elink_params {int port; int hw_led_mode; int link_flags; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int FUNC_3 (struct bxe_softc*,char*,int) ;




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
 int VAR_14 ;
 int FUNC_4 (struct bxe_softc*,int ) ;
 int FUNC_5 (struct bxe_softc*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (struct bxe_softc*,int ,int) ;
 int FUNC_7 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_8 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_9 (struct elink_params*) ;

__attribute__((used)) static void FUNC_10(struct elink_phy *VAR_18,
         struct elink_params *VAR_19, uint8_t VAR_20)
{
 struct bxe_softc *VAR_21 = VAR_19->sc;
 uint16_t VAR_22;
 uint8_t VAR_23;

 if (!(FUNC_0(VAR_21)))
  VAR_23 = FUNC_5(VAR_21);
 else
  VAR_23 = VAR_19->port;
 switch (VAR_20) {
 case 130:

  FUNC_3(VAR_21, "Port 0x%x: LED MODE OFF\n", VAR_23);

  if ((VAR_19->hw_led_mode << VAR_17) ==
      VAR_15) {


   FUNC_8(VAR_21, VAR_18,
     VAR_2,
     VAR_3,
     0x0);

   FUNC_8(VAR_21, VAR_18,
     VAR_2,
     VAR_4,
     0x0);

   FUNC_8(VAR_21, VAR_18,
     VAR_2,
     VAR_5,
     0x0);

   FUNC_8(VAR_21, VAR_18,
     VAR_2,
     VAR_6,
     0x0);

  } else {
   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_3,
      0x0);
  }
  break;
 case 131:

  FUNC_3(VAR_21, "Port 0x%x: LED MODE FRONT PANEL OFF\n",
     VAR_23);

  if ((VAR_19->hw_led_mode << VAR_17) ==
      VAR_15) {


   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_3,
      0x0);

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_4,
      0x0);

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_5,
      0x0);

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_6,
      0x20);

  } else {
   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_3,
      0x0);
   if (VAR_18->type ==
       VAR_14) {



    if (FUNC_4(VAR_21, VAR_13 +
        VAR_19->port*4) &
        VAR_1) {
     VAR_19->link_flags |=
     VAR_0;

     FUNC_6(
      VAR_21,
      VAR_13 +
      VAR_19->port*4,
      VAR_1);
    }
    FUNC_8(VAR_21, VAR_18,
       VAR_2,
       VAR_10,
       0x0);
   }
  }
  break;
 case 129:

  FUNC_3(VAR_21, "Port 0x%x: LED MODE ON\n", VAR_23);

  if ((VAR_19->hw_led_mode << VAR_17) ==
      VAR_15) {

   FUNC_7(VAR_21, VAR_18,
     VAR_2,
     VAR_7,
     &VAR_22);
   VAR_22 &= 0x8000;
   VAR_22 |= 0x2492;

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_7,
      VAR_22);


   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_3,
      0x0);

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_4,
      0x20);

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_5,
      0x20);

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_6,
      0x0);
  } else {
   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_3,
      0x20);
   if (VAR_18->type ==
       VAR_14) {



    if (FUNC_4(VAR_21, VAR_13 +
        VAR_19->port*4) &
        VAR_1) {
     VAR_19->link_flags |=
     VAR_0;

     FUNC_6(
      VAR_21,
      VAR_13 +
      VAR_19->port*4,
      VAR_1);
    }
    FUNC_8(VAR_21, VAR_18,
       VAR_2,
       VAR_10,
       0x20);
   }
  }
  break;

 case 128:

  FUNC_3(VAR_21, "Port 0x%x: LED MODE OPER\n", VAR_23);

  if ((VAR_19->hw_led_mode << VAR_17) ==
      VAR_15) {


   FUNC_7(VAR_21, VAR_18,
     VAR_2,
     VAR_7,
     &VAR_22);

   if (!((VAR_22 &
          VAR_8)
     >> VAR_9)) {
    FUNC_2(VAR_21, "Setting LINK_SIGNAL\n");
    FUNC_8(VAR_21, VAR_18,
       VAR_2,
       VAR_7,
       0xa492);
   }


   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_3,
      0x10);

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_4,
      0x80);

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_5,
      0x98);

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_6,
      0x40);

  } else {




   VAR_22 = ((VAR_19->hw_led_mode <<
    VAR_17) ==
          VAR_16) ? 0x98 : 0x80;

   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_3,
      VAR_22);


   FUNC_7(VAR_21, VAR_18,
     VAR_2,
     VAR_7,
     &VAR_22);
   VAR_22 &= ~(7<<6);
   VAR_22 |= (1<<6);
   FUNC_8(VAR_21, VAR_18,
      VAR_2,
      VAR_7,
      VAR_22);
   if (VAR_18->type ==
       VAR_14) {



    FUNC_8(VAR_21, VAR_18,
       VAR_2,
       VAR_10,
       0x40);
    if (VAR_19->link_flags &
        VAR_0) {
     FUNC_9(VAR_19);
     VAR_19->link_flags &=
      ~VAR_0;
    }
   }
  }
  break;
 }




 if (FUNC_1(VAR_21)) {
  FUNC_7(VAR_21, VAR_18, VAR_11,
    VAR_12, &VAR_22);
 }
}
