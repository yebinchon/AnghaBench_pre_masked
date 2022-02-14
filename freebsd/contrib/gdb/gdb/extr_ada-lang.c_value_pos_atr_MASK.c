
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef scalar_t__ LONGEST ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct value*) ;
 int VAR_1 ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct value*) ;
 struct value* FUNC_7 (int ,int) ;

__attribute__((used)) static struct value *
FUNC_8 (struct value *VAR_2)
{
  struct type *VAR_3 = FUNC_3 (VAR_2);

  if (!FUNC_4 (VAR_3))
    FUNC_5 ("'POS only defined on discrete types");

  if (FUNC_0 (VAR_3) == VAR_0)
    {
      int VAR_4;
      LONGEST VAR_5 = FUNC_6 (VAR_2);

      for (VAR_4 = 0; VAR_4 < FUNC_2 (VAR_3); VAR_4 += 1)
 {
   if (VAR_5 == FUNC_1 (VAR_3, VAR_4))
     return FUNC_7 (VAR_1, VAR_4);
 }
      FUNC_5 ("enumeration value is invalid: can't find 'POS");
    }
  else
    return FUNC_7 (VAR_1, FUNC_6 (VAR_2));
}
