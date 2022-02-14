
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clocksource {scalar_t__ (* enable ) (struct clocksource*) ;int (* disable ) (struct clocksource*) ;} ;
struct TYPE_2__ {int lock; struct clocksource* clock; } ;


 scalar_t__ FUNC_0 (struct clocksource*) ;
 int FUNC_1 (struct clocksource*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct clocksource*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(void *VAR_1)
{
 struct clocksource *VAR_2, *VAR_3;
 unsigned long VAR_4;

 VAR_2 = (struct clocksource *) VAR_1;

 FUNC_5(&VAR_0.lock, VAR_4);

 FUNC_3();
 if (!VAR_2->enable || VAR_2->enable(VAR_2) == 0) {
  VAR_3 = VAR_0.clock;
  FUNC_2(VAR_2);
  if (VAR_3->disable)
   VAR_3->disable(VAR_3);
 }
 FUNC_4(1);

 FUNC_6(&VAR_0.lock, VAR_4);

 return 0;
}
