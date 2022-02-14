
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int mii_ticks; } ;
struct tlphy_softc {TYPE_2__ sc_mii; scalar_t__ sc_need_acomp; } ;
struct mii_softc {int dummy; } ;
struct TYPE_7__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;



 int const FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (struct tlphy_softc*) ;
 int FUNC_9 (struct tlphy_softc*) ;

__attribute__((used)) static int
FUNC_10(struct mii_softc *VAR_6, struct mii_data *VAR_7, int VAR_8)
{
 struct tlphy_softc *VAR_9 = (struct tlphy_softc *)VAR_6;
 struct ifmedia_entry *VAR_10 = VAR_7->mii_media.ifm_cur;
 int VAR_11;

 if (VAR_9->sc_need_acomp)
  FUNC_8(VAR_9);

 switch (VAR_8) {
 case 129:
  break;

 case 130:
  switch (FUNC_1(VAR_10->ifm_media)) {
  case 131:





   (void)FUNC_9(VAR_9);
   break;
  case 133:
  case 132:
   FUNC_5(&VAR_9->sc_mii, VAR_3, 0);
   FUNC_5(&VAR_9->sc_mii, VAR_5, VAR_1);
   FUNC_0(100000);
   break;
  default:
   FUNC_5(&VAR_9->sc_mii, VAR_5, 0);
   FUNC_0(100000);
   FUNC_6(&VAR_9->sc_mii);
  }
  break;

 case 128:



  if (FUNC_1(VAR_10->ifm_media) != 131)
   break;
  VAR_11 = FUNC_2(&VAR_9->sc_mii, VAR_4) |
      FUNC_2(&VAR_9->sc_mii, VAR_4);
  if (VAR_11 & VAR_0)
   break;




  if (++VAR_9->sc_mii.mii_ticks <= VAR_2)
   break;

  VAR_9->sc_mii.mii_ticks = 0;
  FUNC_3(&VAR_9->sc_mii);
  (void)FUNC_9(VAR_9);
  return (0);
 }


 FUNC_4(VAR_6);


 FUNC_7(&VAR_9->sc_mii, VAR_8);
 return (0);
}
