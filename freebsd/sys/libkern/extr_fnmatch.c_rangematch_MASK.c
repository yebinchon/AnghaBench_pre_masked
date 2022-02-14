
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char FUNC_0 (unsigned char) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_7, char VAR_8, int VAR_9, char **VAR_10)
{
 int VAR_11, VAR_12;
 char VAR_13, VAR_14;
 if ( (VAR_11 = (*VAR_7 == '!' || *VAR_7 == '^')) )
  ++VAR_7;

 if (VAR_9 & VAR_1)
  VAR_8 = FUNC_0((unsigned char)VAR_8);






 VAR_12 = 0;
 VAR_13 = *VAR_7++;
 do {
  if (VAR_13 == '\\' && !(VAR_9 & VAR_2))
   VAR_13 = *VAR_7++;
  if (VAR_13 == VAR_0)
   return (VAR_4);

  if (VAR_13 == '/' && (VAR_9 & VAR_3))
   return (VAR_6);

  if (VAR_9 & VAR_1)
   VAR_13 = FUNC_0((unsigned char)VAR_13);

  if (*VAR_7 == '-'
      && (VAR_14 = *(VAR_7+1)) != VAR_0 && VAR_14 != ']') {
   VAR_7 += 2;
   if (VAR_14 == '\\' && !(VAR_9 & VAR_2))
    VAR_14 = *VAR_7++;
   if (VAR_14 == VAR_0)
    return (VAR_4);

   if (VAR_9 & VAR_1)
    VAR_14 = FUNC_0((unsigned char)VAR_14);

   if (VAR_13 <= VAR_8 && VAR_8 <= VAR_14)
    VAR_12 = 1;
  } else if (VAR_13 == VAR_8)
   VAR_12 = 1;
 } while ((VAR_13 = *VAR_7++) != ']');

 *VAR_10 = (char *)(uintptr_t)VAR_7;
 return (VAR_12 == VAR_11 ? VAR_6 : VAR_5);
}
