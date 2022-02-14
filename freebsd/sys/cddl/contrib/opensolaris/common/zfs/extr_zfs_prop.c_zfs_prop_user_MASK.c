
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char) ;

boolean_t
FUNC_2(const char *VAR_2)
{
 int VAR_3;
 char VAR_4;
 boolean_t VAR_5 = VAR_0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  VAR_4 = VAR_2[VAR_3];
  if (!FUNC_1(VAR_4))
   return (VAR_0);
  if (VAR_4 == ':')
   VAR_5 = VAR_1;
 }

 if (!VAR_5)
  return (VAR_0);

 return (VAR_1);
}
