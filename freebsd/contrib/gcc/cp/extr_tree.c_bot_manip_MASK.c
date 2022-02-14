
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int splay_tree_value ;
typedef int splay_tree_key ;
typedef int splay_tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__*,int*,int *) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_10 (tree* VAR_3, int* VAR_4, void* VAR_5)
{
  splay_tree VAR_6 = ((splay_tree) VAR_5);
  tree VAR_7 = *VAR_3;

  if (!FUNC_4 (VAR_7) && FUNC_1 (VAR_7))
    {



      *VAR_4 = 0;
      return VAR_1;
    }
  if (FUNC_0 (VAR_7) == VAR_2)
    {
      tree VAR_8;

      if (FUNC_0 (FUNC_2 (VAR_7, 1)) == VAR_0)
 VAR_8 = FUNC_6
   (FUNC_3 (VAR_7), FUNC_5 (FUNC_2 (VAR_7, 1)));
      else
 VAR_8 = FUNC_7
   (FUNC_5 (FUNC_2 (VAR_7, 1)), FUNC_3 (VAR_7));


      FUNC_9 (VAR_6,
    (splay_tree_key) FUNC_2 (VAR_7, 0),
    (splay_tree_value) FUNC_2 (VAR_8, 0));


      *VAR_3 = VAR_8;



      *VAR_4 = 0;
      return VAR_1;
    }


  return FUNC_8 (VAR_3, VAR_4, ((void*)0));
}
