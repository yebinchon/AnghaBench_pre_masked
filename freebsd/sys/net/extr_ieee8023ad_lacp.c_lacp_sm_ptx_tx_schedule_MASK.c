
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lip_state; } ;
struct lacp_port {int lp_state; TYPE_1__ lp_partner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lacp_port*,int ,int) ;
 int FUNC_1 (struct lacp_port*,int ) ;
 scalar_t__ FUNC_2 (struct lacp_port*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct lacp_port *VAR_5)
{
 int VAR_6;

 if (!(VAR_5->lp_state & VAR_2) &&
     !(VAR_5->lp_partner.lip_state & VAR_2)) {





  FUNC_1(VAR_5, VAR_4);
  return;
 }

 if (FUNC_2(VAR_5, VAR_4)) {
  return;
 }

 VAR_6 = (VAR_5->lp_partner.lip_state & VAR_3) ?
     VAR_0 : VAR_1;

 FUNC_0(VAR_5, VAR_4, VAR_6);
}
