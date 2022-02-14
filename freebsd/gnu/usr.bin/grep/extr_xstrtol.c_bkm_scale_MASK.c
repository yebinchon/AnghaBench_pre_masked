
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __strtol_t ;



__attribute__((used)) static int
FUNC_0 (__strtol_t *VAR_0, int VAR_1)
{
  __strtol_t VAR_2 = *VAR_0 * VAR_1;
  if (*VAR_0 != VAR_2 / VAR_1)
    return 1;
  *VAR_0 = VAR_2;
  return 0;
}
