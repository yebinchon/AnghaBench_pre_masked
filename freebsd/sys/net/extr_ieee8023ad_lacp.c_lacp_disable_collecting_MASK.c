
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacp_port {int lp_state; } ;


 int FUNC_0 (struct lacp_port*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct lacp_port *VAR_1)
{
 FUNC_0((VAR_1, "collecting disabled\n"));
 VAR_1->lp_state &= ~VAR_0;
}
