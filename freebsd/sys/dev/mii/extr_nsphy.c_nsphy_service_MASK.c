
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int dummy; } ;
struct mii_data {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*) ;
 int FUNC_2 (struct mii_softc*,int ,int) ;
 int FUNC_3 (struct mii_softc*,char*) ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (struct mii_softc*) ;
 int FUNC_6 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct mii_softc *VAR_5, struct mii_data *VAR_6, int VAR_7)
{
 int VAR_8;

 switch (VAR_7) {
 case 129:
  break;

 case 130:
  VAR_8 = FUNC_0(VAR_5, VAR_1);





  VAR_8 |= VAR_4;






  VAR_8 |= VAR_2;





  VAR_8 |= VAR_3;
  VAR_8 |= 0x0100 | 0x0400;

  if (FUNC_3(VAR_5, "fxp"))
   FUNC_2(VAR_5, VAR_1, VAR_8);

  FUNC_4(VAR_5);
  break;

 case 128:
  if (FUNC_5(VAR_5) == VAR_0)
   return (0);
  break;
 }


 FUNC_1(VAR_5);


 FUNC_6(VAR_5, VAR_7);
 return (0);
}
