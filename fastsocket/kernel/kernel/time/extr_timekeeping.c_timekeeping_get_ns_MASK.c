
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clocksource {int (* read ) (struct clocksource*) ;int cycle_last; int mask; } ;
typedef int s64 ;
typedef int cycle_t ;
struct TYPE_2__ {int shift; int mult; struct clocksource* clock; } ;


 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct clocksource*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline s64 FUNC_2(void)
{
 cycle_t VAR_1, VAR_2;
 struct clocksource *VAR_3;


 VAR_3 = VAR_0.clock;
 VAR_1 = VAR_3->read(VAR_3);


 VAR_2 = (VAR_1 - VAR_3->cycle_last) & VAR_3->mask;


 return FUNC_0(VAR_2, VAR_0.mult,
      VAR_0.shift);
}
