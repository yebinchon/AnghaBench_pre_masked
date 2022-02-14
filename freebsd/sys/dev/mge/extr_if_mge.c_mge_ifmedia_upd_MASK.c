
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mge_softc {TYPE_2__* mii; int mge_media_status; scalar_t__ phy_attached; } ;
struct ifnet {int if_flags; struct mge_softc* if_softc; } ;
struct TYPE_3__ {int ifm_media; } ;
struct TYPE_4__ {TYPE_1__ mii_media; } ;


 int VAR_0 ;
 int FUNC_0 (struct mge_softc*) ;
 int FUNC_1 (struct mge_softc*) ;
 int FUNC_2 (struct mge_softc*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_1)
{
 struct mge_softc *VAR_2 = VAR_1->if_softc;






 if (VAR_2->phy_attached) {
  FUNC_0(VAR_2);
  if (VAR_1->if_flags & VAR_0) {
   VAR_2->mge_media_status = VAR_2->mii->mii_media.ifm_media;
   FUNC_3(VAR_2->mii);


   FUNC_2(VAR_2);

  }
  FUNC_1(VAR_2);
 }

 return (0);
}
