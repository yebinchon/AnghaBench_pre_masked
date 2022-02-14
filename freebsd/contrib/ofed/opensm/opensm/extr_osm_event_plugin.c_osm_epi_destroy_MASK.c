
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* plugin_name; int handle; int plugin_data; TYPE_1__* impl; } ;
typedef TYPE_2__ osm_epi_plugin_t ;
struct TYPE_5__ {int (* delete ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(osm_epi_plugin_t * VAR_0)
{
 if (VAR_0) {
  if (VAR_0->impl->delete)
   VAR_0->impl->delete(VAR_0->plugin_data);
  FUNC_0(VAR_0->handle);
  FUNC_1(VAR_0->plugin_name);
  FUNC_1(VAR_0);
 }
}
