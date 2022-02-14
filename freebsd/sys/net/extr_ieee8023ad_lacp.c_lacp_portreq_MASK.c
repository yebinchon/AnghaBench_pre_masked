
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lagg_port {int dummy; } ;
struct lacp_softc {int dummy; } ;
struct TYPE_11__ {int lpi_portno; int lpi_prio; } ;
struct TYPE_10__ {int lsi_mac; int lsi_prio; } ;
struct TYPE_12__ {int lip_state; TYPE_5__ lip_portid; int lip_key; TYPE_4__ lip_systemid; } ;
struct TYPE_8__ {int lpi_portno; int lpi_prio; } ;
struct TYPE_7__ {int lsi_mac; int lsi_prio; } ;
struct TYPE_9__ {int lip_state; TYPE_2__ lip_portid; int lip_key; TYPE_1__ lip_systemid; } ;
struct lacp_port {TYPE_6__ lp_partner; TYPE_3__ lp_actor; struct lacp_softc* lp_lsc; } ;
struct lacp_opreq {int partner_state; void* partner_portno; void* partner_portprio; void* partner_key; int partner_mac; void* partner_prio; int actor_state; void* actor_portno; void* actor_portprio; void* actor_key; int actor_mac; void* actor_prio; } ;


 int VAR_0 ;
 int FUNC_0 (struct lacp_softc*) ;
 struct lacp_port* FUNC_1 (struct lagg_port*) ;
 int FUNC_2 (struct lacp_softc*) ;
 int FUNC_3 (int *,int *,int ) ;
 void* FUNC_4 (int ) ;

void
FUNC_5(struct lagg_port *VAR_1, void *VAR_2)
{
 struct lacp_opreq *VAR_3 = (struct lacp_opreq *)VAR_2;
 struct lacp_port *VAR_4 = FUNC_1(VAR_1);
 struct lacp_softc *VAR_5 = VAR_4->lp_lsc;

 FUNC_0(VAR_5);
 VAR_3->actor_prio = FUNC_4(VAR_4->lp_actor.lip_systemid.lsi_prio);
 FUNC_3(&VAR_3->actor_mac, &VAR_4->lp_actor.lip_systemid.lsi_mac,
     VAR_0);
 VAR_3->actor_key = FUNC_4(VAR_4->lp_actor.lip_key);
 VAR_3->actor_portprio = FUNC_4(VAR_4->lp_actor.lip_portid.lpi_prio);
 VAR_3->actor_portno = FUNC_4(VAR_4->lp_actor.lip_portid.lpi_portno);
 VAR_3->actor_state = VAR_4->lp_actor.lip_state;

 VAR_3->partner_prio = FUNC_4(VAR_4->lp_partner.lip_systemid.lsi_prio);
 FUNC_3(&VAR_3->partner_mac, &VAR_4->lp_partner.lip_systemid.lsi_mac,
     VAR_0);
 VAR_3->partner_key = FUNC_4(VAR_4->lp_partner.lip_key);
 VAR_3->partner_portprio = FUNC_4(VAR_4->lp_partner.lip_portid.lpi_prio);
 VAR_3->partner_portno = FUNC_4(VAR_4->lp_partner.lip_portid.lpi_portno);
 VAR_3->partner_state = VAR_4->lp_partner.lip_state;
 FUNC_2(VAR_5);
}
