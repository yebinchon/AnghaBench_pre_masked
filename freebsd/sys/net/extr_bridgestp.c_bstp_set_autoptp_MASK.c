
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int dummy; } ;
struct bstp_port {scalar_t__ bp_role; int bp_flags; int bp_mediatask; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bstp_state*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;

int
FUNC_3(struct bstp_port *VAR_3, int VAR_4)
{
 struct bstp_state *VAR_5 = VAR_3->bp_bs;

 FUNC_0(VAR_5);
 if (VAR_4) {
  VAR_3->bp_flags |= VAR_0;
  if (VAR_3->bp_role != VAR_1)
   FUNC_2(VAR_2, &VAR_3->bp_mediatask);
 } else
  VAR_3->bp_flags &= ~VAR_0;
 FUNC_1(VAR_5);
 return (0);
}
