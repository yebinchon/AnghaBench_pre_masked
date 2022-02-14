
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int *) ;
 int VAR_5 ;
 int FUNC_12 (scalar_t__,scalar_t__*) ;
 int FUNC_13 (scalar_t__*,scalar_t__*,int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_14 (scalar_t__) ;

void
FUNC_15 (tree *VAR_8, tree *VAR_9)
{
  tree VAR_10, VAR_11 = *VAR_8;






  if (VAR_11 == VAR_3 || FUNC_6 (VAR_11)
      || FUNC_5 (VAR_11) == VAR_4
      || FUNC_0 (VAR_11))
    return;

  VAR_10 = FUNC_7 (VAR_11);
  *VAR_8 = FUNC_14 (VAR_11);

  FUNC_13 (VAR_8, VAR_9, ((void*)0), VAR_7, VAR_5);
  VAR_11 = *VAR_8;







  if (FUNC_7 (VAR_11) != VAR_10
      && FUNC_5 (VAR_10) == VAR_0
      && FUNC_8 (VAR_10))
    {
      tree VAR_12;

      *VAR_8 = FUNC_11 (VAR_10, ((void*)0));
      VAR_12 = FUNC_9 (VAR_2, VAR_10, VAR_11);
      VAR_12 = FUNC_10 (VAR_1, VAR_10, *VAR_8, VAR_12);
      if (FUNC_1 (VAR_11))
 FUNC_4 (VAR_12, FUNC_2 (VAR_11));
      else
 FUNC_3 (VAR_12, VAR_6);

      FUNC_12 (VAR_12, VAR_9);
    }
}
