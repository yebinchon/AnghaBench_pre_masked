
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_state {int dummy; } ;
struct TYPE_2__ {int pv_root_id; int pv_dbridge_id; int pv_cost; } ;
struct bstp_port {int bp_port_id; int bp_desg_msg_age; int bp_desg_max_age; int bp_desg_htime; int bp_desg_fdelay; int bp_protover; TYPE_1__ bp_desg_pv; } ;
struct bstp_cbpdu {int cbu_bpdutype; int cbu_flags; void* cbu_forwarddelay; void* cbu_hellotime; void* cbu_maxage; void* cbu_messageage; void* cbu_portid; int cbu_bridgeaddr; void* cbu_bridgepri; int cbu_rootpathcost; int cbu_rootaddr; void* cbu_rootpri; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct bstp_port*) ;
 int FUNC_3 (struct bstp_state*,struct bstp_port*,struct bstp_cbpdu*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct bstp_state *VAR_2, struct bstp_port *VAR_3)
{
 struct bstp_cbpdu VAR_4;

 FUNC_0(VAR_2);

 VAR_4.cbu_rootpri = FUNC_5(VAR_3->bp_desg_pv.pv_root_id >> 48);
 FUNC_1(VAR_3->bp_desg_pv.pv_root_id, VAR_4.cbu_rootaddr);

 VAR_4.cbu_rootpathcost = FUNC_4(VAR_3->bp_desg_pv.pv_cost);

 VAR_4.cbu_bridgepri = FUNC_5(VAR_3->bp_desg_pv.pv_dbridge_id >> 48);
 FUNC_1(VAR_3->bp_desg_pv.pv_dbridge_id, VAR_4.cbu_bridgeaddr);

 VAR_4.cbu_portid = FUNC_5(VAR_3->bp_port_id);
 VAR_4.cbu_messageage = FUNC_5(VAR_3->bp_desg_msg_age);
 VAR_4.cbu_maxage = FUNC_5(VAR_3->bp_desg_max_age);
 VAR_4.cbu_hellotime = FUNC_5(VAR_3->bp_desg_htime);
 VAR_4.cbu_forwarddelay = FUNC_5(VAR_3->bp_desg_fdelay);

 VAR_4.cbu_flags = FUNC_2(VAR_3);

 switch (VAR_3->bp_protover) {
  case 128:
   VAR_4.cbu_bpdutype = VAR_0;
   break;

  case 129:
   VAR_4.cbu_bpdutype = VAR_1;
   break;
 }

 FUNC_3(VAR_2, VAR_3, &VAR_4);
}
