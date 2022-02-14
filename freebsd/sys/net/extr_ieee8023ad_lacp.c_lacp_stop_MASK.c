
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_softc {int dummy; } ;
struct lacp_softc {int lsc_callout; int lsc_transit_callout; } ;


 int FUNC_0 (struct lacp_softc*) ;
 struct lacp_softc* FUNC_1 (struct lagg_softc*) ;
 int FUNC_2 (struct lacp_softc*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct lagg_softc *VAR_0)
{
 struct lacp_softc *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->lsc_transit_callout);
 FUNC_3(&VAR_1->lsc_callout);
 FUNC_2(VAR_1);
}
