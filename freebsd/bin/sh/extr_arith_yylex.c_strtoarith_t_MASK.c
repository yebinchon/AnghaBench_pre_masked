
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arith_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char const*,char**,int ) ;
 int FUNC_2 (char const*,char**,int ) ;

arith_t
FUNC_3(const char *restrict VAR_4, char **restrict VAR_5)
{
 arith_t VAR_6;

 while (FUNC_0((unsigned char)*VAR_4))
  VAR_4++;
 switch (*VAR_4) {
  case '-':
   return FUNC_1(VAR_4, VAR_5, 0);
  case '0':
   return (arith_t)FUNC_2(VAR_4, VAR_5, 0);
  default:
   VAR_6 = (arith_t)FUNC_2(VAR_4, VAR_5, 0);
   if (VAR_6 >= 0)
    return VAR_6;
   else if (VAR_6 == VAR_1) {
    VAR_3 = VAR_2;
    return VAR_1;
   } else {
    VAR_3 = VAR_2;
    return VAR_0;
   }
 }
}
