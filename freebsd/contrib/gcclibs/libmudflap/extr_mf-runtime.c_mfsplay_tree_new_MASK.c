
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mfsplay_tree_s {int dummy; } ;
typedef TYPE_1__* mfsplay_tree ;
struct TYPE_4__ {scalar_t__ num_keys; scalar_t__ last_splayed_key_p; int * root; } ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static mfsplay_tree
FUNC_1 ()
{
  mfsplay_tree VAR_0 = FUNC_0 (sizeof (struct mfsplay_tree_s));
  VAR_0->root = ((void*)0);
  VAR_0->last_splayed_key_p = 0;
  VAR_0->num_keys = 0;

  return VAR_0;
}
