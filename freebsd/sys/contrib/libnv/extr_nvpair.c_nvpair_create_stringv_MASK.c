
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int nvpair_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char const*,int ) ;
 int * FUNC_2 (char const*,char*) ;

nvpair_t *
FUNC_3(const char *VAR_0, const char *VAR_1, va_list VAR_2)
{
 nvpair_t *VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_4, VAR_1, VAR_2);
 if (VAR_5 < 0)
  return (((void*)0));
 VAR_3 = FUNC_2(VAR_0, VAR_4);
 FUNC_0(VAR_4);
 return (VAR_3);
}
