
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct alc_softc {int alc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct alc_softc*) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct alc_softc *VAR_9)
{
 uint32_t VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = 0;

 for (VAR_11 = 100; VAR_11 > 0; VAR_11--) {
  VAR_10 = FUNC_0(VAR_9, VAR_1);
  if ((VAR_10 & (VAR_6 | VAR_7)) == 0)
   break;
  FUNC_2(1000);
 }
 if (VAR_11 != 0) {
  FUNC_1(VAR_9, VAR_1, VAR_10 | VAR_7);
  for (VAR_11 = 100; VAR_11 > 0; VAR_11--) {
   FUNC_2(1000);
   VAR_10 = FUNC_0(VAR_9, VAR_1);
   if ((VAR_10 & VAR_7) == 0)
    break;
  }
  if (VAR_11 != 0)
   VAR_12++;
  else if (VAR_8)
   FUNC_4(VAR_9->alc_dev,
       "reloading station address via TWSI timed out!\n");
 }


 if (VAR_12 == 0) {
  VAR_10 = FUNC_0(VAR_9, VAR_0);
  if ((VAR_10 & (VAR_2 |
      VAR_3)) != 0) {
   for (VAR_11 = 100; VAR_11 > 0; VAR_11--) {
    VAR_10 = FUNC_0(VAR_9, VAR_0);
    if ((VAR_10 & (VAR_4 |
        VAR_5)) == 0)
     break;
    FUNC_2(1000);
   }
   if (VAR_11 != 0) {
    FUNC_1(VAR_9, VAR_0, VAR_10 |
        VAR_5);
    for (VAR_11 = 100; VAR_11 > 0; VAR_11--) {
     FUNC_2(1000);
     VAR_10 = FUNC_0(VAR_9, VAR_0);
     if ((VAR_10 & VAR_5) == 0)
      break;
    }
   } else if (VAR_8)
    FUNC_4(VAR_9->alc_dev,
        "reloading EEPROM/FLASH timed out!\n");
  }
 }

 FUNC_3(VAR_9);
}
