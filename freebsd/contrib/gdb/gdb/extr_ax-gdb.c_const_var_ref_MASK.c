
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
typedef int LONGEST ;
typedef int CORE_ADDR ;




 int FUNC_0 (struct symbol*) ;
 struct type* FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct symbol*) ;
 int FUNC_3 (struct symbol*) ;
 struct value* FUNC_4 (struct type*,int ) ;
 struct value* FUNC_5 (struct type*,int ) ;

__attribute__((used)) static struct value *
FUNC_6 (struct symbol *VAR_0)
{
  struct type *VAR_1 = FUNC_1 (VAR_0);

  switch (FUNC_0 (VAR_0))
    {
    case 129:
      return FUNC_4 (VAR_1, (LONGEST) FUNC_2 (VAR_0));

    case 128:
      return FUNC_5 (VAR_1, (CORE_ADDR) FUNC_3 (VAR_0));

    default:
      return 0;
    }
}
