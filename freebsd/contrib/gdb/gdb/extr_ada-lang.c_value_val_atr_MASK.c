
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 long FUNC_1 (struct type*,long) ;
 long FUNC_2 (struct type*) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 long FUNC_7 (struct value*) ;
 struct value* FUNC_8 (struct type*,long) ;

__attribute__((used)) static struct value *
FUNC_9 (struct type *VAR_1, struct value *VAR_2)
{
  if (!FUNC_4 (VAR_1))
    FUNC_5 ("'VAL only defined on discrete types");
  if (!FUNC_6 (FUNC_3 (VAR_2)))
    FUNC_5 ("'VAL requires integral argument");

  if (FUNC_0 (VAR_1) == VAR_0)
    {
      long VAR_3 = FUNC_7 (VAR_2);
      if (VAR_3 < 0 || VAR_3 >= FUNC_2 (VAR_1))
 FUNC_5 ("argument to 'VAL out of range");
      return FUNC_8 (VAR_1, FUNC_1 (VAR_1, VAR_3));
    }
  else
    return FUNC_8 (VAR_1, FUNC_7 (VAR_2));
}
