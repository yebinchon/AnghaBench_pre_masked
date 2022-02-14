
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* tree_live_info_p ;
typedef TYPE_2__* basic_block ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {int global; int * livein; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline void
FUNC_1 (tree_live_info_p VAR_0, basic_block VAR_1 , int VAR_2)
{
  FUNC_0 (VAR_0->livein[VAR_2], VAR_1->index);
  FUNC_0 (VAR_0->global, VAR_2);
}
