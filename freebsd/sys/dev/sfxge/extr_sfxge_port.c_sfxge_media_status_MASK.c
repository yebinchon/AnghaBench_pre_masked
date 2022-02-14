
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t link_mode; } ;
struct sfxge_softc {TYPE_1__ port; int enp; } ;
struct ifnet {struct sfxge_softc* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
typedef size_t efx_phy_media_type_t ;
typedef size_t efx_link_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sfxge_softc*) ;
 int FUNC_1 (struct sfxge_softc*) ;
 scalar_t__ FUNC_2 (struct sfxge_softc*) ;
 scalar_t__ FUNC_3 (struct sfxge_softc*) ;
 int FUNC_4 (int ,size_t*) ;
 int ** VAR_3 ;
 int FUNC_5 (struct sfxge_softc*) ;

__attribute__((used)) static void
FUNC_6(struct ifnet *VAR_4, struct ifmediareq *VAR_5)
{
 struct sfxge_softc *VAR_6;
 efx_phy_media_type_t VAR_7;
 efx_link_mode_t VAR_8;

 VAR_6 = VAR_4->if_softc;
 FUNC_0(VAR_6);

 VAR_5->ifm_status = VAR_1;
 VAR_5->ifm_active = VAR_2;

 if (FUNC_3(VAR_6) && FUNC_2(VAR_6)) {
  VAR_5->ifm_status |= VAR_0;

  FUNC_4(VAR_6->enp, &VAR_7);
  VAR_8 = VAR_6->port.link_mode;
  VAR_5->ifm_active |= VAR_3[VAR_7][VAR_8];
  VAR_5->ifm_active |= FUNC_5(VAR_6);
 }

 FUNC_1(VAR_6);
}
