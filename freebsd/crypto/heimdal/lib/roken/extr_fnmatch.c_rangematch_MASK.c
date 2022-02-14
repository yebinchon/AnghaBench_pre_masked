
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(const char *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 char VAR_7, VAR_8;
 if ((VAR_5 = (*VAR_2 == '!' || *VAR_2 == '^')))
  ++VAR_2;

 for (VAR_6 = 0; (VAR_7 = *VAR_2++) != ']';) {
  if (VAR_7 == '\\' && !(VAR_4 & VAR_1))
   VAR_7 = *VAR_2++;
  if (VAR_7 == VAR_0)
   return (((void*)0));
  if (*VAR_2 == '-'
      && (VAR_8 = *(VAR_2+1)) != VAR_0 && VAR_8 != ']') {
   VAR_2 += 2;
   if (VAR_8 == '\\' && !(VAR_4 & VAR_1))
    VAR_8 = *VAR_2++;
   if (VAR_8 == VAR_0)
    return (((void*)0));
   if (VAR_7 <= VAR_3 && VAR_3 <= VAR_8)
    VAR_6 = 1;
  } else if (VAR_7 == VAR_3)
   VAR_6 = 1;
 }
 return (VAR_6 == VAR_5 ? ((void*)0) : VAR_2);
}
