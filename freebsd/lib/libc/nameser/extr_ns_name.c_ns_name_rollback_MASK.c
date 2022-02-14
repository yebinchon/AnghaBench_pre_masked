
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



void
FUNC_0(const u_char *VAR_0, const u_char **VAR_1,
   const u_char **VAR_2)
{
 while (VAR_1 < VAR_2 && *VAR_1 != ((void*)0)) {
  if (*VAR_1 >= VAR_0) {
   *VAR_1 = ((void*)0);
   break;
  }
  VAR_1++;
 }
}
