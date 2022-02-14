
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mfsplay_tree_key ;
typedef TYPE_1__* mfsplay_tree ;
struct TYPE_5__ {scalar_t__ root; int last_splayed_key_p; scalar_t__ last_splayed_key; int max_depth; scalar_t__ rebalance_p; scalar_t__ depth; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__*,int *,int *) ;

__attribute__((used)) static void
FUNC_3 (mfsplay_tree VAR_0, mfsplay_tree_key VAR_1)
{
  if (VAR_0->root == 0)
    return;


  if (VAR_0->last_splayed_key_p &&
      (VAR_0->last_splayed_key == VAR_1))
    return;
  VAR_0->max_depth = 2500;
  VAR_0->rebalance_p = VAR_0->depth = 0;

  FUNC_2 (VAR_0, VAR_1, &VAR_0->root, ((void*)0), ((void*)0));
  if (VAR_0->rebalance_p)
    {
      FUNC_1 (VAR_0);

      VAR_0->rebalance_p = VAR_0->depth = 0;
      FUNC_2 (VAR_0, VAR_1, &VAR_0->root, ((void*)0), ((void*)0));

      if (VAR_0->rebalance_p)
        FUNC_0 ();
    }



  VAR_0->last_splayed_key = VAR_1;
  VAR_0->last_splayed_key_p = 1;
}
