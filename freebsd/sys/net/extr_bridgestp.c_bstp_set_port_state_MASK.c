
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_port {int bp_state; int bp_statetask; int bp_forward_transitions; int bp_forward_delay_timer; TYPE_1__* bp_ifp; int bp_desg_fdelay; int bp_desg_htime; int bp_protover; } ;
struct TYPE_2__ {int if_xname; } ;





 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct bstp_port *VAR_2, int VAR_3)
{
 if (VAR_2->bp_state == VAR_3)
  return;

 VAR_2->bp_state = VAR_3;

 switch (VAR_2->bp_state) {
  case 130:
   FUNC_0("state changed to DISCARDING on %s\n",
       VAR_2->bp_ifp->if_xname);
   break;

  case 128:
   FUNC_0("state changed to LEARNING on %s\n",
       VAR_2->bp_ifp->if_xname);

   FUNC_1(&VAR_2->bp_forward_delay_timer,
       VAR_2->bp_protover == VAR_0 ?
       VAR_2->bp_desg_htime : VAR_2->bp_desg_fdelay);
   break;

  case 129:
   FUNC_0("state changed to FORWARDING on %s\n",
       VAR_2->bp_ifp->if_xname);

   FUNC_2(&VAR_2->bp_forward_delay_timer);

   VAR_2->bp_forward_transitions++;
   break;
 }


 FUNC_3(VAR_1, &VAR_2->bp_statetask);
}
