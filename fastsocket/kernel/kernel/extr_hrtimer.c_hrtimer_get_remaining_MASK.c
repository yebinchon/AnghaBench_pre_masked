
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_clock_base {int dummy; } ;
struct hrtimer {int dummy; } ;
typedef int ktime_t ;


 int FUNC_0 (struct hrtimer const*) ;
 struct hrtimer_clock_base* FUNC_1 (struct hrtimer const*,unsigned long*) ;
 int FUNC_2 (struct hrtimer const*,unsigned long*) ;

ktime_t FUNC_3(const struct hrtimer *VAR_0)
{
 struct hrtimer_clock_base *VAR_1;
 unsigned long VAR_2;
 ktime_t VAR_3;

 VAR_1 = FUNC_1(VAR_0, &VAR_2);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(VAR_0, &VAR_2);

 return VAR_3;
}
