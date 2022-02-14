
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int plugin_list; } ;
typedef TYPE_2__ osm_opensm_t ;
struct TYPE_7__ {int plugin_data; TYPE_1__* impl; } ;
typedef TYPE_3__ osm_epi_plugin_t ;
typedef int osm_epi_event_id_t ;
typedef int cl_list_item_t ;
struct TYPE_5__ {int (* report ) (int ,int ,void*) ;} ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,void*) ;

void FUNC_4(osm_opensm_t *VAR_1, osm_epi_event_id_t VAR_2,
        void *VAR_3)
{
 cl_list_item_t *VAR_4;

 for (VAR_4 = FUNC_1(&VAR_1->plugin_list);
      !VAR_0 && VAR_4 != FUNC_0(&VAR_1->plugin_list);
      VAR_4 = FUNC_2(VAR_4)) {
  osm_epi_plugin_t *VAR_5 = (osm_epi_plugin_t *)VAR_4;
  if (VAR_5->impl->report)
   VAR_5->impl->report(VAR_5->plugin_data, VAR_2, VAR_3);
 }
}
