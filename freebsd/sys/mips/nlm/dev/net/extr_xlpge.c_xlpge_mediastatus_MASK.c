
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlm_xlpge_softc {scalar_t__ link; scalar_t__ mii_bus; } ;
struct TYPE_4__ {TYPE_1__* ifm_cur; } ;
struct mii_data {TYPE_2__ mii_media; } ;
struct ifnet {struct nlm_xlpge_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct TYPE_3__ {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mii_data* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct ifnet *VAR_4, struct ifmediareq *VAR_5)
{
 struct nlm_xlpge_softc *VAR_6;
 struct mii_data *VAR_7;

 VAR_7 = ((void*)0);
 VAR_6 = VAR_4->if_softc;

 if (VAR_6->mii_bus)
  VAR_7 = FUNC_0(VAR_6->mii_bus);

 VAR_5->ifm_status = VAR_1;
 VAR_5->ifm_active = VAR_2;

 if (VAR_6->link == VAR_3)
  return;

 if (VAR_7 != ((void*)0))
  VAR_5->ifm_active = VAR_7->mii_media.ifm_cur->ifm_media;
 VAR_5->ifm_status |= VAR_0;
}
