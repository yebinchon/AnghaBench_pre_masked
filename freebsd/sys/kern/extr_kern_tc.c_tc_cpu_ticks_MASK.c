
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct timecounter {unsigned int (* tc_get_timecount ) (struct timecounter*) ;unsigned int tc_counter_mask; } ;
struct TYPE_2__ {struct timecounter* th_counter; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (struct timecounter*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static uint64_t
FUNC_4(void)
{
 struct timecounter *VAR_3;
 uint64_t VAR_4, *VAR_5;
 unsigned VAR_6, *VAR_7;

 FUNC_1();
 VAR_5 = FUNC_0(VAR_0);
 VAR_7 = FUNC_0(VAR_1);
 VAR_3 = VAR_2->th_counter;
 VAR_6 = VAR_3->tc_get_timecount(VAR_3) & VAR_3->tc_counter_mask;
 if (VAR_6 < *VAR_7)
  *VAR_5 += (uint64_t)VAR_3->tc_counter_mask + 1;
 *VAR_7 = VAR_6;
 VAR_4 = VAR_6 + *VAR_5;
 FUNC_2();
 return (VAR_4);
}
