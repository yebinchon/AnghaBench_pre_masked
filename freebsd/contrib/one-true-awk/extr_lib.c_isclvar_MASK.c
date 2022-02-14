
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uschar ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(const char *VAR_0)
{
 const char *VAR_1 = VAR_0;

 if (!FUNC_1((uschar) *VAR_0) && *VAR_0 != '_')
  return 0;
 for ( ; *VAR_0; VAR_0++)
  if (!(FUNC_0((uschar) *VAR_0) || *VAR_0 == '_'))
   break;
 return *VAR_0 == '=' && VAR_0 > VAR_1;
}
