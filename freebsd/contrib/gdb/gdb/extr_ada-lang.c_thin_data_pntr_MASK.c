
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct value*) ;
 scalar_t__ FUNC_2 (struct value*) ;
 struct type* FUNC_3 (struct value*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct type*) ;
 struct value* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct value*) ;
 struct value* FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static struct value *
FUNC_9 (struct value *VAR_1)
{
  struct type *VAR_2 = FUNC_3 (VAR_1);
  if (FUNC_0 (VAR_2) == VAR_0)
    return FUNC_6 (FUNC_4 (FUNC_5 (VAR_2)),
         FUNC_7 (VAR_1));
  else
    return FUNC_8 (FUNC_4 (FUNC_5 (VAR_2)),
          FUNC_1 (VAR_1) + FUNC_2 (VAR_1));
}
