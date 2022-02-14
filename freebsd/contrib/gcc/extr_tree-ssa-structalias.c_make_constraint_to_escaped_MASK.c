
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constraint_expr {int type; scalar_t__ offset; int var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct constraint_expr,struct constraint_expr) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (struct constraint_expr VAR_2)
{
  struct constraint_expr VAR_3;

  VAR_3.var = VAR_1;
  VAR_3.offset = 0;
  VAR_3.type = VAR_0;

  FUNC_1 (FUNC_0 (VAR_3, VAR_2));
}
