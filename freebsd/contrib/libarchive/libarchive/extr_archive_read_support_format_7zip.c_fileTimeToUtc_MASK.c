
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ time_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(uint64_t VAR_1, time_t *VAR_2, long *VAR_3)
{

 if (VAR_1 >= VAR_0) {
  VAR_1 -= VAR_0;

  *VAR_2 = (time_t)(VAR_1 / 10000000);

  *VAR_3 = (long)(VAR_1 % 10000000) * 100;
 } else {
  *VAR_2 = 0;
  *VAR_3 = 0;
 }
}
