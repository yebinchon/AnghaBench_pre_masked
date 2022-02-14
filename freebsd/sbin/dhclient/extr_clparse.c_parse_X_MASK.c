
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (char**,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,int *) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (char*) ;

unsigned
FUNC_7(FILE *VAR_4, u_int8_t *VAR_5, unsigned VAR_6)
{
 int VAR_7;
 char *VAR_8;
 unsigned VAR_9;

 VAR_7 = FUNC_4(&VAR_8, VAR_4);
 if (VAR_7 == VAR_2 || VAR_7 == VAR_1) {
  VAR_9 = 0;
  do {
   VAR_7 = FUNC_2(&VAR_8, VAR_4);
   if (VAR_7 != VAR_1 && VAR_7 != VAR_2) {
    FUNC_3("expecting hexadecimal constant.");
    FUNC_5(VAR_4);
    return (0);
   }
   FUNC_0(&VAR_5[VAR_9], VAR_8, 16, 8);
   if (VAR_9++ > VAR_6) {
    FUNC_3("hexadecimal constant too long.");
    FUNC_5(VAR_4);
    return (0);
   }
   VAR_7 = FUNC_4(&VAR_8, VAR_4);
   if (VAR_7 == VAR_0)
    VAR_7 = FUNC_2(&VAR_8, VAR_4);
  } while (VAR_7 == VAR_0);
  VAR_8 = (char *)VAR_5;
 } else if (VAR_7 == VAR_3) {
  VAR_7 = FUNC_2(&VAR_8, VAR_4);
  VAR_9 = FUNC_6(VAR_8);
  if (VAR_9 + 1 > VAR_6) {
   FUNC_3("string constant too long.");
   FUNC_5(VAR_4);
   return (0);
  }
  FUNC_1(VAR_5, VAR_8, VAR_9 + 1);
 } else {
  FUNC_3("expecting string or hexadecimal data");
  FUNC_5(VAR_4);
  return (0);
 }
 return (VAR_9);
}
