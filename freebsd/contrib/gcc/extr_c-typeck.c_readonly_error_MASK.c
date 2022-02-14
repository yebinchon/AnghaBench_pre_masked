
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum lvalue_use { ____Placeholder_lvalue_use } lvalue_use ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,...) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_8 (tree VAR_6, enum lvalue_use VAR_7)
{
  FUNC_7 (VAR_7 == VAR_3 || VAR_7 == VAR_5 || VAR_7 == VAR_4
       || VAR_7 == VAR_2);






  if (FUNC_2 (VAR_6) == VAR_0)
    {
      if (FUNC_5 (FUNC_4 (FUNC_3 (VAR_6, 0))))
 FUNC_8 (FUNC_3 (VAR_6, 0), VAR_7);
      else
 FUNC_6 ((VAR_7 == VAR_3 ? (FUNC_0("assignment of read-only member %qD")) : (VAR_7 == VAR_5 ? (FUNC_0("increment of read-only member %qD")) : (VAR_7 == VAR_4 ? (FUNC_0("decrement of read-only member %qD")) : (FUNC_0("read-only member %qD used as %<asm%> output"))))),



        FUNC_3 (VAR_6, 1));
    }
  else if (FUNC_2 (VAR_6) == VAR_1)
    FUNC_6 ((VAR_7 == VAR_3 ? (FUNC_0("assignment of read-only variable %qD")) : (VAR_7 == VAR_5 ? (FUNC_0("increment of read-only variable %qD")) : (VAR_7 == VAR_4 ? (FUNC_0("decrement of read-only variable %qD")) : (FUNC_0("read-only variable %qD used as %<asm%> output"))))),



    VAR_6);
  else
    FUNC_6 ((VAR_7 == VAR_3 ? (FUNC_0("assignment of read-only location")) : (VAR_7 == VAR_5 ? (FUNC_0("increment of read-only location")) : (VAR_7 == VAR_4 ? (FUNC_0("decrement of read-only location")) : (FUNC_0("read-only location used as %<asm%> output"))))));



}
