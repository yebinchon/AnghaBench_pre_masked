
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct alc_softc {int alc_flags; int alc_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,int ,int) ;
 int FUNC_3 (struct alc_softc*,int ,int ) ;
 int FUNC_4 (struct alc_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct alc_softc *VAR_31, int VAR_32)
{
 uint16_t VAR_33, VAR_34, VAR_35;

 if ((VAR_31->alc_flags & VAR_0) != 0)
  return;
 if (FUNC_0(VAR_31->alc_rev) >= VAR_5)
  return;





 if ((VAR_31->alc_flags & VAR_1) != 0) {
  VAR_34 = FUNC_3(VAR_31, VAR_30, VAR_29);
  VAR_34 = (VAR_34 >> VAR_19) &
      VAR_18;
  VAR_33 = FUNC_1(VAR_31, VAR_23);
  VAR_33 = (VAR_33 >> VAR_7) & VAR_6;
  if ((VAR_32 == VAR_21 && VAR_34 > VAR_20 &&
      VAR_33 > VAR_9) ||
      (VAR_32 == VAR_22 && VAR_34 > VAR_8 &&
      VAR_33 > VAR_9)) {
   FUNC_2(VAR_31, VAR_24,
       VAR_11);
   VAR_35 = FUNC_3(VAR_31, VAR_27,
       VAR_28);
   VAR_35 |= VAR_3;
   FUNC_4(VAR_31, VAR_27, VAR_28,
       VAR_35);
  } else {
   FUNC_2(VAR_31, VAR_24,
       VAR_10);
   VAR_35 = FUNC_3(VAR_31, VAR_27,
       VAR_28);
   VAR_35 &= ~VAR_3;
   FUNC_4(VAR_31, VAR_27, VAR_28,
       VAR_35);
  }
  if ((VAR_31->alc_flags & VAR_2) != 0 &&
      FUNC_0(VAR_31->alc_rev) == VAR_4) {
   if (VAR_32 == VAR_21) {




    VAR_35 = FUNC_1(VAR_31, VAR_26);
    VAR_35 &= ~VAR_16;
    VAR_35 |= (VAR_15 <<
        VAR_17);
    FUNC_2(VAR_31, VAR_26, VAR_35);
   } else if (VAR_32 == VAR_22)
    FUNC_2(VAR_31, VAR_25,
        VAR_13);
  }
 } else {
  VAR_35 = FUNC_3(VAR_31, VAR_27, VAR_28);
  VAR_35 &= ~VAR_3;
  FUNC_4(VAR_31, VAR_27, VAR_28, VAR_35);
  if ((VAR_31->alc_flags & VAR_2) != 0 &&
      FUNC_0(VAR_31->alc_rev) == VAR_4) {
   FUNC_2(VAR_31, VAR_25,
       VAR_12);
   VAR_35 = FUNC_1(VAR_31, VAR_26);
   VAR_35 &= ~VAR_16;
   VAR_35 |= (VAR_14 << VAR_17);
   FUNC_2(VAR_31, VAR_26, VAR_35);
  }
 }
}
