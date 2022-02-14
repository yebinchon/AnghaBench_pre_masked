
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;


 int VAR_0 ;

__attribute__((used)) static time_t
FUNC_0(uint64_t VAR_1, long *VAR_2)
{


 if (VAR_1 >= FUNC_0(116444736000000000)) {
  VAR_1 -= FUNC_0(116444736000000000);
  if (VAR_2 != ((void*)0))
   *VAR_2 = (long)(VAR_1 % 10000000) * 100;
  return (VAR_1 / 10000000);
 } else {
  if (VAR_2 != ((void*)0))
   *VAR_2 = 0;
  return (0);
 }
}
