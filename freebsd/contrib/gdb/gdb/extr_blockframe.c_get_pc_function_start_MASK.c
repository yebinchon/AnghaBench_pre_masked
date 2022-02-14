
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct block {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct block*) ;
 struct block* FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct minimal_symbol*) ;
 struct block* FUNC_3 (int ) ;
 struct symbol* FUNC_4 (struct block*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct minimal_symbol* FUNC_6 (int ) ;

CORE_ADDR
FUNC_7 (CORE_ADDR VAR_0)
{
  struct block *VAR_1;
  struct minimal_symbol *VAR_2;

  VAR_1 = FUNC_3 (VAR_0);
  if (VAR_1)
    {
      struct symbol *VAR_3 = FUNC_4 (VAR_1);

      if (VAR_3)
 {
   VAR_1 = FUNC_1 (VAR_3);
   return FUNC_0 (VAR_1);
 }
    }

  VAR_2 = FUNC_6 (VAR_0);
  if (VAR_2)
    {
      CORE_ADDR VAR_4 = FUNC_2 (VAR_2);

      if (FUNC_5 (VAR_4))
 return VAR_4;
    }

  return 0;
}
