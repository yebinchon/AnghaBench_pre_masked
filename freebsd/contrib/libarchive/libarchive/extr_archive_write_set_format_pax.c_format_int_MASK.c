
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef scalar_t__ INT64_MAX ;


 int VAR_0 ;

__attribute__((used)) static char *
FUNC_0(char *VAR_1, int64_t VAR_2)
{
 uint64_t VAR_3;

 if (VAR_2 < 0)
  VAR_3 = (VAR_2 == VAR_0) ? (uint64_t)(INT64_MAX) + 1 : (uint64_t)(-VAR_2);
 else
  VAR_3 = VAR_2;

 do {
  *--VAR_1 = "0123456789"[VAR_3 % 10];
 } while (VAR_3 /= 10);
 if (VAR_2 < 0)
  *--VAR_1 = '-';
 return (VAR_1);
}
