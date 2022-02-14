
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacp_softc {int lsc_callout; int lsc_transit_callout; int * lsc_active_aggregator; int lsc_aggregators; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lacp_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lacp_softc*,int ) ;

void
FUNC_5(void *VAR_1)
{
 struct lacp_softc *VAR_2 = (struct lacp_softc *)VAR_1;

 FUNC_0(FUNC_2(&VAR_2->lsc_aggregators),
     ("aggregators still active"));
 FUNC_0(VAR_2->lsc_active_aggregator == ((void*)0),
     ("aggregator still attached"));

 FUNC_3(&VAR_2->lsc_transit_callout);
 FUNC_3(&VAR_2->lsc_callout);

 FUNC_1(VAR_2);
 FUNC_4(VAR_2, VAR_0);
}
