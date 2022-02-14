
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(const u_char *VAR_3, u_char *VAR_4, size_t VAR_5)
{
 const u_char *VAR_6;
 u_char *VAR_7, *VAR_8;
 u_char VAR_9;
 u_int VAR_10;
 int VAR_11;

 VAR_6 = VAR_3;
 VAR_7 = VAR_4;
 VAR_8 = VAR_4 + VAR_5;

 if (VAR_7 >= VAR_8) {
  VAR_2 = VAR_0;
  return (-1);
 }
 while ((VAR_10 = *VAR_6++) != 0) {
  if ((VAR_10 & VAR_1) == VAR_1) {

   VAR_2 = VAR_0;
   return (-1);
  }
  *VAR_7++ = VAR_10;
  if ((VAR_11 = FUNC_2(VAR_6 - 1)) < 0) {
   VAR_2 = VAR_0;
   return (-1);
  }
  if (VAR_7 + VAR_11 >= VAR_8) {
   VAR_2 = VAR_0;
   return (-1);
  }
  for ((void)((void*)0); VAR_11 > 0; VAR_11--) {
   VAR_9 = *VAR_6++;
   if (FUNC_0(VAR_9) && FUNC_1(VAR_9))
    *VAR_7++ = FUNC_3(VAR_9);
   else
    *VAR_7++ = VAR_9;
  }
 }
 *VAR_7++ = '\0';
 return (VAR_7 - VAR_4);
}
