
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int lip_state; } ;
struct lacp_port {TYPE_1__ lp_partner; } ;


 int FUNC_0 (struct lacp_port*) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct lacp_port*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct lacp_port*) ;

__attribute__((used)) static void
FUNC_4(struct lacp_port *VAR_2, uint8_t VAR_3)
{
 if (FUNC_1(VAR_3, VAR_2->lp_partner.lip_state,
     VAR_0)) {
  return;
 }

 FUNC_0((VAR_2, "partner timeout changed\n"));
 FUNC_2(VAR_2, VAR_1);





 if ((VAR_2->lp_partner.lip_state & VAR_0)) {
  FUNC_3(VAR_2);
 }
}
