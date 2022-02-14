
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;





 scalar_t__ VAR_0 ;



 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int,scalar_t__) ;
 scalar_t__ FUNC_5 (int,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static tree
FUNC_8 (enum tree_code VAR_2, tree VAR_3, tree VAR_4, int VAR_5,
      tree VAR_6, int VAR_7)
{
  tree VAR_8;
  int VAR_9;
  int VAR_10, VAR_11;






  if (VAR_4 != 0 && VAR_6 != 0)
    {
      VAR_8 = FUNC_5 (VAR_2, VAR_3 != 0 ? VAR_3 : FUNC_3 (VAR_4),
    VAR_4, FUNC_6 (FUNC_3 (VAR_4), VAR_6));
      FUNC_0 (VAR_8);
      return FUNC_1 (VAR_8) == VAR_0 ? VAR_8 : 0;
    }

  if (FUNC_2 (VAR_2) != VAR_1)
    return 0;







  VAR_10 = VAR_4 != 0 ? 0 : (VAR_5 ? 1 : -1);
  VAR_11 = VAR_6 != 0 ? 0 : (VAR_7 ? 1 : -1);
  switch (VAR_2)
    {
    case 133:
      VAR_9 = VAR_10 == VAR_11;
      break;
    case 128:
      VAR_9 = VAR_10 != VAR_11;
      break;
    case 129:
      VAR_9 = VAR_10 < VAR_11;
      break;
    case 130:
      VAR_9 = VAR_10 <= VAR_11;
      break;
    case 131:
      VAR_9 = VAR_10 > VAR_11;
      break;
    case 132:
      VAR_9 = VAR_10 >= VAR_11;
      break;
    default:
      FUNC_7 ();
    }

  return FUNC_4 (VAR_9, VAR_3);
}
