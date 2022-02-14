
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void
FUNC_9 (tree VAR_2)
{
  tree_stmt_iterator VAR_3;



  if (FUNC_1 (VAR_2) != VAR_1)
    return;

  VAR_3 = FUNC_7 (VAR_2);
  if (!FUNC_5 (VAR_3))
    while (1)
      {
 tree VAR_4 = FUNC_8 (VAR_3);
 FUNC_6 (&VAR_3);


 if (FUNC_5 (VAR_3))
   break;
 if (FUNC_2 (VAR_4) == VAR_0)
   FUNC_4 ("%H%<...%> handler must be the last handler for"
     " its try block", FUNC_0 (VAR_4));
 else
   FUNC_3 (VAR_4, VAR_3);
      }
}
