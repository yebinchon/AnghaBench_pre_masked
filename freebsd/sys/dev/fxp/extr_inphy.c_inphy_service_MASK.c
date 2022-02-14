
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int dummy; } ;
struct mii_data {int mii_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct mii_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_5(struct mii_softc *VAR_2, struct mii_data *VAR_3, int VAR_4)
{

 switch (VAR_4) {
 case 129:
  break;

 case 130:



  if ((FUNC_1(VAR_3->mii_ifp) & VAR_1) == 0)
   break;

  FUNC_2(VAR_2);
  break;

 case 128:
  if (FUNC_3(VAR_2) == VAR_0)
   return (0);
  break;
 }


 FUNC_0(VAR_2);


 FUNC_4(VAR_2, VAR_4);
 return (0);
}
