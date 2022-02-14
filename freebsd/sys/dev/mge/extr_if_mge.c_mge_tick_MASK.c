
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mge_softc {int phy_attached; scalar_t__ mge_media_status; int wd_callout; int ifp; TYPE_2__* mii; } ;
struct TYPE_3__ {scalar_t__ ifm_media; } ;
struct TYPE_4__ {TYPE_1__ mii_media; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mge_softc*) ;
 int FUNC_2 (struct mge_softc*) ;
 int FUNC_3 (int *,int ,void (*) (void*),struct mge_softc*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mge_softc*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct mge_softc *VAR_2 = VAR_1;

 FUNC_0(VAR_2->phy_attached == 1, ("mge_tick while PHY not attached"));

 FUNC_1(VAR_2);


 FUNC_5(VAR_2);

 FUNC_6(VAR_2->mii);


 if(VAR_2->mge_media_status != VAR_2->mii->mii_media.ifm_media)
  FUNC_4(VAR_2->ifp);

 FUNC_2(VAR_2);


 FUNC_3(&VAR_2->wd_callout, VAR_0, FUNC_7, VAR_2);

 return;
}
