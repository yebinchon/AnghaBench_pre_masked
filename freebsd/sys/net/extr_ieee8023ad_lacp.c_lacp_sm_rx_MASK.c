
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lip_systemid; } ;
struct lacpdu {TYPE_1__ ldu_actor; } ;
struct TYPE_4__ {int lip_systemid; } ;
struct lacp_port {int lp_state; TYPE_2__ lp_actor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lacp_port*,int ,int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct lacp_port*,struct lacpdu const*) ;
 int FUNC_3 (struct lacp_port*,struct lacpdu const*) ;
 int FUNC_4 (struct lacp_port*,struct lacpdu const*) ;
 int FUNC_5 (struct lacp_port*) ;

__attribute__((used)) static void
FUNC_6(struct lacp_port *VAR_6, const struct lacpdu *VAR_7)
{
 int VAR_8;





 if (!(VAR_6->lp_state & VAR_2)) {
  return;
 }





 if (!FUNC_1(&VAR_7->ldu_actor.lip_systemid,
     &VAR_6->lp_actor.lip_systemid)) {
  return;
 }





 FUNC_4(VAR_6, VAR_7);
 FUNC_3(VAR_6, VAR_7);
 FUNC_2(VAR_6, VAR_7);

 VAR_8 = (VAR_6->lp_state & VAR_4) ?
     VAR_1 : VAR_0;
 FUNC_0(VAR_6, VAR_5, VAR_8);

 VAR_6->lp_state &= ~VAR_3;





 FUNC_5(VAR_6);
}
