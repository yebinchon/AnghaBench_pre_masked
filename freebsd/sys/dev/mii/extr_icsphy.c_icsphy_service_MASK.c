
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int dummy; } ;
struct mii_data {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct mii_softc*) ;
 int FUNC_1 (struct mii_softc*) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_4(struct mii_softc *VAR_1, struct mii_data *VAR_2, int VAR_3)
{

 switch (VAR_3) {
 case 129:
  break;

 case 130:
  FUNC_1(VAR_1);
  break;

 case 128:
  if (FUNC_2(VAR_1) == VAR_0)
   return (0);
  break;
 }


 FUNC_0(VAR_1);


 FUNC_3(VAR_1, VAR_3);
 return (0);
}
