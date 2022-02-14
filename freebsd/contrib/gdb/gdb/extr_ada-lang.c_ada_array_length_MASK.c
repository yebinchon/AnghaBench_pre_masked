
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef scalar_t__ LONGEST ;


 int FUNC_0 (struct value*) ;
 scalar_t__ FUNC_1 (struct type*,int,int,struct type**) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct type*) ;
 struct type* VAR_0 ;
 struct type* FUNC_4 (int ) ;
 struct value* FUNC_5 (struct value*) ;
 int FUNC_6 (struct value*) ;
 int FUNC_7 (int ,int,int) ;
 scalar_t__ FUNC_8 (int ) ;
 struct value* FUNC_9 (struct type*,scalar_t__) ;

struct value *
FUNC_10 (struct value *VAR_1, int VAR_2)
{
  struct type *VAR_3 = FUNC_4 (FUNC_0 (VAR_1));
  struct type *VAR_4;

  if (FUNC_2 (VAR_3))
    return FUNC_10 (FUNC_5 (VAR_1), VAR_2);

  if (FUNC_3 (VAR_3))
    {
      struct type *VAR_5;
      LONGEST VAR_6 =
 FUNC_1 (VAR_3, VAR_2, 1, &VAR_5) -
 FUNC_1 (VAR_3, VAR_2, 0, ((void*)0)) + 1;
      return FUNC_9 (VAR_5, VAR_6);
    }
  else
    return
      FUNC_9 (VAR_0,
     FUNC_8 (FUNC_7 (FUNC_6 (VAR_1),
        VAR_2, 1))
     - FUNC_8 (FUNC_7 (FUNC_6 (VAR_1),
          VAR_2, 0)) + 1);
}
