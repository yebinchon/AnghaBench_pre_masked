
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int const) ;

int
FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{

 if (VAR_2 != 0) {
  const u_char *VAR_3 = (const u_char *)VAR_0;
  const u_char *VAR_4 = (const u_char *)VAR_1;

  do {
   if (FUNC_0(*VAR_3) != FUNC_0(*VAR_4))
    return (FUNC_0(*VAR_3) - FUNC_0(*VAR_4));
   if (*VAR_3++ == '\0')
    break;
   VAR_4++;
  } while (--VAR_2 != 0);
 }
 return (0);
}
