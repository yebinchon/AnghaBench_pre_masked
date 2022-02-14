
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {scalar_t__ mii_media_active; scalar_t__ mii_media_status; int mii_mpd_oui; int mii_mpd_rev; int mii_mpd_model; int mii_ticks; int mii_anegticks; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {scalar_t__ mii_media_active; scalar_t__ mii_media_status; TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;






 int const FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (struct mii_softc*) ;
 int FUNC_6 (struct mii_softc*) ;
 int FUNC_7 (struct mii_softc*,int ) ;
 int FUNC_8 (struct mii_softc*,int ) ;
 int FUNC_9 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_10(struct mii_softc *VAR_3, struct mii_data *VAR_4, int VAR_5)
{
 struct ifmedia_entry *VAR_6 = VAR_4->mii_media.ifm_cur;
 int VAR_7;

 switch (VAR_5) {
 case 129:
  break;
 case 135:

  FUNC_2(VAR_3);

  switch (FUNC_0(VAR_6->ifm_media)) {
  case 136:
   FUNC_7(VAR_3, VAR_6->ifm_media);
   break;
  case 137:
  case 141:
  case 140:
  case 139:
  case 138:
   FUNC_8(VAR_3, VAR_6->ifm_media);
   break;
  default:
   return (VAR_1);
  }
  break;
 case 128:

  if (FUNC_0(VAR_6->ifm_media) != 136) {
   VAR_3->mii_ticks = 0;
   break;
  }





  VAR_7 = FUNC_1(VAR_3, VAR_2) | FUNC_1(VAR_3, VAR_2);
  if (VAR_7 & VAR_0) {
   VAR_3->mii_ticks = 0;
   break;
  }


  if (VAR_3->mii_ticks++ == 0)
   break;


  if (VAR_3->mii_ticks <= VAR_3->mii_anegticks)
   break;



  VAR_3->mii_ticks = 0;
  FUNC_7(VAR_3, VAR_6->ifm_media);
  break;
 }


 FUNC_3(VAR_3);





 if (VAR_3->mii_media_active != VAR_4->mii_media_active ||
     VAR_3->mii_media_status != VAR_4->mii_media_status ||
     VAR_5 == 135) {
  switch (VAR_3->mii_mpd_oui) {
  case 130:
   switch (VAR_3->mii_mpd_model) {
   case 134:
    FUNC_4(VAR_3);
    break;
   case 133:
    if (VAR_3->mii_mpd_rev == 1 || VAR_3->mii_mpd_rev == 3)
     FUNC_4(VAR_3);
    break;
   case 132:
    FUNC_5(VAR_3);
    break;
   case 131:
    FUNC_6(VAR_3);
    break;
   }
   break;
  }
 }
 FUNC_9(VAR_3, VAR_5);
 return (0);
}
