
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int gme_ds; } ;
typedef TYPE_1__ guid_map_entry_t ;
typedef TYPE_1__ avl_tree_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,void**) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 avl_tree_t *VAR_1 = VAR_0;
 void *VAR_2 = ((void*)0);
 guid_map_entry_t *VAR_3;

 while ((VAR_3 = FUNC_1(VAR_1, &VAR_2)) != ((void*)0)) {
  FUNC_2(VAR_3->gme_ds, VAR_3);
  FUNC_3(VAR_3->gme_ds, VAR_3);
  FUNC_4(VAR_3, sizeof (guid_map_entry_t));
 }
 FUNC_0(VAR_1);
 FUNC_4(VAR_1, sizeof (avl_tree_t));
}
