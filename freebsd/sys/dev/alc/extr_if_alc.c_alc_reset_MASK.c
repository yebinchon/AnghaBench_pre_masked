
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct alc_softc {int alc_flags; int alc_rev; TYPE_1__* alc_ident; int alc_dev; } ;
struct TYPE_2__ {scalar_t__ deviceid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (struct alc_softc*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_6(struct alc_softc *VAR_27)
{
 uint32_t VAR_28, VAR_29;
 int VAR_30;

 VAR_28 = 0;
 if ((VAR_27->alc_flags & VAR_0) != 0) {

  FUNC_2(VAR_27, VAR_3, 1);
  if (FUNC_0(VAR_27->alc_rev) <= VAR_9 &&
      (VAR_27->alc_rev & 0x01) != 0) {

   VAR_28 = FUNC_1(VAR_27, VAR_6);
   if ((VAR_28 & (VAR_23 | VAR_24))
       != 0) {
    VAR_28 &= ~(VAR_23 |
        VAR_24);
    FUNC_2(VAR_27, VAR_6, VAR_28);
   }
  }
 }
 VAR_29 = FUNC_1(VAR_27, VAR_2);
 VAR_29 |= VAR_17 | VAR_18;
 FUNC_2(VAR_27, VAR_2, VAR_29);

 if ((VAR_27->alc_flags & VAR_0) != 0) {
  for (VAR_30 = VAR_7; VAR_30 > 0; VAR_30--) {
   FUNC_3(10);
   if (FUNC_1(VAR_27, VAR_3) == 0)
    break;
  }
  if (VAR_30 == 0)
   FUNC_5(VAR_27->alc_dev, "MAC reset timeout!\n");
 }
 for (VAR_30 = VAR_7; VAR_30 > 0; VAR_30--) {
  FUNC_3(10);
  if ((FUNC_1(VAR_27, VAR_2) & VAR_18) == 0)
   break;
 }
 if (VAR_30 == 0)
  FUNC_5(VAR_27->alc_dev, "master reset timeout!\n");

 for (VAR_30 = VAR_7; VAR_30 > 0; VAR_30--) {
  VAR_29 = FUNC_1(VAR_27, VAR_1);
  if ((VAR_29 & (VAR_12 | VAR_14 |
      VAR_13 | VAR_15)) == 0)
   break;
  FUNC_3(10);
 }
 if (VAR_30 == 0)
  FUNC_5(VAR_27->alc_dev, "reset timeout(0x%08x)!\n", VAR_29);

 if ((VAR_27->alc_flags & VAR_0) != 0) {
  if (FUNC_0(VAR_27->alc_rev) <= VAR_9 &&
      (VAR_27->alc_rev & 0x01) != 0) {
   VAR_29 = FUNC_1(VAR_27, VAR_2);
   VAR_29 |= VAR_16;
   FUNC_2(VAR_27, VAR_2, VAR_29);

   if ((VAR_28 & (VAR_23 | VAR_24))
       != 0)
    FUNC_2(VAR_27, VAR_6, VAR_28);
  }

  FUNC_4(VAR_27);
  VAR_29 = FUNC_1(VAR_27, VAR_5);
  VAR_29 &= ~VAR_19;
  VAR_29 |= VAR_20;
  FUNC_2(VAR_27, VAR_5, VAR_29);
  VAR_29 = FUNC_1(VAR_27, VAR_4);
  VAR_29 &= ~VAR_21;
  if (FUNC_0(VAR_27->alc_rev) <= VAR_9)
   VAR_29 &= ~VAR_22;
  FUNC_2(VAR_27, VAR_4, VAR_29);
  FUNC_3(20);
 }
 if ((VAR_27->alc_flags & VAR_0) != 0 ||
     VAR_27->alc_ident->deviceid == VAR_11 ||
     VAR_27->alc_ident->deviceid == VAR_10)
  FUNC_2(VAR_27, VAR_8,
      FUNC_1(VAR_27, VAR_8) | VAR_25 |
      VAR_26);
}
