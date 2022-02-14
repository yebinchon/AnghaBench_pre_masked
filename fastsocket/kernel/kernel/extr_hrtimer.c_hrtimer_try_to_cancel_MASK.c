
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_clock_base {int dummy; } ;
struct hrtimer {int dummy; } ;


 int FUNC_0 (struct hrtimer*) ;
 struct hrtimer_clock_base* FUNC_1 (struct hrtimer*,unsigned long*) ;
 int FUNC_2 (struct hrtimer*,struct hrtimer_clock_base*) ;
 int FUNC_3 (struct hrtimer*,unsigned long*) ;

int FUNC_4(struct hrtimer *VAR_0)
{
 struct hrtimer_clock_base *VAR_1;
 unsigned long VAR_2;
 int VAR_3 = -1;

 VAR_1 = FUNC_1(VAR_0, &VAR_2);

 if (!FUNC_0(VAR_0))
  VAR_3 = FUNC_2(VAR_0, VAR_1);

 FUNC_3(VAR_0, &VAR_2);

 return VAR_3;

}
