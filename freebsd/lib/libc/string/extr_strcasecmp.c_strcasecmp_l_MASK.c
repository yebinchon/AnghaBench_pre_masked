
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int locale_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const,int ) ;

int
FUNC_2(const char *VAR_0, const char *VAR_1, locale_t VAR_2)
{
 const u_char
   *VAR_3 = (const u_char *)VAR_0,
   *VAR_4 = (const u_char *)VAR_1;
 FUNC_0(VAR_2);

 while (FUNC_1(*VAR_3, VAR_2) == FUNC_1(*VAR_4++, VAR_2))
  if (*VAR_3++ == '\0')
   return (0);
 return (FUNC_1(*VAR_3, VAR_2) - FUNC_1(*--VAR_4, VAR_2));
}
