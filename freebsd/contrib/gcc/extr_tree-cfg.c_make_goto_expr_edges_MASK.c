
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef int basic_block ;
struct TYPE_3__ {int goto_locus; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 TYPE_1__* FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (basic_block VAR_1)
{
  block_stmt_iterator VAR_2 = FUNC_3 (VAR_1);
  tree VAR_3 = FUNC_5 (VAR_2);


  if (FUNC_9 (VAR_3))
    {
      tree VAR_4 = FUNC_2 (VAR_3);
      edge VAR_5 = FUNC_8 (VAR_1, FUNC_6 (VAR_4), VAR_0);



      VAR_5->goto_locus = FUNC_1 (VAR_3);

      FUNC_4 (&VAR_2, 1);
      return;
    }


  FUNC_7 (VAR_1, 0);
}
