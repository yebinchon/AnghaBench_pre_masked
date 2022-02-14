
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_5__ {int bb; } ;
typedef TYPE_1__ block_stmt_iterator ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__ const) ;
 int * FUNC_4 (TYPE_1__ const) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11 (const block_stmt_iterator *VAR_0, tree VAR_1, bool VAR_2)
{
  int VAR_3;
  tree VAR_4 = FUNC_3 (*VAR_0);

  FUNC_1 (VAR_1, FUNC_0 (VAR_4));
  FUNC_9 (VAR_1, VAR_0->bb);



  if (VAR_2)
    {
      VAR_3 = FUNC_6 (VAR_4);
      if (VAR_3 >= 0)
 {
   FUNC_8 (VAR_4);
   FUNC_2 (VAR_1, VAR_3);
 }
    }

  FUNC_5 (VAR_4);
  *FUNC_4 (*VAR_0) = VAR_1;
  FUNC_7 (VAR_1);
  FUNC_10 (VAR_1);
}
