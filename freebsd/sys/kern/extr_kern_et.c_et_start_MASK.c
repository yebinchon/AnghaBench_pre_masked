
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {int et_flags; scalar_t__ et_min_period; scalar_t__ et_max_period; int (* et_start ) (struct eventtimer*,scalar_t__,scalar_t__) ;int et_active; } ;
typedef scalar_t__ sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct eventtimer*,scalar_t__,scalar_t__) ;

int
FUNC_2(struct eventtimer *VAR_3, sbintime_t VAR_4, sbintime_t VAR_5)
{

 if (!VAR_3->et_active)
  return (VAR_0);
 FUNC_0(VAR_5 >= 0, ("et_start: negative period"));
 FUNC_0((VAR_3->et_flags & VAR_2) || VAR_5 == 0,
  ("et_start: period specified for oneshot-only timer"));
 FUNC_0((VAR_3->et_flags & VAR_1) || VAR_5 != 0,
  ("et_start: period not specified for periodic-only timer"));
 if (VAR_5 != 0) {
  if (VAR_5 < VAR_3->et_min_period)
          VAR_5 = VAR_3->et_min_period;
  else if (VAR_5 > VAR_3->et_max_period)
          VAR_5 = VAR_3->et_max_period;
 }
 if (VAR_5 == 0 || VAR_4 != 0) {
  if (VAR_4 < VAR_3->et_min_period)
          VAR_4 = VAR_3->et_min_period;
  else if (VAR_4 > VAR_3->et_max_period)
          VAR_4 = VAR_3->et_max_period;
 }
 return (VAR_3->et_start(VAR_3, VAR_4, VAR_5));
}
