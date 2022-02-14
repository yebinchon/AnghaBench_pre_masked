
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_softc {scalar_t__ dc_pmode; scalar_t__ dc_type; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct dc_softc*,int) ;
 int FUNC_1 (struct dc_softc*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct dc_softc*) ;
 scalar_t__ FUNC_3 (struct dc_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (int) ;





 int VAR_29 ;


 int VAR_30 ;
 struct dc_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int *,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_31, int VAR_32, int VAR_33)
{
 struct dc_softc *VAR_34;
 int VAR_35, VAR_36, VAR_37 = 0;

 VAR_34 = FUNC_5(VAR_31);

 if (VAR_34->dc_pmode != VAR_12) {
  if (VAR_32 == (VAR_29 - 1)) {
   switch (VAR_33) {
   case 130:




    return (VAR_0);
   case 129:
    if (FUNC_3(VAR_34))
     return (VAR_28);
    return (VAR_27);
   case 128:
    if (FUNC_3(VAR_34))
     return (VAR_9);
    return (VAR_8);
   default:
    return (0);
   }
  } else
   return (0);
 }

 if (FUNC_3(VAR_34)) {
  FUNC_1(VAR_34, VAR_13, VAR_14 |
      (VAR_32 << 23) | (VAR_33 << 18));
  for (VAR_35 = 0; VAR_35 < VAR_17; VAR_35++) {
   FUNC_4(1);
   VAR_36 = FUNC_0(VAR_34, VAR_13);
   if (!(VAR_36 & VAR_15)) {
    VAR_36 &= 0xFFFF;
    return (VAR_36 == 0xFFFF ? 0 : VAR_36);
   }
  }
  return (0);
 }

 if (VAR_34->dc_type == VAR_19) {
  FUNC_1(VAR_34, VAR_16,
      ((VAR_32 << VAR_21) & VAR_20) |
      ((VAR_33 << VAR_26) & VAR_25) |
      VAR_24);
  for (VAR_35 = 0; VAR_35 < VAR_17; VAR_35++) {
   FUNC_4(1);
   VAR_36 = FUNC_0(VAR_34, VAR_16);
   if ((VAR_36 & VAR_23) != 0) {
    return (VAR_36 & VAR_22);
   }
  }
  if (VAR_35 == VAR_17)
   FUNC_6(VAR_31, "phy read timed out\n");
  return (0);
 }

 if (FUNC_2(VAR_34)) {
  switch (VAR_33) {
  case 131:
   VAR_37 = VAR_3;
   break;
  case 130:
   VAR_37 = VAR_4;
   break;
  case 129:
   VAR_37 = VAR_7;
   break;
  case 128:
   VAR_37 = VAR_5;
   break;
  case 134:
   VAR_37 = VAR_1;
   break;
  case 132:
   VAR_37 = VAR_6;
   break;
  case 133:
   VAR_37 = VAR_2;
   break;
  default:
   FUNC_6(VAR_31, "phy_read: bad phy register %x\n",
       VAR_33);
   return (0);
  }

  VAR_36 = FUNC_0(VAR_34, VAR_37) & 0x0000FFFF;
  if (VAR_36 == 0xFFFF)
   return (0);
  return (VAR_36);
 }

 if (VAR_34->dc_type == VAR_18) {
  VAR_37 = FUNC_0(VAR_34, VAR_10);
  FUNC_1(VAR_34, VAR_10, VAR_37 & ~VAR_11);
 }
 VAR_36 = FUNC_7(VAR_31, &VAR_30, VAR_32, VAR_33);
 if (VAR_34->dc_type == VAR_18)
  FUNC_1(VAR_34, VAR_10, VAR_37);

 return (VAR_36);
}
