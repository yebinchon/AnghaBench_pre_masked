
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ active; } ;
struct bstp_port {int bp_flags; TYPE_1__ bp_edge_delay_timer; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 int FUNC_1 (struct bstp_state*) ;
 int FUNC_2 (struct bstp_state*,struct bstp_port*) ;

int
FUNC_3(struct bstp_port *VAR_1, int VAR_2)
{
 struct bstp_state *VAR_3 = VAR_1->bp_bs;

 FUNC_0(VAR_3);
 if (VAR_2) {
  VAR_1->bp_flags |= VAR_0;

  if (VAR_1->bp_edge_delay_timer.active == 0)
   FUNC_2(VAR_3, VAR_1);
 } else
  VAR_1->bp_flags &= ~VAR_0;
 FUNC_1(VAR_3);
 return (0);
}
