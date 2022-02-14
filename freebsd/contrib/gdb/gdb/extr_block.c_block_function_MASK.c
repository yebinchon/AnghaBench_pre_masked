
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct block {int dummy; } ;


 struct symbol* FUNC_0 (struct block const*) ;
 struct block* FUNC_1 (struct block const*) ;

struct symbol *
FUNC_2 (const struct block *VAR_0)
{
  while (FUNC_0 (VAR_0) == 0 && FUNC_1 (VAR_0) != 0)
    VAR_0 = FUNC_1 (VAR_0);

  return FUNC_0 (VAR_0);
}
