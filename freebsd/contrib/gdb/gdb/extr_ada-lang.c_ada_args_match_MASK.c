
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 struct type* FUNC_1 (struct symbol*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (struct value*) ;
 int FUNC_6 (int ,int ,int) ;
 struct type* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8 (struct symbol *VAR_3, struct value **VAR_4, int VAR_5)
{
  int VAR_6;
  struct type *VAR_7 = FUNC_1 (VAR_3);

  if (FUNC_0 (VAR_3) == VAR_0 &&
      FUNC_2 (VAR_7) == VAR_1)
    return (VAR_5 == 0);
  else if (VAR_7 == ((void*)0) || FUNC_2 (VAR_7) != VAR_2)
    return 0;

  if (FUNC_4 (VAR_7) != VAR_5)
    return 0;

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6 += 1)
    {
      struct type *VAR_8 = FUNC_7 (FUNC_3 (VAR_7, VAR_6));
      struct type *VAR_9 = FUNC_7 (FUNC_5 (VAR_4[VAR_6]));

      if (!FUNC_6 (FUNC_3 (VAR_7, VAR_6),
      FUNC_5 (VAR_4[VAR_6]), 1))
 return 0;
    }
  return 1;
}
