
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct pidctrl {int pc_setpoint; scalar_t__ pc_ticks; scalar_t__ pc_interval; int pc_olderror; int pc_error; int pc_output; int pc_Kpd; int pc_Kid; int pc_Kdd; int pc_integral; int pc_derivative; int pc_input; int pc_bound; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_0 ;

int
FUNC_2(struct pidctrl *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_1->pc_setpoint - VAR_2;






 if ((u_int)VAR_0 - VAR_1->pc_ticks >= VAR_1->pc_interval) {
  VAR_1->pc_ticks = VAR_0;
  VAR_1->pc_olderror = VAR_1->pc_error;
  VAR_1->pc_output = VAR_1->pc_error = 0;
 } else {

  VAR_4 -= VAR_1->pc_error - VAR_1->pc_output;
 }


 VAR_5 = FUNC_0(VAR_1->pc_Kpd, 1);
 VAR_6 = FUNC_0(VAR_1->pc_Kid, 1);
 VAR_7 = FUNC_0(VAR_1->pc_Kdd, 1);


 VAR_1->pc_error += VAR_4;
 VAR_1->pc_integral =
     FUNC_0(FUNC_1(VAR_1->pc_integral + VAR_4, VAR_1->pc_bound), 0);
 VAR_1->pc_derivative = VAR_1->pc_error - VAR_1->pc_olderror;


 VAR_3 = (VAR_1->pc_error / VAR_5) + (VAR_1->pc_integral / VAR_6) +
     (VAR_1->pc_derivative / VAR_7);
 VAR_3 = FUNC_0(VAR_3 - VAR_1->pc_output, 0);

 VAR_1->pc_output += VAR_3;
 VAR_1->pc_input = VAR_2;

 return (VAR_3);
}
