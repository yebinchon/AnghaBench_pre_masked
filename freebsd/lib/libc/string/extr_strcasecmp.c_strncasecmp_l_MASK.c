
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int locale_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const,int ) ;

int
FUNC_2(const char *VAR_0, const char *VAR_1, size_t VAR_2, locale_t VAR_3)
{
 FUNC_0(VAR_3);
 if (VAR_2 != 0) {
  const u_char
    *VAR_4 = (const u_char *)VAR_0,
    *VAR_5 = (const u_char *)VAR_1;

  do {
   if (FUNC_1(*VAR_4, VAR_3) != FUNC_1(*VAR_5++, VAR_3))
    return (FUNC_1(*VAR_4, VAR_3) - FUNC_1(*--VAR_5, VAR_3));
   if (*VAR_4++ == '\0')
    break;
  } while (--VAR_2 != 0);
 }
 return (0);
}
