
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct dummy_systimer_pcm {int frac_period_rest; int rate; TYPE_1__ timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct dummy_systimer_pcm *VAR_1)
{
 VAR_1->timer.expires = VAR_0 +
  (VAR_1->frac_period_rest + VAR_1->rate - 1) / VAR_1->rate;
 FUNC_0(&VAR_1->timer);
}
