
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int plugin_list; } ;
typedef TYPE_1__ osm_opensm_t ;
typedef int osm_epi_plugin_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(osm_opensm_t *VAR_0)
{
 osm_epi_plugin_t *VAR_1;

 while (!FUNC_0(&VAR_0->plugin_list)){
  VAR_1 = (osm_epi_plugin_t *)FUNC_1(&VAR_0->plugin_list);

  FUNC_2(VAR_1);
 }
}
