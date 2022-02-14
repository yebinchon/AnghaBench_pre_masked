
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct age_softc {int age_phyaddr; int age_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct age_softc*,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct age_softc *VAR_15)
{
 uint16_t VAR_16, VAR_17;
 int VAR_18, VAR_19;


 FUNC_0(VAR_15, VAR_0, VAR_9);
 FUNC_1(2000);
 FUNC_0(VAR_15, VAR_0, VAR_8);
 FUNC_1(2000);
 FUNC_3(VAR_15->age_dev, VAR_15->age_phyaddr, VAR_10, VAR_6);
 for (VAR_19 = 0, VAR_17 = 0; VAR_17 < 4; VAR_17++) {
  FUNC_3(VAR_15->age_dev, VAR_15->age_phyaddr, 0x16,
      (VAR_17 << 8) | 0x0001);
  for (VAR_18 = 200; VAR_18 > 0; VAR_18--) {
   FUNC_1(1000);
   VAR_16 = FUNC_2(VAR_15->age_dev, VAR_15->age_phyaddr,
       0x16);
   if ((VAR_16 & 0x0001) == 0)
    break;
  }
  FUNC_1(1000);
  VAR_16 = FUNC_2(VAR_15->age_dev, VAR_15->age_phyaddr,
      0x1C);
  if ((VAR_16 & 0x0300) != 0x0200) {
   VAR_19++;
   break;
  }
 }
 FUNC_3(VAR_15->age_dev, VAR_15->age_phyaddr, VAR_10,
     VAR_6 | VAR_5 | VAR_7);
 if (VAR_19 == 0) {
  FUNC_3(VAR_15->age_dev, VAR_15->age_phyaddr,
      0x1D, 0);
  FUNC_3(VAR_15->age_dev, VAR_15->age_phyaddr,
      0x1E, 0x124E);
  FUNC_3(VAR_15->age_dev, VAR_15->age_phyaddr,
      0x1D, 1);
  VAR_16 = FUNC_2(VAR_15->age_dev, VAR_15->age_phyaddr,
      0x1E);
  FUNC_3(VAR_15->age_dev, VAR_15->age_phyaddr,
      0x1E, VAR_16 | 0x03);

  FUNC_1(1500 * 1000);
  FUNC_3(VAR_15->age_dev, VAR_15->age_phyaddr,
      0x1D, 0);
  FUNC_3(VAR_15->age_dev, VAR_15->age_phyaddr,
      0x1E, 0x024E);
    }
}
