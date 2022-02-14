
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int dummy; } ;
struct ifnet {struct vtnet_softc* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (struct vtnet_softc*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct vtnet_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_5, struct ifmediareq *VAR_6)
{
 struct vtnet_softc *VAR_7;

 VAR_7 = VAR_5->if_softc;

 VAR_6->ifm_status = VAR_1;
 VAR_6->ifm_active = VAR_2;

 FUNC_0(VAR_7);
 if (FUNC_2(VAR_7) != 0) {
  VAR_6->ifm_status |= VAR_0;
  VAR_6->ifm_active |= VAR_4;
 } else
  VAR_6->ifm_active |= VAR_3;
 FUNC_1(VAR_7);
}
