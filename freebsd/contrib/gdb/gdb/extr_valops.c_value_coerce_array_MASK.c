
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct value*) ;
 scalar_t__ FUNC_2 (struct value*) ;
 scalar_t__ FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 struct type* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_0 ;
 struct value* FUNC_8 (int ,scalar_t__) ;

struct value *
FUNC_9 (struct value *VAR_1)
{
  struct type *VAR_2 = FUNC_5 (FUNC_4 (VAR_1));

  if (FUNC_2 (VAR_1) != VAR_0)
    FUNC_6 ("Attempt to take address of value not located in memory.");

  return FUNC_8 (FUNC_7 (FUNC_0 (VAR_2)),
        (FUNC_1 (VAR_1) + FUNC_3 (VAR_1)));
}
