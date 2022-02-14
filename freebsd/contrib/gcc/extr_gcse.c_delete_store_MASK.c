
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ls_expr {scalar_t__ reaching_reg; int pattern; } ;
typedef scalar_t__ rtx ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (struct ls_expr*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ,struct ls_expr*) ;

__attribute__((used)) static void
FUNC_6 (struct ls_expr * VAR_1, basic_block VAR_2)
{
  rtx VAR_3, VAR_4, VAR_5;

  if (VAR_1->reaching_reg == VAR_0)
    VAR_1->reaching_reg = FUNC_4 (FUNC_2 (VAR_1->pattern));

  VAR_3 = VAR_1->reaching_reg;

  for (VAR_4 = FUNC_0 (VAR_1); VAR_4; VAR_4 = FUNC_3 (VAR_4, 1))
    {
      VAR_5 = FUNC_3 (VAR_4, 0);
      if (FUNC_1 (VAR_5) == VAR_2)
 {


   FUNC_5 (VAR_3, VAR_5, VAR_2, VAR_1);
   break;
 }
    }
}
