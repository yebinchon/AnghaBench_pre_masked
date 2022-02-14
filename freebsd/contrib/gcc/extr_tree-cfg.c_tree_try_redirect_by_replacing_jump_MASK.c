
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef TYPE_2__* basic_block ;
struct TYPE_13__ {int succs; } ;
struct TYPE_12__ {int flags; TYPE_2__* dest; TYPE_2__* src; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static edge
FUNC_8 (edge VAR_3, basic_block VAR_4)
{
  basic_block VAR_5 = VAR_3->src;
  block_stmt_iterator VAR_6;
  tree VAR_7;



  if (FUNC_0 (VAR_5->succs) != 2


      || FUNC_1 (VAR_5, FUNC_1 (VAR_5, 0) == VAR_3)->dest != VAR_4)
    return ((void*)0);

  VAR_6 = FUNC_4 (VAR_5);
  if (FUNC_3 (VAR_6))
    return ((void*)0);
  VAR_7 = FUNC_6 (VAR_6);

  if (FUNC_2 (VAR_7) == VAR_0
      || FUNC_2 (VAR_7) == VAR_2)
    {
      FUNC_5 (&VAR_6, 1);
      VAR_3 = FUNC_7 (VAR_3, VAR_4);
      VAR_3->flags = VAR_1;
      return VAR_3;
    }

  return ((void*)0);
}
