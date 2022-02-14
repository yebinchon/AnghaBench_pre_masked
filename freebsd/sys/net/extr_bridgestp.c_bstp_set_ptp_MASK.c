
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int dummy; } ;
struct bstp_port {int bp_ptp_link; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;
 int FUNC_1 (struct bstp_state*) ;

int
FUNC_2(struct bstp_port *VAR_0, int VAR_1)
{
 struct bstp_state *VAR_2 = VAR_0->bp_bs;

 FUNC_0(VAR_2);
 VAR_0->bp_ptp_link = VAR_1;
 FUNC_1(VAR_2);
 return (0);
}
