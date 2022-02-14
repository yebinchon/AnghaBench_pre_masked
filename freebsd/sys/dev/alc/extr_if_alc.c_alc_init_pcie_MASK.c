
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct alc_softc {int alc_flags; int alc_rev; scalar_t__ alc_rcb; int alc_dev; scalar_t__ alc_expcap; TYPE_1__* alc_ident; } ;
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
 int VAR_10 ;
 int FUNC_1 (struct alc_softc*,scalar_t__) ;
 int FUNC_2 (struct alc_softc*,int ) ;
 int FUNC_3 (struct alc_softc*,int ,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_4 (struct alc_softc*,int,int ) ;
 int FUNC_5 (struct alc_softc*) ;
 scalar_t__ VAR_33 ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_7(struct alc_softc *VAR_34)
{
 const char *VAR_35[] = { "L0s/L1", "L0s", "L1", "L0s/L1" };
 uint32_t VAR_36, VAR_37, VAR_38;
 int VAR_39;


 VAR_38 = FUNC_2(VAR_34, VAR_8);
 VAR_38 &= ~(VAR_31 | VAR_32);
 FUNC_3(VAR_34, VAR_8, VAR_38);

 if ((VAR_34->alc_flags & VAR_0) == 0) {
  FUNC_3(VAR_34, VAR_3,
      FUNC_2(VAR_34, VAR_3) & ~VAR_15);
  FUNC_3(VAR_34, VAR_5,
      FUNC_2(VAR_34, VAR_5) |
      VAR_29);
  if (VAR_34->alc_ident->deviceid == VAR_11 &&
      VAR_34->alc_rev == VAR_10) {
   VAR_38 = FUNC_2(VAR_34, VAR_6);
   VAR_38 &= ~(VAR_25 |
       VAR_27);
   VAR_38 |= 3 << VAR_26;
   VAR_38 |= 3 << VAR_28;
   FUNC_3(VAR_34, VAR_6, VAR_38);
  }

  VAR_36 = FUNC_1(VAR_34, VAR_34->alc_expcap + VAR_23);
  if ((VAR_36 & VAR_18) != 0) {
   VAR_37 = FUNC_1(VAR_34, VAR_34->alc_expcap + VAR_24);
   if ((VAR_37 & VAR_22) != 0)
    VAR_34->alc_rcb = VAR_12;
   if (VAR_33)
    FUNC_6(VAR_34->alc_dev, "RCB %u bytes\n",
        VAR_34->alc_rcb == VAR_13 ? 64 : 128);
   VAR_39 = VAR_37 & VAR_19;
   if (VAR_39 & VAR_20)
    VAR_34->alc_flags |= VAR_1;
   if (VAR_39 & VAR_21)
    VAR_34->alc_flags |= VAR_2;
   if (VAR_33)
    FUNC_6(VAR_34->alc_dev, "ASPM %s %s\n",
        VAR_35[VAR_39],
        VAR_39 == 0 ? "disabled" : "enabled");
   FUNC_5(VAR_34);
  } else {
   if (VAR_33)
    FUNC_6(VAR_34->alc_dev,
        "no ASPM support\n");
  }
 } else {
  VAR_38 = FUNC_2(VAR_34, VAR_7);
  VAR_38 &= ~VAR_30;
  FUNC_3(VAR_34, VAR_7, VAR_38);
  VAR_38 = FUNC_2(VAR_34, VAR_4);
  if (FUNC_0(VAR_34->alc_rev) <= VAR_9 &&
      (VAR_34->alc_rev & 0x01) != 0) {
   if ((VAR_38 & VAR_17) == 0 ||
       (VAR_38 & VAR_16) == 0) {
    VAR_38 |= VAR_17 | VAR_16;
    FUNC_3(VAR_34, VAR_4, VAR_38);
   }
  } else {
   if ((VAR_38 & VAR_17) == 0 ||
       (VAR_38 & VAR_16) != 0) {
    VAR_38 |= VAR_17;
    VAR_38 &= ~VAR_16;
    FUNC_3(VAR_34, VAR_4, VAR_38);
   }
  }
 }
 FUNC_4(VAR_34, 1, VAR_14);
}
