
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct hn_softc* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct hn_softc {int hn_link_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0(struct ifnet *VAR_7, struct ifmediareq *VAR_8)
{
 struct hn_softc *VAR_9 = VAR_7->if_softc;

 VAR_8->ifm_status = VAR_3;
 VAR_8->ifm_active = VAR_4;

 if ((VAR_9->hn_link_flags & VAR_0) == 0) {
  VAR_8->ifm_active |= VAR_6;
  return;
 }
 VAR_8->ifm_status |= VAR_2;
 VAR_8->ifm_active |= VAR_1 | VAR_5;
}
