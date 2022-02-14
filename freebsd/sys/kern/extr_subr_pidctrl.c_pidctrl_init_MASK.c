
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidctrl {int pc_setpoint; int pc_interval; int pc_bound; int pc_Kpd; int pc_Kid; int pc_Kdd; } ;


 int FUNC_0 (struct pidctrl*,int) ;

void
FUNC_1(struct pidctrl *VAR_0, int VAR_1, int VAR_2, int VAR_3,
    int VAR_4, int VAR_5, int VAR_6)
{

 FUNC_0(VAR_0, sizeof(*VAR_0));
 VAR_0->pc_setpoint = VAR_2;
 VAR_0->pc_interval = VAR_1;
 VAR_0->pc_bound = VAR_3 * VAR_2 * VAR_5;
 VAR_0->pc_Kpd = VAR_4;
 VAR_0->pc_Kid = VAR_5;
 VAR_0->pc_Kdd = VAR_6;
}
