
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_softc {scalar_t__ sc_active; int sc_ifp; } ;
struct lacp_softc {struct lacp_aggregator* lsc_active_aggregator; struct lagg_softc* lsc_softc; } ;
struct lacp_port {int lp_state; struct lacp_softc* lp_lsc; struct lacp_aggregator* lp_aggregator; } ;
struct lacp_aggregator {scalar_t__ la_nports; scalar_t__ la_refcnt; int la_ports; } ;
typedef int buf ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct lacp_port*) ;
 int VAR_0 ;
 int FUNC_2 (struct lacp_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,struct lacp_port*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct lacp_aggregator*,char*,int) ;
 int FUNC_6 (struct lacp_softc*) ;
 int FUNC_7 (struct lacp_softc*,struct lacp_aggregator*) ;
 int FUNC_8 (struct lacp_softc*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9(struct lacp_port *VAR_5)
{
 struct lacp_aggregator *VAR_6 = VAR_5->lp_aggregator;
 struct lacp_softc *VAR_7 = VAR_5->lp_lsc;
 struct lagg_softc *VAR_8 = VAR_7->lsc_softc;
 char VAR_9[VAR_0+1];

 FUNC_2(VAR_7);

 if ((VAR_5->lp_state & VAR_1) != 0) {
  return;
 }

 FUNC_1((VAR_5, "enable distributing on aggregator %s, "
     "nports %d -> %d\n",
     FUNC_5(VAR_6, VAR_9, sizeof(VAR_9)),
     VAR_6->la_nports, VAR_6->la_nports + 1));

 FUNC_0(VAR_6->la_refcnt > VAR_6->la_nports, ("aggregator refcnt invalid"));
 FUNC_3(&VAR_6->la_ports, VAR_5, VAR_4);
 VAR_6->la_nports++;
 VAR_8->sc_active = VAR_6->la_nports;

 VAR_5->lp_state |= VAR_1;

 if (VAR_7->lsc_active_aggregator == VAR_6) {
  FUNC_7(VAR_7, VAR_6);
  FUNC_8(VAR_7);
 } else

  FUNC_6(VAR_7);

 FUNC_4(VAR_8->sc_ifp,
     VAR_8->sc_active ? VAR_3 : VAR_2);
}
