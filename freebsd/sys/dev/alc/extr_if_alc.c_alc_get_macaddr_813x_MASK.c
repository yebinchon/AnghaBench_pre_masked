
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct alc_softc {int alc_phyaddr; int alc_dev; TYPE_1__* alc_ident; } ;
struct TYPE_2__ {int deviceid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int FUNC_2 (int) ;






 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct alc_softc*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7(struct alc_softc *VAR_14)
{
 uint32_t VAR_15;
 uint16_t VAR_16;
 int VAR_17, VAR_18;

 VAR_17 = 0;
 VAR_15 = FUNC_0(VAR_14, VAR_4);
 if ((FUNC_0(VAR_14, VAR_1) & VAR_9) != 0 &&
     (FUNC_0(VAR_14, VAR_6) & VAR_12) != 0) {




  VAR_17++;
  switch (VAR_14->alc_ident->deviceid) {
  case 133:
  case 132:
   if ((VAR_15 & VAR_10) == 0) {
    VAR_15 |= VAR_10;
    FUNC_1(VAR_14, VAR_4, VAR_15);
    FUNC_0(VAR_14, VAR_4);
    FUNC_2(1000);
   }
   break;
  case 131:
  case 130:
  case 129:
  case 128:
   FUNC_5(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_2, 0x00);
   VAR_16 = FUNC_4(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_3);
   FUNC_5(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_3, VAR_16 & 0xFF7F);
   FUNC_5(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_2, 0x3B);
   VAR_16 = FUNC_4(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_3);
   FUNC_5(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_3, VAR_16 | 0x0008);
   FUNC_2(20);
   break;
  }

  FUNC_1(VAR_14, VAR_0,
      FUNC_0(VAR_14, VAR_0) & ~VAR_8);
  FUNC_1(VAR_14, VAR_7, 0);
  FUNC_0(VAR_14, VAR_7);

  FUNC_1(VAR_14, VAR_5, FUNC_0(VAR_14, VAR_5) |
      VAR_11);
  for (VAR_18 = 100; VAR_18 > 0; VAR_18--) {
   FUNC_2(1000);
   if ((FUNC_0(VAR_14, VAR_5) &
       VAR_11) == 0)
    break;
  }
  if (VAR_18 == 0)
   FUNC_6(VAR_14->alc_dev,
       "reloading EEPROM timeout!\n");
 } else {
  if (VAR_13)
   FUNC_6(VAR_14->alc_dev, "EEPROM not found!\n");
 }
 if (VAR_17 != 0) {
  switch (VAR_14->alc_ident->deviceid) {
  case 133:
  case 132:
   if ((VAR_15 & VAR_10) != 0) {
    VAR_15 &= ~VAR_10;
    FUNC_1(VAR_14, VAR_4, VAR_15);
    FUNC_0(VAR_14, VAR_4);
    FUNC_2(1000);
   }
   break;
  case 131:
  case 130:
  case 129:
  case 128:
   FUNC_5(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_2, 0x00);
   VAR_16 = FUNC_4(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_3);
   FUNC_5(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_3, VAR_16 | 0x0080);
   FUNC_5(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_2, 0x3B);
   VAR_16 = FUNC_4(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_3);
   FUNC_5(VAR_14->alc_dev, VAR_14->alc_phyaddr,
       VAR_3, VAR_16 & 0xFFF7);
   FUNC_2(20);
   break;
  }
 }

 FUNC_3(VAR_14);
}
