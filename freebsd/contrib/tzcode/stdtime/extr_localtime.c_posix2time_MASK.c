
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 () ;

time_t
FUNC_2(time_t VAR_0)
{
 time_t VAR_1;
 time_t VAR_2;

 FUNC_1();






 VAR_1 = VAR_0 + FUNC_0(&VAR_0);
 VAR_2 = VAR_1 - FUNC_0(&VAR_1);
 if (VAR_2 < VAR_0) {
  do {
   VAR_1++;
   VAR_2 = VAR_1 - FUNC_0(&VAR_1);
  } while (VAR_2 < VAR_0);
  if (VAR_0 != VAR_2)
   return VAR_1 - 1;
 } else if (VAR_2 > VAR_0) {
  do {
   --VAR_1;
   VAR_2 = VAR_1 - FUNC_0(&VAR_1);
  } while (VAR_2 > VAR_0);
  if (VAR_0 != VAR_2)
   return VAR_1 + 1;
 }
 return VAR_1;
}
