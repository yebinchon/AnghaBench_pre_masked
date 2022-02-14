
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct alc_softc {int alc_flags; scalar_t__ alc_rev; TYPE_1__* alc_ident; scalar_t__ alc_expcap; } ;
struct TYPE_2__ {int deviceid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct alc_softc*,scalar_t__) ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,scalar_t__,int ) ;
 int FUNC_3 (struct alc_softc*,int ,int) ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
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
 int VAR_31 ;

__attribute__((used)) static void
FUNC_4(struct alc_softc *VAR_32, int VAR_33)
{
 uint32_t VAR_34;
 uint16_t VAR_35;

 if ((VAR_32->alc_flags & VAR_3) == 0)
  return;

 VAR_34 = FUNC_1(VAR_32, VAR_5);
 if ((VAR_32->alc_flags & (VAR_0 | VAR_4)) ==
     (VAR_0 | VAR_4))
  VAR_35 = FUNC_0(VAR_32, VAR_32->alc_expcap +
      VAR_10);
 else
  VAR_35 = 0;
 VAR_34 &= ~VAR_30;
 VAR_34 &= ~(VAR_17 | VAR_20);
 VAR_34 |= VAR_22;
 VAR_34 |= (VAR_19 << VAR_21);
 VAR_34 &= ~(VAR_12 | VAR_11);

 if ((VAR_32->alc_flags & VAR_0) != 0) {

  VAR_35 &= ~VAR_9;
  if (VAR_32->alc_ident->deviceid == 129 &&
      VAR_32->alc_rev == VAR_6)
   VAR_35 |= VAR_9;
  FUNC_2(VAR_32, VAR_32->alc_expcap + VAR_10,
      VAR_35);
  VAR_34 &= ~(VAR_14 | VAR_27 |
      VAR_15);
  VAR_34 |= (VAR_16 <<
      VAR_18);
  VAR_34 &= ~VAR_25;
  VAR_34 |= (VAR_24 <<
      VAR_26);
  VAR_34 |= VAR_30 | VAR_23;
 }

 if ((VAR_32->alc_flags & VAR_3) != 0) {
  if ((VAR_32->alc_flags & VAR_1) != 0)
   VAR_34 |= VAR_11;
  if ((VAR_32->alc_flags & VAR_2) != 0)
   VAR_34 |= VAR_12;
  if ((VAR_32->alc_flags & VAR_0) != 0) {
   if (VAR_32->alc_ident->deviceid ==
       129)
    VAR_34 &= ~VAR_11;
   VAR_34 &= ~(VAR_29 |
       VAR_31 |
       VAR_28);
   VAR_34 |= VAR_13;
   if (VAR_33 == VAR_8 || VAR_33 == VAR_7) {
    VAR_34 &= ~VAR_17;
    switch (VAR_32->alc_ident->deviceid) {
    case 129:
     VAR_34 |= (7 <<
         VAR_18);
     break;
    case 128:
    case 130:
     VAR_34 |= (4 <<
         VAR_18);
     break;
    default:
     VAR_34 |= (15 <<
         VAR_18);
     break;
    }
   }
  } else {
   VAR_34 |= VAR_29 |
       VAR_31 |
       VAR_28;
   VAR_34 &= ~(VAR_13 |
       VAR_12 | VAR_11);
  }
 } else {
  VAR_34 &= ~(VAR_28 | VAR_29 |
      VAR_31);
  VAR_34 |= VAR_13;
  if ((VAR_32->alc_flags & VAR_2) != 0)
   VAR_34 |= VAR_12;
 }
 FUNC_3(VAR_32, VAR_5, VAR_34);
}
