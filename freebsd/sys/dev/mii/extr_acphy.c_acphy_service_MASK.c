
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int dummy; } ;
struct mii_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*) ;
 int FUNC_2 (struct mii_softc*,int ,int) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_5(struct mii_softc *VAR_3, struct mii_data *VAR_4, int VAR_5)
{
 int VAR_6;

 switch (VAR_5) {
 case 129:
  break;

 case 130:

  VAR_6 = FUNC_0(VAR_3, VAR_2);
  if (VAR_6 & (VAR_0 | VAR_1))
   FUNC_2(VAR_3, VAR_2, VAR_6 & ~(VAR_0 | VAR_1));

  FUNC_3(VAR_3);
  break;

 case 128:



  break;
 }


 FUNC_1(VAR_3);


 FUNC_4(VAR_3, VAR_5);
 return (0);
}
