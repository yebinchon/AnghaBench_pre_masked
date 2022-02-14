
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int line; } ;
struct symbol {int dummy; } ;


 struct symtab_and_line FUNC_0 (struct symbol*,int ) ;

__attribute__((used)) static int
FUNC_1 (struct symbol *VAR_0, int VAR_1)
{
  struct symtab_and_line VAR_2;

  if (VAR_0 == ((void*)0))
    return 0;

  VAR_2 = FUNC_0 (VAR_0, 0);

  return (VAR_2.line != 0 && VAR_1 >= VAR_2.line);
}
