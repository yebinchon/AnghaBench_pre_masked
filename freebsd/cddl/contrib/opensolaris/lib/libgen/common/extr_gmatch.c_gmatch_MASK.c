
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int*,char const*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;

int
FUNC_3(const char *VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 wchar_t VAR_5, VAR_6;
 int VAR_7;
 wchar_t VAR_8;

 VAR_4 = VAR_2;
 VAR_7 = FUNC_1(&VAR_8, VAR_2, VAR_0);
 if (VAR_7 <= 0) {
  VAR_2++;
  VAR_5 = VAR_7;
 } else {
  VAR_5 = VAR_8;
  VAR_2 += VAR_7;
 }
 VAR_7 = FUNC_1(&VAR_8, VAR_3, VAR_0);
 if (VAR_7 < 0)
  return (0);
 if (VAR_7 == 0)
  return (VAR_5 == 0);
 VAR_3 += VAR_7;
 VAR_6 = VAR_8;

 switch (VAR_6) {
 case '[':
  if (VAR_5 <= 0)
   return (0);
 {
   int VAR_9;
   wchar_t VAR_10 = 0;
   int VAR_11 = 0;

   VAR_9 = 0;
   if (*VAR_3 == '!') {
    VAR_11 = 1;
    VAR_3++;
   }
   FUNC_0(VAR_3, VAR_6);
   do
   {
    if (VAR_6 == '-' && VAR_10 && *VAR_3 != ']') {
     FUNC_0(VAR_3, VAR_6);
     if (VAR_6 == '\\') {
      FUNC_0(VAR_3, VAR_6);
     }
     if (VAR_11) {
      if (!VAR_1 ||
          FUNC_2(VAR_10, VAR_6)) {
       if (VAR_5 < VAR_10 || VAR_5 > VAR_6)
        VAR_9++;
       else
        return (0);
      }
     } else {
      if (!VAR_1 ||
          FUNC_2(VAR_10, VAR_6))
       if (VAR_10 <= VAR_5 &&
           VAR_5 <= VAR_6)
        VAR_9++;
     }
    } else if (VAR_6 == '\\') {

     FUNC_0(VAR_3, VAR_6);
    }
    VAR_10 = VAR_6;
    if (VAR_11) {
     if (VAR_5 != VAR_10)
      VAR_9++;
     else
      return (0);
    }
    else
    {
     if (VAR_5 == VAR_10)
      VAR_9++;
    }
    FUNC_0(VAR_3, VAR_6);
   } while (VAR_6 != ']');
   return (VAR_9 ? FUNC_3(VAR_2, VAR_3) : 0);
  }

 case '\\':

  FUNC_0(VAR_3, VAR_6);

 default:
  if (VAR_6 != VAR_5)
   return (0);


 case '?':
  return (VAR_5 > 0 ? FUNC_3(VAR_2, VAR_3) : 0);

 case '*':
  while (*VAR_3 == '*')
   VAR_3++;

  if (*VAR_3 == 0)
   return (1);
  VAR_2 = VAR_4;
  while (*VAR_2) {
   if (FUNC_3(VAR_2, VAR_3))
    return (1);
   VAR_7 = FUNC_1(&VAR_8, VAR_2, VAR_0);
   if (VAR_7 < 0)

    VAR_2++;
   else
    VAR_2 += VAR_7;
  }
  return (0);
 }
}
