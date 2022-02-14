
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lip_state; } ;
struct lacp_port {int lp_state; int lp_flags; TYPE_4__* lp_lsc; TYPE_2__* lp_ifp; int lp_lacpdu_sent; int lp_last_lacpdu; TYPE_1__ lp_partner; } ;
struct TYPE_7__ {int lsc_tx_test; } ;
struct TYPE_8__ {TYPE_3__ lsc_debug; } ;
struct TYPE_6__ {int if_dunit; } ;


 int FUNC_0 (struct lacp_port*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct lacp_port*) ;
 int FUNC_2 (struct lacp_port*) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_4(struct lacp_port *VAR_4)
{
 int VAR_5 = 0;

 if (!(VAR_4->lp_state & VAR_3)

     || (!(VAR_4->lp_state & VAR_2)
     && !(VAR_4->lp_partner.lip_state & VAR_2))

     ) {
  VAR_4->lp_flags &= ~VAR_1;
 }

 if (!(VAR_4->lp_flags & VAR_1)) {
  return;
 }


 if (FUNC_3(&VAR_4->lp_last_lacpdu, &VAR_4->lp_lacpdu_sent,
      (3 / VAR_0)) == 0) {
  FUNC_0((VAR_4, "rate limited pdu\n"));
  return;
 }

 if (((1 << VAR_4->lp_ifp->if_dunit) & VAR_4->lp_lsc->lsc_debug.lsc_tx_test) == 0) {
  VAR_5 = FUNC_2(VAR_4);
 } else {
  FUNC_1((VAR_4, "Dropping TX PDU\n"));
 }

 if (VAR_5 == 0) {
  VAR_4->lp_flags &= ~VAR_1;
 } else {
  FUNC_0((VAR_4, "lacpdu transmit failure, error %d\n",
      VAR_5));
 }
}
