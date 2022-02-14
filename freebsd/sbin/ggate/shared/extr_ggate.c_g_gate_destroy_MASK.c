
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_ctl_destroy {int gctl_unit; int gctl_force; int gctl_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct g_gate_ctl_destroy*) ;

void
FUNC_1(int VAR_2, int VAR_3)
{
 struct g_gate_ctl_destroy VAR_4;

 VAR_4.gctl_version = VAR_1;
 VAR_4.gctl_unit = VAR_2;
 VAR_4.gctl_force = VAR_3;
 FUNC_0(VAR_0, &VAR_4);
}
