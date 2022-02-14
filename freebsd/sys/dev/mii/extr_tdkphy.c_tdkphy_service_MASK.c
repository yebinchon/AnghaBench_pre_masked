
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {TYPE_1__* mii_pdata; } ;
struct mii_data {int dummy; } ;
struct TYPE_2__ {int mii_media_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*) ;
 int FUNC_2 (struct mii_softc*,int ,int) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_6(struct mii_softc *VAR_4, struct mii_data *VAR_5, int VAR_6)
{

 switch (VAR_6) {
 case 129:
  break;

 case 130:
  FUNC_3(VAR_4);
  break;

 case 128:
  if (FUNC_4(VAR_4) == VAR_1)
   return (0);
  break;
 }


 FUNC_1(VAR_4);
 if (VAR_4->mii_pdata->mii_media_active & VAR_2)
  FUNC_2(VAR_4, VAR_3, FUNC_0(VAR_4, VAR_3) | VAR_0);
 else
  FUNC_2(VAR_4, VAR_3, FUNC_0(VAR_4, VAR_3) & ~VAR_0);


 FUNC_5(VAR_4, VAR_6);
 return (0);
}
