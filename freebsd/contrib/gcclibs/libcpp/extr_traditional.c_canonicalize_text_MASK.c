
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uchar ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static size_t
FUNC_1 (uchar *VAR_0, const uchar *VAR_1, size_t VAR_2, uchar *VAR_3)
{
  uchar *VAR_4 = VAR_0;
  uchar VAR_5 = *VAR_3;

  while (VAR_2)
    {
      if (FUNC_0 (*VAR_1) && !VAR_5)
 {
   do
     VAR_1++, VAR_2--;
   while (VAR_2 && FUNC_0 (*VAR_1));
   *VAR_0++ = ' ';
 }
      else
 {
   if (*VAR_1 == '\'' || *VAR_1 == '"')
     {
       if (!VAR_5)
  VAR_5 = *VAR_1;
       else if (VAR_5 == *VAR_1)
  VAR_5 = 0;
     }
   *VAR_0++ = *VAR_1++, VAR_2--;
 }
    }

  *VAR_3 = VAR_5;
  return VAR_0 - VAR_4;
}
