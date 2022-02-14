
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_ether {int ue_dev; } ;
struct axe_softc {int sc_phyno; struct usb_ether sc_ue; } ;


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
 int FUNC_0 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct axe_softc*,int ,int ,int,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (int ,char*,int,int) ;
 int VAR_17 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct usb_ether*,int) ;

__attribute__((used)) static void
FUNC_7(struct axe_softc *VAR_18)
{
 struct usb_ether *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 uint16_t VAR_23, VAR_24;

 VAR_19 = &VAR_18->sc_ue;
 FUNC_1(VAR_18, VAR_4, 0, 0, ((void*)0));

 FUNC_1(VAR_18, VAR_2, 0, 0x0017, &VAR_23);
 VAR_23 = FUNC_5(VAR_23);
 FUNC_1(VAR_18, VAR_3, 0, 0, ((void*)0));


 if (VAR_23 == 0xffff) {
  VAR_22 = 131;
  VAR_20 = 1;
  VAR_21 = 0;
 } else {
  VAR_22 = VAR_23 & 0x7f;
  VAR_20 = (VAR_23 & 0x80) ? 0 : 1;
  VAR_21 = VAR_23 >> 8;
 }

 if (VAR_16)
  FUNC_4(VAR_18->sc_ue.ue_dev,
      "EEPROM data : 0x%04x, phymode : 0x%02x\n", VAR_23,
      VAR_22);

 switch (VAR_22) {
 case 131:
  if (VAR_20 == 1) {
   FUNC_0(VAR_13 | VAR_8,
       VAR_17 / 32);
   FUNC_0(VAR_8 | VAR_11 | VAR_12,
       VAR_17 / 32);
   FUNC_0(VAR_8 | VAR_12, VAR_17 / 4);
   FUNC_0(VAR_8 | VAR_11 | VAR_12,
       VAR_17 / 32);
  } else {
   FUNC_0(VAR_13 | VAR_9 |
       VAR_10, VAR_17 / 3);
   if (VAR_21 == 1) {
    FUNC_0(VAR_10, VAR_17 / 3);
    FUNC_0(VAR_9 | VAR_10,
        VAR_17 / 3);
   } else {
    FUNC_0(VAR_9 | VAR_10 |
        VAR_11 | VAR_12, VAR_17 / 32);
    FUNC_0(VAR_9 | VAR_10 |
        VAR_12, VAR_17 / 4);
    FUNC_0(VAR_9 | VAR_10 |
        VAR_11 | VAR_12, VAR_17 / 32);
   }
  }
  break;
 case 134:
 case 133:
 case 132:
  if (VAR_20 == 1)
   FUNC_0(VAR_13 | VAR_7 |
       VAR_8, VAR_17 / 32);
  else
   FUNC_0(VAR_13 | VAR_9 |
       VAR_10, VAR_17 / 32);
  break;
 case 135:
  FUNC_0(VAR_13 | VAR_9 |
      VAR_10, VAR_17 / 32);
  FUNC_0(VAR_9 | VAR_10 | VAR_11 |
      VAR_12, VAR_17 / 32);
  FUNC_0(VAR_9 | VAR_10 | VAR_12, VAR_17 / 4);
  FUNC_0(VAR_9 | VAR_10 | VAR_11 |
      VAR_12, VAR_17 / 32);
  break;
 case 129:
 case 130:
 case 128:
  VAR_24 = VAR_20 == 1 ? VAR_7 | VAR_8 :
      VAR_9 | VAR_10;
  FUNC_0(VAR_24, VAR_17 / 32);
  FUNC_0(VAR_24 | VAR_11 | VAR_12, VAR_17 / 32);
  FUNC_0(VAR_24 | VAR_12, VAR_17 / 4);
  FUNC_0(VAR_24 | VAR_11 | VAR_12, VAR_17 / 32);
  if (VAR_22 == 129) {
   FUNC_3(VAR_19->ue_dev, VAR_18->sc_phyno,
       0x1F, 0x0005);
   FUNC_3(VAR_19->ue_dev, VAR_18->sc_phyno,
       0x0C, 0x0000);
   VAR_24 = FUNC_2(VAR_19->ue_dev, VAR_18->sc_phyno,
       0x0001);
   FUNC_3(VAR_19->ue_dev, VAR_18->sc_phyno,
       0x01, VAR_24 | 0x0080);
   FUNC_3(VAR_19->ue_dev, VAR_18->sc_phyno,
       0x1F, 0x0000);
  }
  break;
 default:

  break;
 }


 FUNC_1(VAR_18, VAR_6, 0, VAR_14, ((void*)0));
 FUNC_6(VAR_19, VAR_17 / 4);

 FUNC_1(VAR_18, VAR_6, 0,
     VAR_15 | VAR_0, ((void*)0));
 FUNC_6(VAR_19, VAR_17 / 4);

 FUNC_1(VAR_18, VAR_5, 0, 0, ((void*)0));
 FUNC_6(VAR_19, VAR_17 / 4);

 FUNC_1(VAR_18, VAR_1, 0, 0, ((void*)0));
}
