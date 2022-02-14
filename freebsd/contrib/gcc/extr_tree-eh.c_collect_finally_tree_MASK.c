
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;


 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (tree VAR_0, tree VAR_1)
{
 tailrecurse:
  switch (FUNC_3 (VAR_0))
    {
    case 131:
      FUNC_5 (FUNC_2 (VAR_0), VAR_1);
      break;

    case 128:
      FUNC_5 (VAR_0, VAR_1);
      FUNC_10 (FUNC_4 (VAR_0, 0), VAR_0);
      VAR_0 = FUNC_4 (VAR_0, 1);
      goto tailrecurse;

    case 129:
      FUNC_10 (FUNC_4 (VAR_0, 0), VAR_1);
      VAR_0 = FUNC_4 (VAR_0, 1);
      goto tailrecurse;

    case 133:
      VAR_0 = FUNC_0 (VAR_0);
      goto tailrecurse;

    case 132:
      VAR_0 = FUNC_1 (VAR_0);
      goto tailrecurse;

    case 130:
      {
 tree_stmt_iterator VAR_2;
 for (VAR_2 = FUNC_8 (VAR_0); !FUNC_6 (VAR_2); FUNC_7 (&VAR_2))
   FUNC_10 (FUNC_9 (VAR_2), VAR_1);
      }
      break;

    default:


      break;
    }
}
