
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int across_to_list; int across_from_list; int group_list; } ;
typedef TYPE_1__ osm_qos_sl2vl_scope_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(osm_qos_sl2vl_scope_t * VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->group_list, VAR_0, ((void*)0));
 FUNC_0(&VAR_1->across_from_list, VAR_0, ((void*)0));
 FUNC_0(&VAR_1->across_to_list, VAR_0, ((void*)0));

 FUNC_2(&VAR_1->group_list);
 FUNC_2(&VAR_1->across_from_list);
 FUNC_2(&VAR_1->across_to_list);

 FUNC_1(&VAR_1->group_list);
 FUNC_1(&VAR_1->across_from_list);
 FUNC_1(&VAR_1->across_to_list);

 FUNC_3(VAR_1);
}
