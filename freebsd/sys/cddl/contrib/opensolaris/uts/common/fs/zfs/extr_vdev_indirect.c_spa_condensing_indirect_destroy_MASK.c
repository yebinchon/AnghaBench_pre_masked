
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * sci_new_mapping; int * sci_new_mapping_entries; } ;
typedef TYPE_1__ spa_condensing_indirect_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(spa_condensing_indirect_t *VAR_1)
{
 for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(&VAR_1->sci_new_mapping_entries[VAR_2]);

 if (VAR_1->sci_new_mapping != ((void*)0))
  FUNC_2(VAR_1->sci_new_mapping);

 FUNC_0(VAR_1, sizeof (*VAR_1));
}
