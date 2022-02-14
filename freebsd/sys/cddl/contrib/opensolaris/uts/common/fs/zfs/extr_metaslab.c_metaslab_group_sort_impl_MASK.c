
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int ms_weight; TYPE_2__* ms_group; } ;
typedef TYPE_1__ metaslab_t ;
struct TYPE_8__ {int mg_metaslab_tree; int mg_lock; } ;
typedef TYPE_2__ metaslab_group_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(metaslab_group_t *VAR_0, metaslab_t *VAR_1, uint64_t VAR_2)
{
 FUNC_0(FUNC_1(&VAR_0->mg_lock));
 FUNC_0(VAR_1->ms_group == VAR_0);
 FUNC_3(&VAR_0->mg_metaslab_tree, VAR_1);
 VAR_1->ms_weight = VAR_2;
 FUNC_2(&VAR_0->mg_metaslab_tree, VAR_1);

}
