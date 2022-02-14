
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int intmax_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(time_t VAR_1)
{
 if (VAR_1 > VAR_0) {
  FUNC_0(2, ("Set ve_utc=%jd\n", (intmax_t)VAR_1));
  VAR_0 = VAR_1;
 }
}
