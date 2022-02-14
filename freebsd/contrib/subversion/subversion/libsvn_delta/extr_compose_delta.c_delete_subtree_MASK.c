
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int range_index_t ;
struct TYPE_4__ {struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ range_index_node_t ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(range_index_t *VAR_0, range_index_node_t *VAR_1)
{
  if (VAR_1 != ((void*)0))
    {
      FUNC_1(VAR_0, VAR_1->left);
      FUNC_1(VAR_0, VAR_1->right);
      FUNC_0(VAR_0, VAR_1);
    }
}
