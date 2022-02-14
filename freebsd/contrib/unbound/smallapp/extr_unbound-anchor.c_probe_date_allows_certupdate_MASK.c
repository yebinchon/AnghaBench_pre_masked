
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(const char* VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 int32_t VAR_3 = FUNC_2(VAR_1);
 int32_t VAR_4 = (int32_t)FUNC_3(((void*)0));
 int32_t VAR_5 = 30 * 24 * 3600;


 if(FUNC_3(((void*)0)) < FUNC_4("2010-07-15T00:00:00")) {
  if(VAR_0) FUNC_0("the date is before the root was first signed,"
   " please correct the clock\n");
  return 0;
 }
 if(VAR_3 == 0)
  return 1;
 if(VAR_2)
  return 1;





 if(VAR_4 - VAR_3 < 0) {
  if(VAR_0) FUNC_0("the last successful probe is in the future,"
   " clock was modified\n");
  return 0;
 }
 if(VAR_4 - VAR_3 >= VAR_5) {
  if(VAR_0) FUNC_0("the last successful probe was more than 30 "
   "days ago\n");
  return 1;
 }
 if(VAR_0) FUNC_0("the last successful probe is recent\n");
 return 0;
}
