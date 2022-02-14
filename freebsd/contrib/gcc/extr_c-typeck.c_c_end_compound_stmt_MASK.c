
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int TREE_SIDE_EFFECTS ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__,int ,int *,int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 int * FUNC_6 () ;
 int * FUNC_7 (int *) ;
 int VAR_2 ;

tree
FUNC_8 (tree VAR_3, bool VAR_4)
{
  tree VAR_5 = ((void*)0);

  if (VAR_4)
    {
      if (FUNC_4 ())
 FUNC_5 ();
      VAR_5 = FUNC_6 ();
    }

  VAR_3 = FUNC_7 (VAR_3);
  VAR_3 = FUNC_3 (VAR_5, VAR_3);






  if (VAR_1
      && FUNC_0 (VAR_1)
      && FUNC_1 (VAR_3) != VAR_0)
    {
      VAR_3 = FUNC_2 (VAR_0, VAR_2, ((void*)0), VAR_3, ((void*)0));
      TREE_SIDE_EFFECTS (VAR_6) = 1;
    }

  return VAR_3;
}
