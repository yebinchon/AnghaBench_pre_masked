
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vlarb_low_list; int vlarb_high_list; int across_list; int group_list; } ;
typedef TYPE_1__ osm_qos_vlarb_scope_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(osm_qos_vlarb_scope_t * VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->group_list, VAR_0, ((void*)0));
 FUNC_0(&VAR_1->across_list, VAR_0, ((void*)0));
 FUNC_0(&VAR_1->vlarb_high_list, VAR_0, ((void*)0));
 FUNC_0(&VAR_1->vlarb_low_list, VAR_0, ((void*)0));

 FUNC_2(&VAR_1->group_list);
 FUNC_2(&VAR_1->across_list);
 FUNC_2(&VAR_1->vlarb_high_list);
 FUNC_2(&VAR_1->vlarb_low_list);

 FUNC_1(&VAR_1->group_list);
 FUNC_1(&VAR_1->across_list);
 FUNC_1(&VAR_1->vlarb_high_list);
 FUNC_1(&VAR_1->vlarb_low_list);

 FUNC_3(VAR_1);
}
