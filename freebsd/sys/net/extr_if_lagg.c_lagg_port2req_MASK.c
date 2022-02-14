
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lagg_softc {int sc_proto; struct lagg_port* sc_primary; int sc_ifname; } ;
struct lagg_reqport {int rp_flags; int rp_psc; int rp_prio; int rp_portname; int rp_ifname; } ;
struct lagg_port {int lp_flags; int lp_prio; TYPE_1__* lp_ifp; struct lagg_softc* lp_softc; } ;
struct TYPE_2__ {int if_xname; } ;


 int FUNC_0 (struct lagg_port*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_1 (struct lagg_port*) ;
 int FUNC_2 (struct lagg_port*) ;
 int FUNC_3 (struct lagg_port*) ;
 struct lagg_port* FUNC_4 (struct lagg_softc*,struct lagg_port*) ;
 int FUNC_5 (struct lagg_softc*,struct lagg_port*,int *) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct lagg_port *VAR_4, struct lagg_reqport *VAR_5)
{
 struct lagg_softc *VAR_6 = VAR_4->lp_softc;

 FUNC_6(VAR_5->rp_ifname, VAR_6->sc_ifname, sizeof(VAR_5->rp_ifname));
 FUNC_6(VAR_5->rp_portname, VAR_4->lp_ifp->if_xname, sizeof(VAR_5->rp_portname));
 VAR_5->rp_prio = VAR_4->lp_prio;
 VAR_5->rp_flags = VAR_4->lp_flags;
 FUNC_5(VAR_6, VAR_4, &VAR_5->rp_psc);


 switch (VAR_6->sc_proto) {
  case 131:
   if (VAR_4 == VAR_6->sc_primary)
    VAR_5->rp_flags |= VAR_3;
   if (VAR_4 == FUNC_4(VAR_6, VAR_6->sc_primary))
    VAR_5->rp_flags |= VAR_0;
   break;

  case 128:
  case 129:
  case 132:
   if (FUNC_0(VAR_4))
    VAR_5->rp_flags |= VAR_0;
   break;

  case 130:

   if (FUNC_1(VAR_4))
    VAR_5->rp_flags |= VAR_0;
   if (FUNC_2(VAR_4))
    VAR_5->rp_flags |= VAR_1;
   if (FUNC_3(VAR_4))
    VAR_5->rp_flags |= VAR_2;
   break;
 }

}
