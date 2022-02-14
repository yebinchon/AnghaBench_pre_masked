
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int use_operand_p ;
typedef int tree ;
struct TYPE_5__ {int iter_type; } ;
typedef TYPE_1__ ssa_op_iter ;
typedef int def_operand_p ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_4 (ssa_op_iter *VAR_4, tree VAR_5,
          use_operand_p *VAR_6, def_operand_p *VAR_7)
{
  FUNC_1 (FUNC_0 (VAR_5) != VAR_0);

  FUNC_2 (VAR_4, VAR_5, VAR_2|VAR_1);
  VAR_4->iter_type = VAR_3;
  FUNC_3 (VAR_6, VAR_7, VAR_4);
}
