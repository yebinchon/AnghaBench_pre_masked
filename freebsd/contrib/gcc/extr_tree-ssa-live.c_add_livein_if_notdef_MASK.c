
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* tree_live_info_p ;
typedef int tree ;
typedef int bitmap ;
typedef TYPE_2__* basic_block ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {int global; int * livein; int map; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_3 (tree_live_info_p VAR_2, bitmap VAR_3,
        tree VAR_4, basic_block VAR_5)
{
  int VAR_6 = FUNC_2 (VAR_2->map, VAR_4);
  if (VAR_6 == VAR_1 || VAR_5 == VAR_0)
    return;
  if (!FUNC_0 (VAR_3, VAR_6))
    {
      FUNC_1 (VAR_2->livein[VAR_6], VAR_5->index);
      FUNC_1 (VAR_2->global, VAR_6);
    }
}
