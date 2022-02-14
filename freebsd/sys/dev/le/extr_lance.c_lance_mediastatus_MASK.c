
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_softc {int sc_flags; int (* sc_mediastatus ) (struct lance_softc*,struct ifmediareq*) ;} ;
struct ifnet {int if_flags; struct lance_softc* if_softc; } ;
struct ifmediareq {int ifm_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lance_softc*) ;
 int FUNC_1 (struct lance_softc*) ;
 int FUNC_2 (struct lance_softc*,struct ifmediareq*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_4, struct ifmediareq *VAR_5)
{
 struct lance_softc *VAR_6 = VAR_4->if_softc;

 FUNC_0(VAR_6);
 if (!(VAR_4->if_flags & VAR_0)) {
  FUNC_1(VAR_6);
  return;
 }

 VAR_5->ifm_status = VAR_2;
 if (VAR_6->sc_flags & VAR_3)
  VAR_5->ifm_status |= VAR_1;

 if (VAR_6->sc_mediastatus)
  (*VAR_6->sc_mediastatus)(VAR_6, VAR_5);
 FUNC_1(VAR_6);
}
