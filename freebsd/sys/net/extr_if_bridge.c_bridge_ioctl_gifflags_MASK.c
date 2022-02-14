
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifbreq {int ifbr_portno; int ifbr_stpflags; int ifbr_ifsflags; int ifbr_addrexceeded; int ifbr_addrmax; int ifbr_addrcnt; int ifbr_role; int ifbr_proto; int ifbr_path_cost; int ifbr_priority; int ifbr_state; int ifbr_ifsname; } ;
struct bstp_port {int bp_flags; scalar_t__ bp_ptp_link; scalar_t__ bp_operedge; int bp_role; int bp_protover; int bp_path_cost; int bp_priority; int bp_state; } ;
struct bridge_softc {int dummy; } ;
struct bridge_iflist {int bif_addrexceeded; int bif_addrmax; int bif_addrcnt; TYPE_1__* bif_ifp; int bif_flags; struct bstp_port bif_stp; } ;
struct TYPE_2__ {int if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct bridge_iflist* FUNC_0 (struct bridge_softc*,int ) ;

__attribute__((used)) static int
FUNC_1(struct bridge_softc *VAR_11, void *VAR_12)
{
 struct ifbreq *VAR_13 = VAR_12;
 struct bridge_iflist *VAR_14;
 struct bstp_port *VAR_15;

 VAR_14 = FUNC_0(VAR_11, VAR_13->ifbr_ifsname);
 if (VAR_14 == ((void*)0))
  return (VAR_4);

 VAR_15 = &VAR_14->bif_stp;
 VAR_13->ifbr_ifsflags = VAR_14->bif_flags;
 VAR_13->ifbr_state = VAR_15->bp_state;
 VAR_13->ifbr_priority = VAR_15->bp_priority;
 VAR_13->ifbr_path_cost = VAR_15->bp_path_cost;
 VAR_13->ifbr_portno = VAR_14->bif_ifp->if_index & 0xfff;
 VAR_13->ifbr_proto = VAR_15->bp_protover;
 VAR_13->ifbr_role = VAR_15->bp_role;
 VAR_13->ifbr_stpflags = VAR_15->bp_flags;
 VAR_13->ifbr_addrcnt = VAR_14->bif_addrcnt;
 VAR_13->ifbr_addrmax = VAR_14->bif_addrmax;
 VAR_13->ifbr_addrexceeded = VAR_14->bif_addrexceeded;


 if (VAR_15->bp_operedge)
  VAR_13->ifbr_ifsflags |= VAR_9;
 if (VAR_15->bp_flags & VAR_2)
  VAR_13->ifbr_ifsflags |= VAR_7;
 if (VAR_15->bp_ptp_link)
  VAR_13->ifbr_ifsflags |= VAR_10;
 if (VAR_15->bp_flags & VAR_3)
  VAR_13->ifbr_ifsflags |= VAR_8;
 if (VAR_15->bp_flags & VAR_1)
  VAR_13->ifbr_ifsflags |= VAR_6;
 if (VAR_15->bp_flags & VAR_0)
  VAR_13->ifbr_ifsflags |= VAR_5;
 return (0);
}
