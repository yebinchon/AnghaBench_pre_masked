
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int edge_iterator ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef TYPE_2__* basic_block ;
struct TYPE_9__ {int succs; } ;
struct TYPE_8__ {TYPE_2__* dest; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9 (basic_block VAR_3, basic_block VAR_4)
{
  block_stmt_iterator VAR_5;
  edge VAR_6;
  edge_iterator VAR_7;

  VAR_5 = FUNC_2 (VAR_3);






  if (!FUNC_1 (VAR_5)
      && FUNC_4 (VAR_5)
      && (FUNC_0 (FUNC_4 (VAR_5)) == VAR_0
   || FUNC_0 (FUNC_4 (VAR_5)) == VAR_1
   || FUNC_0 (FUNC_4 (VAR_5)) == VAR_2))
    FUNC_3 (&VAR_5, 1);

  for (VAR_7 = FUNC_7 (VAR_3->succs); (VAR_6 = FUNC_6 (VAR_7)); )
    {
      if (VAR_6->dest != VAR_4)
 FUNC_8 (VAR_6);
      else
 FUNC_5 (&VAR_7);
    }
}
