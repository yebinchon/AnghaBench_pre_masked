
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lagg_softc {int sc_ifp; } ;
struct lagg_port {struct lagg_softc* lp_softc; } ;
struct lacp_port {int lp_state; TYPE_2__* lp_ifp; struct lagg_port* lp_lagg; } ;
struct TYPE_4__ {void* lpi_portno; void* lpi_prio; } ;
struct TYPE_6__ {int lsi_mac; void* lsi_prio; } ;
struct lacp_peerinfo {int lip_state; TYPE_1__ lip_portid; TYPE_3__ lip_systemid; } ;
struct TYPE_5__ {int if_index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct lacp_port *VAR_3, struct lacp_peerinfo *VAR_4)
{
 struct lagg_port *VAR_5 = VAR_3->lp_lagg;
 struct lagg_softc *VAR_6 = VAR_5->lp_softc;

 VAR_4->lip_systemid.lsi_prio = FUNC_1(VAR_2);
 FUNC_2(&VAR_4->lip_systemid.lsi_mac,
     FUNC_0(VAR_6->sc_ifp), VAR_0);
 VAR_4->lip_portid.lpi_prio = FUNC_1(VAR_1);
 VAR_4->lip_portid.lpi_portno = FUNC_1(VAR_3->lp_ifp->if_index);
 VAR_4->lip_state = VAR_3->lp_state;
}
