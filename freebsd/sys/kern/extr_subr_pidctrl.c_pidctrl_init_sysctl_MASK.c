
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct pidctrl {int pc_Kdd; int pc_Kid; int pc_Kpd; int pc_bound; int pc_interval; int pc_setpoint; int pc_ticks; int pc_output; int pc_input; int pc_derivative; int pc_integral; int pc_olderror; int pc_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;

void
FUNC_1(struct pidctrl *VAR_3, struct sysctl_oid_list *VAR_4)
{

 FUNC_0(((void*)0), VAR_4, VAR_2, "error", VAR_0,
     &VAR_3->pc_error, 0, "Current difference from setpoint value (P)");
 FUNC_0(((void*)0), VAR_4, VAR_2, "olderror", VAR_0,
     &VAR_3->pc_olderror, 0, "Error value from last interval");
 FUNC_0(((void*)0), VAR_4, VAR_2, "integral", VAR_0,
     &VAR_3->pc_integral, 0, "Accumulated error integral (I)");
 FUNC_0(((void*)0), VAR_4, VAR_2, "derivative", VAR_0,
     &VAR_3->pc_derivative, 0, "Error derivative (D)");
 FUNC_0(((void*)0), VAR_4, VAR_2, "input", VAR_0,
     &VAR_3->pc_input, 0, "Last controller process variable input");
 FUNC_0(((void*)0), VAR_4, VAR_2, "output", VAR_0,
     &VAR_3->pc_output, 0, "Last controller output");
 FUNC_0(((void*)0), VAR_4, VAR_2, "ticks", VAR_0,
     &VAR_3->pc_ticks, 0, "Last controller runtime");
 FUNC_0(((void*)0), VAR_4, VAR_2, "setpoint", VAR_1,
     &VAR_3->pc_setpoint, 0, "Desired level for process variable");
 FUNC_0(((void*)0), VAR_4, VAR_2, "interval", VAR_0,
     &VAR_3->pc_interval, 0, "Interval between calculations (ticks)");
 FUNC_0(((void*)0), VAR_4, VAR_2, "bound", VAR_1,
     &VAR_3->pc_bound, 0, "Integral wind-up limit");
 FUNC_0(((void*)0), VAR_4, VAR_2, "kpd", VAR_1,
     &VAR_3->pc_Kpd, 0, "Inverse of proportional gain");
 FUNC_0(((void*)0), VAR_4, VAR_2, "kid", VAR_1,
     &VAR_3->pc_Kid, 0, "Inverse of integral gain");
 FUNC_0(((void*)0), VAR_4, VAR_2, "kdd", VAR_1,
     &VAR_3->pc_Kdd, 0, "Inverse of derivative gain");
}
