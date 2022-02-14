
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timehands {int th_offset_count; struct timecounter* th_counter; } ;
struct timecounter {int (* tc_get_timecount ) (struct timecounter*) ;int tc_counter_mask; } ;


 int FUNC_0 (struct timecounter*) ;

__attribute__((used)) static __inline u_int
FUNC_1(struct timehands *VAR_0)
{
 struct timecounter *VAR_1;

 VAR_1 = VAR_0->th_counter;
 return ((VAR_1->tc_get_timecount(VAR_1) - VAR_0->th_offset_count) &
     VAR_1->tc_counter_mask);
}
