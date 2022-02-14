
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidctrl {int pc_setpoint; int pc_olderror; int pc_error; int pc_integral; int pc_bound; int pc_derivative; int pc_output; int pc_input; int pc_Kdd; int pc_Kid; int pc_Kpd; int pc_ticks; } ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;

int
FUNC_2(struct pidctrl *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_1->pc_setpoint - VAR_2;
 VAR_1->pc_ticks = VAR_0;
 VAR_1->pc_olderror = VAR_1->pc_error;


 VAR_5 = FUNC_0(VAR_1->pc_Kpd, 1);
 VAR_6 = FUNC_0(VAR_1->pc_Kid, 1);
 VAR_7 = FUNC_0(VAR_1->pc_Kdd, 1);


 VAR_1->pc_error = VAR_4;
 VAR_1->pc_integral =
     FUNC_0(FUNC_1(VAR_1->pc_integral + VAR_4, VAR_1->pc_bound), -VAR_1->pc_bound);
 VAR_1->pc_derivative = VAR_4 - VAR_1->pc_olderror;


 VAR_3 = (VAR_1->pc_error / VAR_5) + (VAR_1->pc_integral / VAR_6) +
     (VAR_1->pc_derivative / VAR_7);

 VAR_1->pc_output = VAR_3;
 VAR_1->pc_input = VAR_2;

 return (VAR_3);
}
