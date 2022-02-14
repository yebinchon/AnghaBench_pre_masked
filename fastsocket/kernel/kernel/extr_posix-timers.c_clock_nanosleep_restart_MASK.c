
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; } ;
struct restart_block {TYPE_1__ nanosleep; } ;
struct k_clock {long (* nsleep_restart ) (struct restart_block*) ;} ;
typedef int clockid_t ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct k_clock* FUNC_1 (int ) ;
 long FUNC_2 (struct restart_block*) ;

long FUNC_3(struct restart_block *VAR_1)
{
 clockid_t VAR_2 = VAR_1->nanosleep.index;
 struct k_clock *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(!VAR_3 || !VAR_3->nsleep_restart))
  return -VAR_0;

 return VAR_3->nsleep_restart(VAR_1);
}
