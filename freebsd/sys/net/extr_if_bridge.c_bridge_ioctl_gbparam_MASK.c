
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int tv_usec; int tv_sec; } ;
struct ifbropreq {int ifbop_maxage; int ifbop_hellotime; int ifbop_fwddelay; TYPE_4__ ifbop_last_tc_time; int ifbop_designated_bridge; int ifbop_designated_root; int ifbop_bridgeid; int ifbop_root_path_cost; int ifbop_protocol; int ifbop_priority; int ifbop_holdcount; scalar_t__ ifbop_root_port; } ;
struct TYPE_10__ {int tv_usec; int tv_sec; } ;
struct TYPE_8__ {int pv_dbridge_id; int pv_root_id; int pv_cost; } ;
struct TYPE_7__ {int pv_dbridge_id; } ;
struct bstp_state {int bs_bridge_max_age; int bs_bridge_htime; int bs_bridge_fdelay; TYPE_5__ bs_last_tc_time; TYPE_3__ bs_root_pv; TYPE_2__ bs_bridge_pv; int bs_protover; int bs_bridge_priority; int bs_txholdcount; struct bstp_port* bs_root_port; } ;
struct bstp_port {TYPE_1__* bp_ifp; } ;
struct bridge_softc {struct bstp_state sc_stp; } ;
struct TYPE_6__ {scalar_t__ if_index; } ;



__attribute__((used)) static int
FUNC_0(struct bridge_softc *VAR_0, void *VAR_1)
{
 struct ifbropreq *VAR_2 = VAR_1;
 struct bstp_state *VAR_3 = &VAR_0->sc_stp;
 struct bstp_port *VAR_4;

 VAR_2->ifbop_maxage = VAR_3->bs_bridge_max_age >> 8;
 VAR_2->ifbop_hellotime = VAR_3->bs_bridge_htime >> 8;
 VAR_2->ifbop_fwddelay = VAR_3->bs_bridge_fdelay >> 8;

 VAR_4 = VAR_3->bs_root_port;
 if (VAR_4 == ((void*)0))
  VAR_2->ifbop_root_port = 0;
 else
  VAR_2->ifbop_root_port = VAR_4->bp_ifp->if_index;

 VAR_2->ifbop_holdcount = VAR_3->bs_txholdcount;
 VAR_2->ifbop_priority = VAR_3->bs_bridge_priority;
 VAR_2->ifbop_protocol = VAR_3->bs_protover;
 VAR_2->ifbop_root_path_cost = VAR_3->bs_root_pv.pv_cost;
 VAR_2->ifbop_bridgeid = VAR_3->bs_bridge_pv.pv_dbridge_id;
 VAR_2->ifbop_designated_root = VAR_3->bs_root_pv.pv_root_id;
 VAR_2->ifbop_designated_bridge = VAR_3->bs_root_pv.pv_dbridge_id;
 VAR_2->ifbop_last_tc_time.tv_sec = VAR_3->bs_last_tc_time.tv_sec;
 VAR_2->ifbop_last_tc_time.tv_usec = VAR_3->bs_last_tc_time.tv_usec;

 return (0);
}
