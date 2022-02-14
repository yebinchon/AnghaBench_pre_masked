
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct gx_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct gx_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct ifnet *VAR_5, struct ifmediareq *VAR_6)
{
 struct gx_softc *VAR_7;

 VAR_7 = VAR_5->if_softc;


 VAR_6->ifm_status = VAR_2 | VAR_1;
 VAR_6->ifm_active = VAR_4 | VAR_0 | VAR_3;
}
