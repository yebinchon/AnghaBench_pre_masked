
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;



int
FUNC_0(uuid_t *VAR_0)
{
 int VAR_1;
 char *VAR_2 = (char *)VAR_0;

 if (VAR_0 == ((void*)0))
  return 0;

 for (VAR_1 = 0; VAR_1 < sizeof *VAR_0; VAR_1++)
  if (*VAR_2++) return 0;
 return 1;
}
