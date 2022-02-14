
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int use_operand_p ;
typedef scalar_t__ tree ;
struct occurrence {scalar_t__ recip_def_stmt; scalar_t__ recip_def; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {scalar_t__ aux; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_7 (use_operand_p VAR_1)
{
  tree VAR_2 = FUNC_3 (VAR_1);
  basic_block VAR_3 = FUNC_4 (VAR_2);
  struct occurrence *VAR_4 = (struct occurrence *) VAR_3->aux;

  if (VAR_4->recip_def && VAR_2 != VAR_4->recip_def_stmt)
    {
      FUNC_2 (FUNC_1 (VAR_2, 1), VAR_0);
      FUNC_0 (VAR_1, VAR_4->recip_def);
      FUNC_5 (VAR_2);
      FUNC_6 (VAR_2);
    }
}
