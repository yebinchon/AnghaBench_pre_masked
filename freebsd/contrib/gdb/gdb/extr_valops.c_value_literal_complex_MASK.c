
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 struct type* FUNC_1 (struct type*) ;
 int FUNC_2 (struct value*) ;
 scalar_t__ FUNC_3 (struct value*) ;
 struct value* FUNC_4 (struct type*) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__) ;
 struct value* FUNC_6 (struct type*,struct value*) ;

struct value *
FUNC_7 (struct value *VAR_0, struct value *VAR_1, struct type *VAR_2)
{
  struct value *VAR_3;
  struct type *VAR_4 = FUNC_1 (VAR_2);

  VAR_3 = FUNC_4 (VAR_2);
  VAR_0 = FUNC_6 (VAR_4, VAR_0);
  VAR_1 = FUNC_6 (VAR_4, VAR_1);

  FUNC_5 (FUNC_3 (VAR_3),
   FUNC_2 (VAR_0), FUNC_0 (VAR_4));
  FUNC_5 (FUNC_3 (VAR_3) + FUNC_0 (VAR_4),
   FUNC_2 (VAR_1), FUNC_0 (VAR_4));
  return VAR_3;
}
