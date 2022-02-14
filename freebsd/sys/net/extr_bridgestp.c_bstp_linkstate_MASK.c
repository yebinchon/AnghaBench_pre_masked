
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int dummy; } ;
struct bstp_port {int bp_active; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;
 int FUNC_1 (struct bstp_state*) ;
 int FUNC_2 (struct bstp_port*,int ) ;
 int FUNC_3 (struct bstp_state*,struct bstp_port*) ;

void
FUNC_4(struct bstp_port *VAR_0)
{
 struct bstp_state *VAR_1 = VAR_0->bp_bs;

 if (!VAR_0->bp_active)
  return;

 FUNC_2(VAR_0, 0);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1, VAR_0);
 FUNC_1(VAR_1);
}
