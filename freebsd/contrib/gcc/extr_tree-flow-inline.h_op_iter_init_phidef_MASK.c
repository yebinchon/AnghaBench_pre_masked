
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {int done; int iter_type; } ;
typedef TYPE_1__ ssa_op_iter ;
typedef int def_operand_p ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static inline def_operand_p
FUNC_5 (ssa_op_iter *VAR_4, tree VAR_5, int VAR_6)
{
  tree VAR_7 = FUNC_0 (VAR_5);
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

  VAR_4->iter_type = VAR_3;



  return FUNC_1 (VAR_5);
}
