
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bstp_state {int dummy; } ;
struct bstp_port {scalar_t__ bp_protover; int bp_path_cost; int bp_flags; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bstp_state*) ;
 int VAR_3 ;
 int FUNC_2 (struct bstp_port*) ;
 int FUNC_3 (struct bstp_state*) ;

int
FUNC_4(struct bstp_port *VAR_4, uint32_t VAR_5)
{
 struct bstp_state *VAR_6 = VAR_4->bp_bs;

 if (VAR_5 > VAR_0)
  return (VAR_3);


 if (VAR_4->bp_protover == VAR_2 && VAR_5 > 65535)
  VAR_5 = 65535;

 FUNC_0(VAR_6);

 if (VAR_5 == 0) {
  VAR_4->bp_flags &= ~VAR_1;
  VAR_4->bp_path_cost = FUNC_2(VAR_4);
 } else {
  VAR_4->bp_path_cost = VAR_5;
  VAR_4->bp_flags |= VAR_1;
 }
 FUNC_3(VAR_6);
 FUNC_1(VAR_6);
 return (0);
}
