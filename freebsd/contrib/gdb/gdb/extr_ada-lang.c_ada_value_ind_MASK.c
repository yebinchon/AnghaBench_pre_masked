
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;


 scalar_t__ FUNC_0 (struct value*) ;
 scalar_t__ FUNC_1 (struct value*) ;
 int FUNC_2 (struct value*) ;
 struct value* FUNC_3 (int ,int ,scalar_t__,struct value*) ;
 struct value* FUNC_4 (int ) ;
 int FUNC_5 (struct value*) ;

struct value *
FUNC_6 (struct value *VAR_0)
{
  struct value *VAR_1 = FUNC_4 (FUNC_5 (VAR_0));
  return FUNC_3 (FUNC_2 (VAR_1), 0,
        FUNC_0 (VAR_1) + FUNC_1 (VAR_1), VAR_1);
}
