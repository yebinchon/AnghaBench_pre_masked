
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int dummy; } ;
struct bstp_port {int bp_active; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;
 int FUNC_1 (struct bstp_state*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct bstp_port*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct bstp_state*,struct bstp_port*) ;
 int FUNC_5 (struct bstp_state*) ;

void
FUNC_6(struct bstp_port *VAR_1)
{
 struct bstp_state *VAR_2 = VAR_1->bp_bs;

 FUNC_2(VAR_1->bp_active == 1, ("not a bstp member"));

 FUNC_0(VAR_2);
 FUNC_4(VAR_2, VAR_1);
 FUNC_3(VAR_1, VAR_0);
 VAR_1->bp_active = 0;
 FUNC_5(VAR_2);
 FUNC_1(VAR_2);
}
