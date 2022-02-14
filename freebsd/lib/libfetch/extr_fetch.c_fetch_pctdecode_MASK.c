
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static const char *
FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;
 char VAR_5;
 const char *VAR_6;

 for (VAR_6 = VAR_1; *VAR_6 != '\0' && *VAR_6 != '@' && *VAR_6 != ':'; VAR_6++) {
  if (VAR_6[0] == '%' && (VAR_3 = FUNC_0(VAR_6[1])) >= 0 &&
      (VAR_4 = FUNC_0(VAR_6[2])) >= 0 && (VAR_3 > 0 || VAR_4 > 0)) {
   VAR_5 = VAR_3 << 4 | VAR_4;
   VAR_6 += 2;
  } else {
   VAR_5 = *VAR_6;
  }
  if (VAR_2-- > 0)
   *VAR_0++ = VAR_5;
 }
 return (VAR_6);
}
