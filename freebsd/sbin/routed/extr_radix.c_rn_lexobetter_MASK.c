
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, void *VAR_1)
{
 u_char *VAR_2 = VAR_0, *VAR_3 = VAR_1, *VAR_4;

 if (*VAR_2 > *VAR_3)
  return 1;
 if (*VAR_2 == *VAR_3)
  for (VAR_4 = VAR_2 + *VAR_2; VAR_2 < VAR_4;)
   if (*VAR_2++ > *VAR_3++)
    return 1;
 return 0;
}
