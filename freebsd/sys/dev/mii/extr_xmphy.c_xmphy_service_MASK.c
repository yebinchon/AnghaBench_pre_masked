
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int mii_ticks; int mii_anegticks; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int const FUNC_0 (int) ;
 int VAR_3 ;



 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct mii_softc*,int) ;
 int FUNC_5 (struct mii_softc*) ;
 int FUNC_6 (struct mii_softc*) ;

__attribute__((used)) static int
FUNC_7(struct mii_softc *VAR_10, struct mii_data *VAR_11, int VAR_12)
{
 struct ifmedia_entry *VAR_13 = VAR_11->mii_media.ifm_cur;
 int VAR_14;

 switch (VAR_12) {
 case 129:
  break;

 case 130:
  switch (FUNC_0(VAR_13->ifm_media)) {
  case 131:







   (void)FUNC_5(VAR_10);
   break;
  case 132:
   FUNC_2(VAR_10);
   if ((VAR_13->ifm_media & VAR_2) != 0) {
    FUNC_3(VAR_10, VAR_8, VAR_4);
    FUNC_3(VAR_10, VAR_9, VAR_7);
   } else {
    FUNC_3(VAR_10, VAR_8, VAR_5);
    FUNC_3(VAR_10, VAR_9, 0);
   }
   break;
  default:
   return (VAR_1);
  }
  break;

 case 128:



  if (FUNC_0(VAR_13->ifm_media) != 131)
   break;






  VAR_14 = FUNC_1(VAR_10, VAR_3) | FUNC_1(VAR_10, VAR_3);
  if (VAR_14 & VAR_0)
   break;


  if (VAR_10->mii_ticks <= VAR_10->mii_anegticks)
   break;

  VAR_10->mii_ticks = 0;

  FUNC_2(VAR_10);
  FUNC_5(VAR_10);
  return (0);
 }


 FUNC_6(VAR_10);


 FUNC_4(VAR_10, VAR_12);
 return (0);
}
