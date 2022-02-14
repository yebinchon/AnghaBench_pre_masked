
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(const char **VAR_4, char *VAR_5)
{
 size_t VAR_6;

 *VAR_4 += FUNC_3(*VAR_4, " \t");
 if (**VAR_4 == 0)
  return (VAR_0);


 if (**VAR_4 == ',' || **VAR_4 == '=')
  return (*((*VAR_4)++));


 if (**VAR_4 == '"') {
  *VAR_4 = FUNC_0(++*VAR_4, VAR_5);
  if (*VAR_4 == ((void*)0))
   return (VAR_1);
  return (VAR_2);
 }


 VAR_6 = FUNC_2(*VAR_4, " \t,=");
 FUNC_1(VAR_5, *VAR_4, VAR_6);
 VAR_5[VAR_6] = 0;
 *VAR_4 += VAR_6;
 return (VAR_3);
}
