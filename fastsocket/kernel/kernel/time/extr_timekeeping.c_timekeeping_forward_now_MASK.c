
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clocksource {int (* read ) (struct clocksource*) ;int cycle_last; int mask; int shift; int mult; } ;
typedef int s64 ;
typedef int cycle_t ;
struct TYPE_2__ {int raw_time; int xtime; int shift; int mult; struct clocksource* clock; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct clocksource*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 cycle_t VAR_1, VAR_2;
 struct clocksource *VAR_3;
 s64 VAR_4;

 VAR_3 = VAR_0.clock;
 VAR_1 = VAR_3->read(VAR_3);
 VAR_2 = (VAR_1 - VAR_3->cycle_last) & VAR_3->mask;
 VAR_3->cycle_last = VAR_1;

 VAR_4 = FUNC_1(VAR_2, VAR_0.mult,
      VAR_0.shift);


 VAR_4 += FUNC_0();

 FUNC_3(&VAR_0.xtime, VAR_4);

 VAR_4 = FUNC_1(VAR_2, VAR_3->mult, VAR_3->shift);
 FUNC_3(&VAR_0.raw_time, VAR_4);
}
