
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct bstp_port {int bp_port_id; } ;
struct TYPE_2__ {int pv_root_id; int pv_dbridge_id; int pv_port_id; void* pv_dport_id; int pv_cost; } ;
struct bstp_config_unit {int cu_topology_change_ack; int cu_proposal; int cu_agree; int cu_learning; int cu_forwarding; int cu_topology_change; void* cu_role; int cu_message_type; TYPE_1__ cu_pv; void* cu_forward_delay; void* cu_hello_time; void* cu_max_age; void* cu_message_age; } ;
struct bstp_cbpdu {int cbu_flags; int cbu_protover; int cbu_bpdutype; int cbu_portid; int cbu_forwarddelay; int cbu_hellotime; int cbu_maxage; int cbu_messageage; int cbu_rootpathcost; scalar_t__* cbu_bridgeaddr; int cbu_bridgepri; scalar_t__* cbu_rootaddr; int cbu_rootpri; } ;


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


 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bstp_port *VAR_13, struct bstp_cbpdu *VAR_14,
    struct bstp_config_unit *VAR_15)
{
 int VAR_16;

 VAR_15->cu_pv.pv_root_id =
     (((uint64_t)FUNC_1(VAR_14->cbu_rootpri)) << 48) |
     (((uint64_t)VAR_14->cbu_rootaddr[0]) << 40) |
     (((uint64_t)VAR_14->cbu_rootaddr[1]) << 32) |
     (((uint64_t)VAR_14->cbu_rootaddr[2]) << 24) |
     (((uint64_t)VAR_14->cbu_rootaddr[3]) << 16) |
     (((uint64_t)VAR_14->cbu_rootaddr[4]) << 8) |
     (((uint64_t)VAR_14->cbu_rootaddr[5]) << 0);

 VAR_15->cu_pv.pv_dbridge_id =
     (((uint64_t)FUNC_1(VAR_14->cbu_bridgepri)) << 48) |
     (((uint64_t)VAR_14->cbu_bridgeaddr[0]) << 40) |
     (((uint64_t)VAR_14->cbu_bridgeaddr[1]) << 32) |
     (((uint64_t)VAR_14->cbu_bridgeaddr[2]) << 24) |
     (((uint64_t)VAR_14->cbu_bridgeaddr[3]) << 16) |
     (((uint64_t)VAR_14->cbu_bridgeaddr[4]) << 8) |
     (((uint64_t)VAR_14->cbu_bridgeaddr[5]) << 0);

 VAR_15->cu_pv.pv_cost = FUNC_0(VAR_14->cbu_rootpathcost);
 VAR_15->cu_message_age = FUNC_1(VAR_14->cbu_messageage);
 VAR_15->cu_max_age = FUNC_1(VAR_14->cbu_maxage);
 VAR_15->cu_hello_time = FUNC_1(VAR_14->cbu_hellotime);
 VAR_15->cu_forward_delay = FUNC_1(VAR_14->cbu_forwarddelay);
 VAR_15->cu_pv.pv_dport_id = FUNC_1(VAR_14->cbu_portid);
 VAR_15->cu_pv.pv_port_id = VAR_13->bp_port_id;
 VAR_15->cu_message_type = VAR_14->cbu_bpdutype;


 VAR_16 = VAR_14->cbu_flags;
 switch (VAR_14->cbu_protover) {
  case 128:
   VAR_16 &= VAR_9;

   VAR_15->cu_role = VAR_11;
   break;

  case 129:
   VAR_16 &= VAR_8;
   break;
 }

 VAR_15->cu_topology_change_ack =
  (VAR_16 & VAR_5) ? 1 : 0;
 VAR_15->cu_proposal =
  (VAR_16 & VAR_3) ? 1 : 0;
 VAR_15->cu_agree =
  (VAR_16 & VAR_0) ? 1 : 0;
 VAR_15->cu_learning =
  (VAR_16 & VAR_2) ? 1 : 0;
 VAR_15->cu_forwarding =
  (VAR_16 & VAR_1) ? 1 : 0;
 VAR_15->cu_topology_change =
  (VAR_16 & VAR_4) ? 1 : 0;

 switch ((VAR_16 & VAR_6) >> VAR_7) {
  case 130:
   VAR_15->cu_role = VAR_12;
   break;
  case 132:
   VAR_15->cu_role = VAR_10;
   break;
  case 131:
   VAR_15->cu_role = VAR_11;
   break;
 }
}
