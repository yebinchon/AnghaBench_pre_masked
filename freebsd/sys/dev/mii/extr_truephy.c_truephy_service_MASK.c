
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;



 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*,int ,int) ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (struct mii_softc*) ;
 int FUNC_6 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct mii_softc *VAR_7, struct mii_data *VAR_8, int VAR_9)
{
 struct ifmedia_entry *VAR_10 = VAR_8->mii_media.ifm_cur;
 int VAR_11;

 switch (VAR_9) {
 case 129:
  break;

 case 130:
  if (FUNC_0(VAR_10->ifm_media) != VAR_5) {
   VAR_11 = FUNC_1(VAR_7, VAR_6) & ~VAR_0;
   FUNC_3(VAR_7, VAR_6, VAR_11);
   FUNC_3(VAR_7, VAR_6, VAR_11 | VAR_1);
  }

  FUNC_4(VAR_7);

  if (FUNC_0(VAR_10->ifm_media) != VAR_5) {
   VAR_11 = FUNC_1(VAR_7, VAR_6) & ~VAR_1;
   FUNC_3(VAR_7, VAR_6, VAR_11);

   if (FUNC_0(VAR_10->ifm_media) == VAR_4) {
    FUNC_3(VAR_7, VAR_6,
        VAR_11 | VAR_0 | VAR_2);
   }
  }
  break;

 case 128:
  if (FUNC_5(VAR_7) == VAR_3)
   return (0);
  break;
 }


 FUNC_2(VAR_7);


 FUNC_6(VAR_7, VAR_9);
 return (0);
}
