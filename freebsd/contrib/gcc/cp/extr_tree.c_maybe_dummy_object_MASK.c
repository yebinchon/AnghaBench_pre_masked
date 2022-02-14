
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int VAR_5 ;

tree
FUNC_9 (tree VAR_6, tree* VAR_7)
{
  tree VAR_8, VAR_9;
  tree VAR_10;

  if (VAR_4
      && (VAR_10 = FUNC_6 (VAR_4, VAR_6,
          VAR_1 | VAR_0, ((void*)0))))
    VAR_9 = VAR_4;
  else
    {

      VAR_9 = VAR_6;
      VAR_10 = FUNC_1 (VAR_6);
    }

  if (VAR_7)
    *VAR_7 = VAR_10;

  if (VAR_3 && VAR_9 == VAR_4



      && FUNC_8 (FUNC_2 (FUNC_0 (VAR_3)),
        VAR_4))
    VAR_8 = VAR_3;

    else if (VAR_2)
    {
      tree VAR_11 = FUNC_7 (VAR_5);
      FUNC_5 (!VAR_3);
      FUNC_5 (VAR_11);
      VAR_8 = FUNC_4 (VAR_11);
    }

  else
    VAR_8 = FUNC_3 (VAR_9);

  return VAR_8;
}
