
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 struct type* FUNC_5 (struct value*) ;
 struct value* FUNC_6 (struct type*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 struct value* FUNC_9 (struct value*,struct value*,struct type*) ;
 struct value* FUNC_10 (struct type*,int ) ;

__attribute__((used)) static struct value *
FUNC_11 (struct type *VAR_4, struct value *VAR_5)
{
  struct type *VAR_6 = FUNC_2 (VAR_4);
  if (FUNC_0 (FUNC_5 (VAR_5)) == VAR_0)
    {
      struct type *VAR_7 = FUNC_2 (FUNC_5 (VAR_5));
      struct value *VAR_8 = FUNC_6 (VAR_7);
      struct value *VAR_9 = FUNC_6 (VAR_7);

      FUNC_8 (FUNC_4 (VAR_8),
       FUNC_3 (VAR_5), FUNC_1 (VAR_7));
      FUNC_8 (FUNC_4 (VAR_9),
       FUNC_3 (VAR_5) + FUNC_1 (VAR_7),
       FUNC_1 (VAR_7));

      return FUNC_9 (VAR_8, VAR_9, VAR_4);
    }
  else if (FUNC_0 (FUNC_5 (VAR_5)) == VAR_1
    || FUNC_0 (FUNC_5 (VAR_5)) == VAR_2)
    return FUNC_9 (VAR_5, FUNC_10 (VAR_6, VAR_3), VAR_4);
  else
    FUNC_7 ("cannot cast non-number to complex");
}
