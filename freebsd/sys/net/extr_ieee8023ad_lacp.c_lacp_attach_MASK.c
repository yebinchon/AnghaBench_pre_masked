
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lagg_softc {TYPE_1__* sc_ifp; struct lacp_softc* sc_psc; } ;
struct lacp_softc {int lsc_mtx; int lsc_callout; int lsc_transit_callout; int lsc_ports; int lsc_aggregators; int lsc_strict_mode; int * lsc_active_aggregator; int lsc_hashkey; struct lagg_softc* lsc_softc; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct lacp_softc*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct lagg_softc*) ;
 int FUNC_6 () ;
 struct lacp_softc* FUNC_7 (int,int ,int) ;

void
FUNC_8(struct lagg_softc *VAR_5)
{
 struct lacp_softc *VAR_6;

 VAR_6 = FUNC_7(sizeof(struct lacp_softc), VAR_1, VAR_2 | VAR_3);

 VAR_5->sc_psc = VAR_6;
 VAR_6->lsc_softc = VAR_5;

 VAR_6->lsc_hashkey = FUNC_6();
 VAR_6->lsc_active_aggregator = ((void*)0);
 VAR_6->lsc_strict_mode = FUNC_3(VAR_4);
 FUNC_0(VAR_6);
 FUNC_2(&VAR_6->lsc_aggregators);
 FUNC_1(&VAR_6->lsc_ports);

 FUNC_4(&VAR_6->lsc_transit_callout, &VAR_6->lsc_mtx, 0);
 FUNC_4(&VAR_6->lsc_callout, &VAR_6->lsc_mtx, 0);


 if (VAR_5->sc_ifp->if_drv_flags & VAR_0)
  FUNC_5(VAR_5);
}
