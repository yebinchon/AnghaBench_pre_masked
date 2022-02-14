
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hrtimer_clock_base {TYPE_1__* cpu_base; } ;
struct hrtimer {struct hrtimer_clock_base* base; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static inline struct hrtimer_clock_base *
FUNC_1(const struct hrtimer *VAR_0, unsigned long *VAR_1)
{
 struct hrtimer_clock_base *VAR_2 = VAR_0->base;

 FUNC_0(&VAR_2->cpu_base->lock, *VAR_1);

 return VAR_2;
}
