
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clktype {int code; char const* abbrev; } ;


 struct clktype* VAR_0 ;

const char *
FUNC_0(
 int VAR_1
 )
{
 register struct clktype *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->code != -1; VAR_2++) {
  if (VAR_1 == VAR_2->code)
   return (VAR_2->abbrev);
 }
 return (((void*)0));
}
