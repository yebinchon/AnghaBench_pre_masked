
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 struct type* FUNC_0 (struct value*) ;
 int FUNC_1 (struct type*,int,int,struct type**) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct type*) ;
 struct value* FUNC_4 (struct value*) ;
 int FUNC_5 (struct value*) ;
 struct value* FUNC_6 (int ,int,int) ;
 struct value* FUNC_7 (struct type*,int ) ;

struct value *
FUNC_8 (struct value *VAR_0, int VAR_1, int VAR_2)
{
  struct type *VAR_3 = FUNC_0 (VAR_0);

  if (FUNC_2 (VAR_3))
    return FUNC_8 (FUNC_4 (VAR_0), VAR_1, VAR_2);
  else if (FUNC_3 (VAR_3))
    {
      struct type *VAR_4;
      LONGEST VAR_5 = FUNC_1 (VAR_3, VAR_1, VAR_2, &VAR_4);
      return FUNC_7 (VAR_4, VAR_5);
    }
  else
    return FUNC_6 (FUNC_5 (VAR_0), VAR_1, VAR_2);
}
