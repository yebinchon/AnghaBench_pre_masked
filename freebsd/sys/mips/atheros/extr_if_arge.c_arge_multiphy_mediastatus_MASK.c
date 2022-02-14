
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct arge_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct arge_softc {int arge_media_type; int arge_duplex_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(struct ifnet *VAR_3, struct ifmediareq *VAR_4)
{
 struct arge_softc *VAR_5 = VAR_3->if_softc;

 VAR_4->ifm_status = VAR_1 | VAR_0;
 VAR_4->ifm_active = VAR_2 | VAR_5->arge_media_type |
     VAR_5->arge_duplex_mode;
}
