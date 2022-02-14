
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct exca_softc {int chipset; int bsh; int bst; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
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
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct exca_softc*,int ,int ) ;
 int FUNC_3 (struct exca_softc*,int ) ;
 int FUNC_4 (struct exca_softc*,int ,int ) ;
 int FUNC_5 (struct exca_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct exca_softc *VAR_29)
{
 uint8_t VAR_30;


 VAR_29->chipset = VAR_0;






 VAR_30 = FUNC_3(VAR_29, VAR_8);
 FUNC_0(VAR_29->dev, "Ident is %x\n", VAR_30);
 if ((VAR_30 & VAR_9) != VAR_10)
  return (0);
 if ((VAR_30 & VAR_12) != 0)
  return (0);
 switch (VAR_30 & VAR_11) {



 case 132:
 case 131:
  VAR_29->chipset = VAR_4;







  FUNC_1(VAR_29->bst, VAR_29->bsh, VAR_15,
      VAR_21);
  FUNC_1(VAR_29->bst, VAR_29->bsh, VAR_15,
      VAR_22);
  FUNC_5(VAR_29, VAR_24, VAR_23);
  VAR_30 = FUNC_3(VAR_29, VAR_8);
  if (VAR_30 & 0x08) {
   switch (VAR_30 & 7) {
   case 1:
    VAR_29->chipset = VAR_25;
    break;
   case 2:
    VAR_29->chipset = VAR_26;
    break;
   case 3:
    VAR_29->chipset = VAR_27;
    break;
   default:
    VAR_29->chipset = VAR_28;
    break;
   }
   FUNC_2(VAR_29, VAR_24, VAR_23);
   break;
  }



  VAR_30 = FUNC_3(VAR_29, VAR_18);
  if (VAR_30 == VAR_20) {
   VAR_29->chipset = VAR_17;
   break;
  } else if (VAR_30 == VAR_19) {
   VAR_29->chipset = VAR_16;
   break;
  }



  FUNC_4(VAR_29, VAR_1, 0);
  VAR_30 = FUNC_3(VAR_29, VAR_1);
  if ((VAR_30 & VAR_2) ==
      VAR_2) {
   VAR_30 = FUNC_3(VAR_29, VAR_1);
   if ((VAR_30 & VAR_2) == 0) {
    if (VAR_30 & VAR_3)
     VAR_29->chipset = VAR_14;
    else
     VAR_29->chipset = VAR_13;
    break;
   }
  }
  break;

 case 133:





  VAR_29->chipset = VAR_5;
  break;
 case 130:
 case 129:
  VAR_29->chipset = VAR_6;
  break;
 case 128:
  VAR_29->chipset = VAR_7;
  break;
 default:
  return (0);
 }
 return (1);
}
