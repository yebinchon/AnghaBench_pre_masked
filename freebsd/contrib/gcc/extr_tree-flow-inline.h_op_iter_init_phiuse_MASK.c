
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int use_operand_p ;
typedef int tree ;
struct TYPE_5__ {int done; int iter_type; int num_phi; int phi_stmt; } ;
typedef TYPE_1__ ssa_op_iter ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static inline use_operand_p
FUNC_6 (ssa_op_iter *VAR_4, tree VAR_5, int VAR_6)
{
  tree VAR_7 = FUNC_1 (VAR_5);
  int VAR_8;

  FUNC_2 (VAR_4);
  VAR_4->done = 0;

  FUNC_3 ((VAR_6 & (VAR_1 | VAR_2)) != 0);

  VAR_8 = (FUNC_4 (VAR_7) ? VAR_1 : VAR_2);


  if ((VAR_6 & VAR_8) == 0)
    {
      VAR_4->done = 1;
      return VAR_0;
    }

  VAR_4->phi_stmt = VAR_5;
  VAR_4->num_phi = FUNC_0 (VAR_5);
  VAR_4->iter_type = VAR_3;
  return FUNC_5 (VAR_4);
}
