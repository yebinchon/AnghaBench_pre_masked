
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int dummy; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (struct mii_softc*) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (struct mii_softc*) ;
 int FUNC_6 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct mii_softc *VAR_2, struct mii_data *VAR_3, int VAR_4)
{
 struct ifmedia_entry *VAR_5 = VAR_3->mii_media.ifm_cur;

 switch (VAR_4) {
 case 129:
  break;

 case 130:
  if (FUNC_0(VAR_5->ifm_media) == VAR_1)
   FUNC_2(VAR_2);
  else
   FUNC_3(VAR_2);

  FUNC_4(VAR_2);
  break;

 case 128:
  if (FUNC_5(VAR_2) == VAR_0)
   return (0);
  break;
 }


 FUNC_1(VAR_2);


 FUNC_6(VAR_2, VAR_4);
 return (0);
}
