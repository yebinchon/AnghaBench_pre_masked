
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char* const) ;

__attribute__((used)) static size_t
FUNC_1(char * const *VAR_0)
{
 size_t VAR_1, VAR_2;

 for (VAR_2 = 0; *VAR_0; ++VAR_0)
  if ((VAR_1 = FUNC_0(*VAR_0)) > VAR_2)
   VAR_2 = VAR_1;
 return (VAR_2 + 1);
}
