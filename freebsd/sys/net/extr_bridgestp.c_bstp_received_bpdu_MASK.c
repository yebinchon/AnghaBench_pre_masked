
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int bs_allsynced; } ;
struct bstp_port {int bp_infois; int bp_agreed; int bp_proposed; int bp_rcvdtc; int bp_rcvdtca; int bp_proposing; int bp_ptp_link; int bp_port_htime; int bp_port_fdelay; int bp_port_max_age; int bp_port_msg_age; int bp_port_pv; int bp_agree; } ;
struct bstp_config_unit {int cu_topology_change_ack; int cu_topology_change; int cu_agree; int cu_learning; int cu_forwarding; int cu_proposal; int cu_hello_time; int cu_forward_delay; int cu_max_age; int cu_message_age; int cu_pv; } ;




 int VAR_0 ;
 int FUNC_0 (struct bstp_state*) ;
 int VAR_1 ;





 int FUNC_1 (struct bstp_state*) ;
 int FUNC_2 (struct bstp_port*,int) ;
 int FUNC_3 (struct bstp_port*,struct bstp_config_unit*) ;
 int FUNC_4 (struct bstp_port*) ;
 int FUNC_5 (struct bstp_state*,struct bstp_port*) ;

__attribute__((used)) static void
FUNC_6(struct bstp_state *VAR_2, struct bstp_port *VAR_3,
    struct bstp_config_unit *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2);


 switch (VAR_3->bp_infois) {
  case 133:
  case 134:
   return;
 }

 VAR_5 = FUNC_3(VAR_3, VAR_4);

 switch (VAR_5) {
  case 128:
   VAR_2->bs_allsynced = 0;
   VAR_3->bp_agreed = 0;
   VAR_3->bp_proposing = 0;

   if (VAR_4->cu_proposal && VAR_4->cu_forwarding == 0)
    VAR_3->bp_proposed = 1;
   if (VAR_4->cu_topology_change)
    VAR_3->bp_rcvdtc = 1;
   if (VAR_4->cu_topology_change_ack)
    VAR_3->bp_rcvdtca = 1;

   if (VAR_3->bp_agree &&
       !FUNC_2(VAR_3, VAR_0))
    VAR_3->bp_agree = 0;


   VAR_3->bp_port_pv = VAR_4->cu_pv;
   VAR_3->bp_port_msg_age = VAR_4->cu_message_age;
   VAR_3->bp_port_max_age = VAR_4->cu_max_age;
   VAR_3->bp_port_fdelay = VAR_4->cu_forward_delay;
   VAR_3->bp_port_htime =
    (VAR_4->cu_hello_time > VAR_1 ?
     VAR_4->cu_hello_time : VAR_1);


   FUNC_4(VAR_3);

   VAR_3->bp_infois = VAR_0;
   FUNC_1(VAR_2);
   break;

  case 129:
   if (VAR_4->cu_proposal && VAR_4->cu_forwarding == 0)
    VAR_3->bp_proposed = 1;
   if (VAR_4->cu_topology_change)
    VAR_3->bp_rcvdtc = 1;
   if (VAR_4->cu_topology_change_ack)
    VAR_3->bp_rcvdtca = 1;


   FUNC_4(VAR_3);
   break;

  case 132:
   if (VAR_4->cu_learning) {
    VAR_3->bp_agreed = 1;
    VAR_3->bp_proposing = 0;
   }
   break;

  case 131:




   if (VAR_4->cu_agree && VAR_3->bp_ptp_link) {
    VAR_3->bp_agreed = 1;
    VAR_3->bp_proposing = 0;
   } else
    VAR_3->bp_agreed = 0;

   if (VAR_4->cu_topology_change)
    VAR_3->bp_rcvdtc = 1;
   if (VAR_4->cu_topology_change_ack)
    VAR_3->bp_rcvdtca = 1;
   break;

  case 130:
   return;
 }

 FUNC_5(VAR_2, VAR_3);
}
