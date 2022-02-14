
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;



size_t
FUNC_0(const u_char *VAR_0, size_t VAR_1)
{
 for (VAR_0 += VAR_1; VAR_1 > 0; VAR_1--)
  if (*--VAR_0 != ' ' && *VAR_0 != '.')
   break;
 return VAR_1;
}
