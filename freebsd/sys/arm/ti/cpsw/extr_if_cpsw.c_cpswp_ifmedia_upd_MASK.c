
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {struct cpswp_softc* if_softc; } ;
struct cpswp_softc {TYPE_2__* mii; int media_status; int swsc; } ;
struct TYPE_3__ {int ifm_media; } ;
struct TYPE_4__ {TYPE_1__ mii_media; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cpswp_softc*) ;
 int FUNC_2 (struct cpswp_softc*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_0)
{
 struct cpswp_softc *VAR_1;

 VAR_1 = VAR_0->if_softc;
 FUNC_0(VAR_1->swsc, (""));
 FUNC_1(VAR_1);
 FUNC_3(VAR_1->mii);
 VAR_1->media_status = VAR_1->mii->mii_media.ifm_media;
 FUNC_2(VAR_1);

 return (0);
}
