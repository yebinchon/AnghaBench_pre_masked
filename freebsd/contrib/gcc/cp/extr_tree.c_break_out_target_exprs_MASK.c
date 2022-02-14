
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int * splay_tree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int ,int *,int *) ;

tree
FUNC_3 (tree VAR_3)
{
  static int VAR_4;
  static splay_tree VAR_5;

  if (!VAR_4++)
    VAR_5 = FUNC_1 (VAR_2,
                                    ((void*)0),
                                      ((void*)0));
  FUNC_2 (&VAR_3, VAR_0, VAR_5, ((void*)0));
  FUNC_2 (&VAR_3, VAR_1, VAR_5, ((void*)0));

  if (!--VAR_4)
    {
      FUNC_0 (VAR_5);
      VAR_5 = ((void*)0);
    }

  return VAR_3;
}
