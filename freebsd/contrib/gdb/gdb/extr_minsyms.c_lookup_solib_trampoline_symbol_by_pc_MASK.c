
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

struct minimal_symbol *
FUNC_2 (CORE_ADDR VAR_1)
{
  struct minimal_symbol *VAR_2 = FUNC_1 (VAR_1);

  if (VAR_2 != ((void*)0) && FUNC_0 (VAR_2) == VAR_0)
    return VAR_2;
  return ((void*)0);
}
