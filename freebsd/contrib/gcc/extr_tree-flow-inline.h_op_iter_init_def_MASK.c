
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_5__ {int iter_type; } ;
typedef TYPE_1__ ssa_op_iter ;
typedef int def_operand_p ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static inline def_operand_p
FUNC_3 (ssa_op_iter *VAR_3, tree VAR_4, int VAR_5)
{
  FUNC_0 ((VAR_5 & (VAR_0 | VAR_1)) == 0);
  FUNC_1 (VAR_3, VAR_4, VAR_5);
  VAR_3->iter_type = VAR_2;
  return FUNC_2 (VAR_3);
}
