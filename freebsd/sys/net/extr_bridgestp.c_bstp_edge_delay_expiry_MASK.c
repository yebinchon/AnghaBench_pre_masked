
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_state {int dummy; } ;
struct bstp_port {int bp_flags; scalar_t__ bp_protover; scalar_t__ bp_role; int bp_operedge; TYPE_1__* bp_ifp; scalar_t__ bp_proposing; } ;
struct TYPE_2__ {int if_xname; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bstp_state *VAR_3, struct bstp_port *VAR_4)
{
 if ((VAR_4->bp_flags & VAR_0) &&
     VAR_4->bp_protover == VAR_1 && VAR_4->bp_proposing &&
     VAR_4->bp_role == VAR_2) {
  VAR_4->bp_operedge = 1;
  FUNC_0("%s -> edge port\n", VAR_4->bp_ifp->if_xname);
 }
}
