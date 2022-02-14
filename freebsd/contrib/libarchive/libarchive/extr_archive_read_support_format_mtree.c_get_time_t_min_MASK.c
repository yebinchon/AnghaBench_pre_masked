
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int64_t
FUNC_0(void)
{



 if (((time_t)0) < ((time_t)-1)) {

  return (time_t)0;
 } else {

  if (sizeof(time_t) == sizeof(int64_t)) {
   return (time_t)VAR_1;
  } else {
   return (time_t)VAR_0;
  }
 }

}
