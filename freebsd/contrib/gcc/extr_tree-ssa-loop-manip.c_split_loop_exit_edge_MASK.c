
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int use_operand_p ;
typedef scalar_t__ tree ;
typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_5__ {int dest; } ;
typedef scalar_t__ SSA_NAME_DEF_STMT ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11 (edge VAR_1)
{
  basic_block VAR_2 = VAR_1->dest;
  basic_block VAR_3 = FUNC_8 (VAR_1, ((void*)0));
  tree VAR_4, VAR_5, VAR_6, VAR_7;
  use_operand_p VAR_8;

  for (VAR_4 = FUNC_9 (VAR_2); VAR_4; VAR_4 = FUNC_1 (VAR_4))
    {
      VAR_8 = FUNC_0 (VAR_4, FUNC_10 (VAR_3));

      VAR_7 = FUNC_4 (VAR_8);



      if (FUNC_3 (VAR_7) != VAR_0)
 continue;



      VAR_6 = FUNC_7 (VAR_7, ((void*)0));
      VAR_5 = FUNC_6 (VAR_6, VAR_3);
      SSA_NAME_DEF_STMT (VAR_9) = VAR_5;
      FUNC_5 (VAR_5, VAR_7, VAR_1);
      FUNC_2 (VAR_8, VAR_9);
    }
}
