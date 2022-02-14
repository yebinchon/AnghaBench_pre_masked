
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;
 const unsigned char *VAR_4, *VAR_5;

 VAR_4 = (const unsigned char *) VAR_1;
 VAR_5 = (const unsigned char *) VAR_0;

 for (; (VAR_3 = *VAR_5) && (VAR_2 = *VAR_4); VAR_5++, VAR_4++) {

  if ((VAR_3 == ' ' || VAR_3 == '_' || VAR_3 == '-' || VAR_3 == '.') &&
      (VAR_2 == ' ' || VAR_2 == '_' || VAR_2 == '-' || VAR_2 == '.'))
   continue;

  if (FUNC_0(VAR_3) == FUNC_0(VAR_2))
   continue;


  return (0);
 }

 if (*VAR_5 == '\0' && *VAR_4 == '\0')
  return (1);

 return (0);
}
