
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_softc {scalar_t__ dc_type; } ;
typedef int device_t ;


 int FUNC_0 (struct dc_softc*,int) ;
 int FUNC_1 (struct dc_softc*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct dc_softc*) ;
 scalar_t__ FUNC_3 (struct dc_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (int) ;







 int VAR_23 ;
 struct dc_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int *,int,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_24, int VAR_25, int VAR_26, int VAR_27)
{
 struct dc_softc *VAR_28;
 int VAR_29, VAR_30 = 0;

 VAR_28 = FUNC_5(VAR_24);

 if (FUNC_3(VAR_28)) {
  FUNC_1(VAR_28, VAR_9, VAR_10 |
      (VAR_25 << 23) | (VAR_26 << 10) | VAR_27);
  for (VAR_29 = 0; VAR_29 < VAR_13; VAR_29++) {
   if (!(FUNC_0(VAR_28, VAR_9) & VAR_11))
    break;
  }
  return (0);
 }

 if (VAR_28->dc_type == VAR_15) {
  FUNC_1(VAR_28, VAR_12,
      ((VAR_25 << VAR_17) & VAR_16) |
      ((VAR_26 << VAR_22) & VAR_21) |
      ((VAR_27 << VAR_19) & VAR_18) |
      VAR_20);
  FUNC_4(1);
  return (0);
 }

 if (FUNC_2(VAR_28)) {
  switch (VAR_26) {
  case 131:
   VAR_30 = VAR_2;
   break;
  case 130:
   VAR_30 = VAR_3;
   break;
  case 129:
   VAR_30 = VAR_6;
   break;
  case 128:
   VAR_30 = VAR_4;
   break;
  case 134:
   VAR_30 = VAR_0;
   break;
  case 132:
   VAR_30 = VAR_5;
   break;
  case 133:
   VAR_30 = VAR_1;
   break;
  default:
   FUNC_6(VAR_24, "phy_write: bad phy register %x\n",
       VAR_26);
   return (0);
   break;
  }

  FUNC_1(VAR_28, VAR_30, VAR_27);
  return (0);
 }

 if (VAR_28->dc_type == VAR_14) {
  VAR_30 = FUNC_0(VAR_28, VAR_7);
  FUNC_1(VAR_28, VAR_7, VAR_30 & ~VAR_8);
 }
 FUNC_7(VAR_24, &VAR_23, VAR_25, VAR_26, VAR_27);
 if (VAR_28->dc_type == VAR_14)
  FUNC_1(VAR_28, VAR_7, VAR_30);

 return (0);
}
