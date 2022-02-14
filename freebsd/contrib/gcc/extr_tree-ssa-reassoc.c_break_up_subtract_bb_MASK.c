
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int block_stmt_iterator ;
typedef scalar_t__ basic_block ;
typedef int TREE_VISITED ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13 (basic_block VAR_4)
{
  block_stmt_iterator VAR_5;
  basic_block VAR_6;

  for (VAR_5 = FUNC_8 (VAR_4); !FUNC_6 (VAR_5); FUNC_7 (&VAR_5))
    {
      tree VAR_7 = FUNC_9 (VAR_5);

      if (FUNC_2 (VAR_7) == VAR_2)
 {
   tree VAR_8 = FUNC_3 (VAR_7, 0);
   tree VAR_9 = FUNC_3 (VAR_7, 1);

   TREE_VISITED (VAR_10) = 0;


   if ((!FUNC_0 (FUNC_4 (VAR_8))
        || !FUNC_0 (FUNC_4 (VAR_9)))
       && (!FUNC_1 (FUNC_4 (VAR_9))
    || !FUNC_1 (FUNC_4(VAR_8))
    || !VAR_3))
     continue;





   if (FUNC_2 (VAR_9) == VAR_1)
     if (FUNC_12 (VAR_10))
       FUNC_5 (VAR_10, &VAR_5);
 }
    }
  for (VAR_6 = FUNC_10 (VAR_0, VAR_4);
       VAR_6;
       VAR_6 = FUNC_11 (VAR_0, VAR_6))
    FUNC_13 (VAR_6);
}
