
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mfsplay_tree_node ;
typedef TYPE_1__* mfsplay_tree ;
struct TYPE_4__ {int num_keys; int root; } ;


 int FUNC_0 (TYPE_1__*,int ,void*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (mfsplay_tree VAR_1)
{
  mfsplay_tree_node *VAR_2, *VAR_3;

  if (VAR_1->num_keys <= 2)
    return;

  VAR_2 = FUNC_3 (sizeof (mfsplay_tree_node) * VAR_1->num_keys);


  VAR_3 = VAR_2;
  FUNC_0 (VAR_1, VAR_0,
                      (void *) &VAR_3);


  VAR_1->root = FUNC_2 (VAR_2, 0, VAR_1->num_keys - 1);

  FUNC_1 (VAR_2);
}
