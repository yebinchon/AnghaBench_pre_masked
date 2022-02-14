
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lip_state; } ;
struct lacp_port {int lp_state; TYPE_1__ lp_partner; int lp_selected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lacp_port*,int ) ;
 int FUNC_1 (struct lacp_port*) ;

__attribute__((used)) static void
FUNC_2(struct lacp_port *VAR_4)
{
 FUNC_0(VAR_4, VAR_0);

 VAR_4->lp_state &= ~VAR_1;
 VAR_4->lp_selected = VAR_3;
 FUNC_1(VAR_4);
 VAR_4->lp_partner.lip_state &= ~VAR_1;
 VAR_4->lp_state &= ~VAR_2;
}
