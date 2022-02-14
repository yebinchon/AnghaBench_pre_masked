
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char**,char const*,int ) ;

int
FUNC_3(char ** __restrict VAR_0, const char * __restrict VAR_1, va_list VAR_2)
{
 int VAR_3;
 if ((VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2)) == -1)
  FUNC_0)(1, "Cannot format string");
 return VAR_3;
}
