
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9 (tree VAR_0)
{
  tree_stmt_iterator VAR_1;



  if (FUNC_4 (FUNC_3 (VAR_0, 0)))
    return 1;

  VAR_1 = FUNC_7 (FUNC_3 (VAR_0, 1));
  switch (FUNC_2 (FUNC_8 (VAR_1)))
    {
    case 129:



      for (; !FUNC_5 (VAR_1); FUNC_6 (&VAR_1))
 {
   if (FUNC_4 (FUNC_0 (FUNC_8 (VAR_1))))
     return 1;
 }
      return 0;

    case 128:
      return FUNC_4 (FUNC_1 (FUNC_8 (VAR_1)));

    default:




      return 0;
    }
}
