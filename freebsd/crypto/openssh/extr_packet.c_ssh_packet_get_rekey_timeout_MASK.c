
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct ssh {TYPE_1__* state; } ;
struct TYPE_2__ {int rekey_time; int rekey_interval; } ;


 int FUNC_0 () ;

time_t
FUNC_1(struct ssh *VAR_0)
{
 time_t VAR_1;

 VAR_1 = VAR_0->state->rekey_time + VAR_0->state->rekey_interval -
     FUNC_0();
 return (VAR_1 <= 0 ? 1 : VAR_1);
}
