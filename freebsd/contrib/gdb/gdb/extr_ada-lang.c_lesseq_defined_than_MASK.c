
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symbol {int dummy; } ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (struct symbol*) ;



 int FUNC_2 (struct symbol*) ;
 scalar_t__ FUNC_3 (struct symbol*) ;
 struct type* FUNC_4 (struct symbol*) ;
 int FUNC_5 (struct symbol*) ;
 int FUNC_6 (struct type*) ;
 int FUNC_7 (struct type*,struct type*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9 (struct symbol *VAR_0, struct symbol *VAR_1)
{
  if (VAR_0 == VAR_1)
    return 1;
  if (FUNC_3 (VAR_0) != FUNC_3 (VAR_1)
      || FUNC_2 (VAR_0) != FUNC_2 (VAR_1))
    return 0;

  switch (FUNC_2 (VAR_0))
    {
    case 128:
      return 1;
    case 129:
      {
 struct type *VAR_2 = FUNC_4 (VAR_0);
 struct type *VAR_3 = FUNC_4 (VAR_1);
 char *VAR_4 = FUNC_1 (VAR_0);
 char *VAR_5 = FUNC_1 (VAR_1);
 int VAR_6 = FUNC_8 (VAR_4);
 return
   FUNC_6 (VAR_2) == FUNC_6 (VAR_3)
   && (FUNC_7 (VAR_2, VAR_3)
       || (VAR_6 < FUNC_8 (VAR_5) && FUNC_0 (VAR_4, VAR_5, VAR_6)
    && FUNC_0 (VAR_5 + VAR_6, "___XV", 5)));
      }
    case 130:
      return FUNC_5 (VAR_0) == FUNC_5 (VAR_1)
 && FUNC_7 (FUNC_4 (VAR_0), FUNC_4 (VAR_1));
    default:
      return 0;
    }
}
