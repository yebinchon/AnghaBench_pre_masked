
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {char* cur; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cpp_demangle_data*,long) ;
 scalar_t__ VAR_0 ;
 long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_3(struct cpp_demangle_data *VAR_1)
{
 long VAR_2;

 if (VAR_1 == ((void*)0) || *VAR_1->cur != 'T')
  return (0);

 ++VAR_1->cur;

 if (*VAR_1->cur == '_')
  return (FUNC_1(VAR_1, 0));
 else {

  VAR_0 = 0;
  if ((VAR_2 = FUNC_2(VAR_1->cur, (char **) ((void*)0), 36)) == 0 &&
      VAR_0 != 0)
   return (0);


  ++VAR_2;

  while (*VAR_1->cur != '_')
   ++VAR_1->cur;

  FUNC_0(VAR_2 > 0);

  return (FUNC_1(VAR_1, VAR_2));
 }


 return (0);
}
