
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_state {int bs_last_tc_time; } ;
struct bstp_port {int bp_tcstate; int bp_fdbflush; int bp_tc_ack; TYPE_1__* bp_ifp; int bp_rcvdtca; int bp_tc_timer; int bp_tc_prop; int bp_rtagetask; int bp_role; int bp_rcvdtcn; int bp_rcvdtc; int bp_flags; struct bstp_state* bp_bs; } ;
struct TYPE_2__ {int if_xname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct bstp_port*) ;
 int FUNC_2 (struct bstp_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bstp_state*,struct bstp_port*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct bstp_port *VAR_3, int VAR_4)
{
 struct bstp_state *VAR_5 = VAR_3->bp_bs;

 VAR_3->bp_tcstate = VAR_4;


 switch (VAR_3->bp_tcstate) {
  case 134:
   FUNC_0("%s -> TC_ACTIVE\n", VAR_3->bp_ifp->if_xname);

   break;

  case 132:
   FUNC_3(&VAR_3->bp_tc_timer);

   VAR_3->bp_fdbflush = 1;
   FUNC_6(VAR_2, &VAR_3->bp_rtagetask);
   VAR_3->bp_tc_ack = 0;
   FUNC_0("%s -> TC_INACTIVE\n", VAR_3->bp_ifp->if_xname);
   break;

  case 131:
   VAR_3->bp_rcvdtc = 0;
   VAR_3->bp_rcvdtcn = 0;
   VAR_3->bp_rcvdtca = 0;
   VAR_3->bp_tc_prop = 0;
   FUNC_0("%s -> TC_LEARNING\n", VAR_3->bp_ifp->if_xname);
   break;

  case 133:
   FUNC_2(VAR_3);
   FUNC_1(VAR_3);

   VAR_3->bp_flags |= VAR_0;
   FUNC_4(VAR_5, VAR_3);
   FUNC_5(&VAR_5->bs_last_tc_time);
   FUNC_0("%s -> TC_DETECTED\n", VAR_3->bp_ifp->if_xname);
   VAR_3->bp_tcstate = 134;
   break;

  case 128:
   FUNC_2(VAR_3);
   FUNC_0("%s -> TC_TCN\n", VAR_3->bp_ifp->if_xname);

  case 129:
   VAR_3->bp_rcvdtc = 0;
   VAR_3->bp_rcvdtcn = 0;
   if (VAR_3->bp_role == VAR_1)
    VAR_3->bp_tc_ack = 1;

   FUNC_1(VAR_3);
   FUNC_0("%s -> TC_TC\n", VAR_3->bp_ifp->if_xname);
   VAR_3->bp_tcstate = 134;
   break;

  case 130:

   VAR_3->bp_fdbflush = 1;
   FUNC_6(VAR_2, &VAR_3->bp_rtagetask);
   VAR_3->bp_tc_prop = 0;
   FUNC_2(VAR_3);
   FUNC_0("%s -> TC_PROPAG\n", VAR_3->bp_ifp->if_xname);
   VAR_3->bp_tcstate = 134;
   break;

  case 135:
   FUNC_3(&VAR_3->bp_tc_timer);
   VAR_3->bp_rcvdtca = 0;
   FUNC_0("%s -> TC_ACK\n", VAR_3->bp_ifp->if_xname);
   VAR_3->bp_tcstate = 134;
   break;
 }
}
