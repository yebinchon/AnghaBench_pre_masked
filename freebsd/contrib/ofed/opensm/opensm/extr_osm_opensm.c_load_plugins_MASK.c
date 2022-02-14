
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int plugin_list; int log; } ;
typedef TYPE_1__ osm_opensm_t ;
struct TYPE_7__ {int list; } ;
typedef TYPE_2__ osm_epi_plugin_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *,int ,int ,char*,char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char*,char**) ;

__attribute__((used)) static void FUNC_6(osm_opensm_t *VAR_2, const char *VAR_3)
{
 osm_epi_plugin_t *VAR_4;
 char *VAR_5, *VAR_6, *VAR_7;

 VAR_5 = FUNC_4(VAR_3);
 VAR_6 = FUNC_5(VAR_5, ", \t\n", &VAR_7);
 while (VAR_6 && *VAR_6) {
  VAR_4 = FUNC_2(VAR_2, VAR_6);
  if (!VAR_4)
   FUNC_3(&VAR_2->log, VAR_1, VAR_0,
       "ERR 1000: cannot load plugin \'%s\'\n",
       VAR_6);
  else
   FUNC_0(&VAR_2->plugin_list, &VAR_4->list);
  VAR_6 = FUNC_5(((void*)0), " \t\n", &VAR_7);
 }
 FUNC_1(VAR_5);
}
