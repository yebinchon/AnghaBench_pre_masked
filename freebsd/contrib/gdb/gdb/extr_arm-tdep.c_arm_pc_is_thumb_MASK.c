
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_2 (int ) ;

int
FUNC_3 (CORE_ADDR VAR_0)
{
  struct minimal_symbol *VAR_1;


  if (FUNC_0 (VAR_0))
    return 1;


  VAR_1 = FUNC_2 (VAR_0);
  if (VAR_1)
    {
      return (FUNC_1 (VAR_1));
    }
  else
    {
      return 0;
    }
}
