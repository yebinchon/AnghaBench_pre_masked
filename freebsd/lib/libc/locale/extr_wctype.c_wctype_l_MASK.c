
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wctype_t ;
typedef int locale_t ;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

wctype_t
FUNC_2(const char *VAR_0, locale_t VAR_1)
{
 const char *VAR_2 =
  "alnum\0"
  "alpha\0"
  "blank\0"
  "cntrl\0"
  "digit\0"
  "graph\0"
  "lower\0"
  "print\0"
  "punct\0"
  "space\0"
  "upper\0"
  "xdigit\0"
  "ideogram\0"
  "special\0"
  "phonogram\0"
  "number\0"
  "rune\0";
 static const wctype_t VAR_3[] = {
  142|135,
  142,
  141,
  140,
  139,
  138,
  136,
  132,
  134,
  131,
  129,
  128,
  137,
  130,
  133,
  135,
  0xFFFFFF00L
 };
 size_t VAR_4, VAR_5;
 const char *VAR_6;
 const wctype_t *VAR_7;

 VAR_4 = FUNC_1(VAR_0);
 VAR_7 = VAR_3;
 for (VAR_6 = VAR_2; (VAR_5 = FUNC_1(VAR_6)) != 0; VAR_6 += VAR_5 + 1) {
  if (VAR_4 == VAR_5 && FUNC_0(VAR_0, VAR_6, VAR_4) == 0)
   return (*VAR_7);
  VAR_7++;
 }

 return (0UL);
}
