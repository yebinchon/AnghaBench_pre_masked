
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int use_operand_p ;
typedef int tree ;
typedef int ssa_op_iter ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline use_operand_p
FUNC_3 (tree VAR_1, int VAR_2)
{
  use_operand_p VAR_3;
  ssa_op_iter VAR_4;

  VAR_3 = FUNC_1 (&VAR_4, VAR_1, VAR_2);
  if (FUNC_0 (&VAR_4))
    return VAR_0;
  FUNC_2 (&VAR_4);
  if (FUNC_0 (&VAR_4))
    return VAR_3;
  return VAR_0;
}
