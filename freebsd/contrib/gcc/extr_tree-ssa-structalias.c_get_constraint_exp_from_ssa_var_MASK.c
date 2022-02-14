
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct constraint_expr {scalar_t__ var; scalar_t__ offset; int type; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 TYPE_1__* FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static struct constraint_expr
FUNC_8 (tree VAR_6)
{
  struct constraint_expr VAR_7;

  FUNC_6 (FUNC_2 (VAR_6) || FUNC_0 (VAR_6));



  if (FUNC_3 (VAR_6) == VAR_3
      && FUNC_3 (FUNC_1 (VAR_6)) == VAR_1
      && FUNC_5 (FUNC_1 (VAR_6)) == VAR_6)
    return FUNC_8 (FUNC_1 (VAR_6));

  VAR_7.type = VAR_2;

  VAR_7.var = FUNC_7 (VAR_6)->id;


  if (VAR_7.var == VAR_4 && FUNC_4 (VAR_6))
    {
      VAR_7.type = VAR_0;
      VAR_7.var = VAR_5;
    }

  VAR_7.offset = 0;
  return VAR_7;
}
