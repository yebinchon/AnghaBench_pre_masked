
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int * tree ;
typedef int basic_block ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (tree VAR_2)
{
  tree_stmt_iterator VAR_3 = FUNC_8 (VAR_2);
  tree VAR_4 = ((void*)0);
  bool VAR_5 = 1;
  bool VAR_6 = 1;
  basic_block VAR_7 = VAR_0;

  while (!FUNC_5 (VAR_3))
    {
      tree VAR_8;

      VAR_8 = VAR_4;
      VAR_4 = FUNC_9 (VAR_3);




      if (VAR_5 || FUNC_4 (VAR_4, VAR_8))
 {
   if (!VAR_6)
     VAR_2 = FUNC_7 (&VAR_3);
   VAR_7 = FUNC_1 (VAR_2, ((void*)0), VAR_7);
   VAR_5 = 0;
 }



      FUNC_2 (VAR_4, VAR_7);

      if (FUNC_0 (VAR_4))
 VAR_1 = 1;



      if (FUNC_3 (VAR_4))
 VAR_5 = 1;

      FUNC_6 (&VAR_3);
      VAR_6 = 0;
    }
}
