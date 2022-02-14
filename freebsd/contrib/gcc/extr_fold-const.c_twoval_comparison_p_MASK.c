
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code_class { ____Placeholder_tree_code_class } tree_code_class ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;






__attribute__((used)) static int
FUNC_5 (tree VAR_6, tree *VAR_7, tree *VAR_8, int *VAR_9)
{
  enum tree_code VAR_10 = FUNC_0 (VAR_6);
  enum tree_code_class VAR_11 = FUNC_1 (VAR_10);


  if (VAR_11 == 129 && VAR_10 == VAR_4)
    VAR_11 = 128;
  else if (VAR_11 == 129
    && (VAR_10 == VAR_3 || VAR_10 == VAR_5
        || VAR_10 == VAR_0))
    VAR_11 = 132;

  else if (VAR_11 == 129 && VAR_10 == VAR_2
    && ! FUNC_3 (FUNC_2 (VAR_6, 0)))
    {


      if (*VAR_7 || *VAR_8)
 return 0;

      VAR_11 = 128;
      *VAR_9 = 1;
    }

  switch (VAR_11)
    {
    case 128:
      return FUNC_5 (FUNC_2 (VAR_6, 0), VAR_7, VAR_8, VAR_9);

    case 132:
      return (FUNC_5 (FUNC_2 (VAR_6, 0), VAR_7, VAR_8, VAR_9)
       && FUNC_5 (FUNC_2 (VAR_6, 1),
          VAR_7, VAR_8, VAR_9));

    case 130:
      return 1;

    case 129:
      if (VAR_10 == VAR_1)
 return (FUNC_5 (FUNC_2 (VAR_6, 0),
         VAR_7, VAR_8, VAR_9)
  && FUNC_5 (FUNC_2 (VAR_6, 1),
     VAR_7, VAR_8, VAR_9)
  && FUNC_5 (FUNC_2 (VAR_6, 2),
     VAR_7, VAR_8, VAR_9));
      return 0;

    case 131:






      if (FUNC_4 (FUNC_2 (VAR_6, 0),
      FUNC_2 (VAR_6, 1), 0))
 return 0;

      if (*VAR_7 == 0)
 *VAR_7 = FUNC_2 (VAR_6, 0);
      else if (FUNC_4 (*VAR_7, FUNC_2 (VAR_6, 0), 0))
 ;
      else if (*VAR_8 == 0)
 *VAR_8 = FUNC_2 (VAR_6, 0);
      else if (FUNC_4 (*VAR_8, FUNC_2 (VAR_6, 0), 0))
 ;
      else
 return 0;

      if (FUNC_4 (*VAR_7, FUNC_2 (VAR_6, 1), 0))
 ;
      else if (*VAR_8 == 0)
 *VAR_8 = FUNC_2 (VAR_6, 1);
      else if (FUNC_4 (*VAR_8, FUNC_2 (VAR_6, 1), 0))
 ;
      else
 return 0;

      return 1;

    default:
      return 0;
    }
}
