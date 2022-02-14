
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int use_operand_p ;
typedef int tree ;
struct TYPE_5__ {int iter_type; } ;
typedef TYPE_1__ ssa_op_iter ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static inline use_operand_p
FUNC_3 (ssa_op_iter *VAR_2, tree VAR_3, int VAR_4)
{
  FUNC_0 ((VAR_4 & VAR_0) == 0);
  FUNC_1 (VAR_2, VAR_3, VAR_4);
  VAR_2->iter_type = VAR_1;
  return FUNC_2 (VAR_2);
}
