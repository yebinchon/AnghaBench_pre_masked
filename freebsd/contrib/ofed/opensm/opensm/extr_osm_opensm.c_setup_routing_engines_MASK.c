
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct osm_routing_engine {int dummy; } ;
struct TYPE_5__ {int default_routing_engine; } ;
typedef TYPE_1__ osm_opensm_t ;


 int FUNC_0 (TYPE_1__*,struct osm_routing_engine*) ;
 int FUNC_1 (char*) ;
 struct osm_routing_engine* FUNC_2 (TYPE_1__*,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*,char**) ;

__attribute__((used)) static void FUNC_5(osm_opensm_t *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 struct osm_routing_engine *VAR_5;

 if (VAR_1 && *VAR_1) {
  VAR_3 = FUNC_3(VAR_1);
  VAR_2 = FUNC_4(VAR_3, ", \t\n", &VAR_4);
  while (VAR_2 && *VAR_2) {
   VAR_5 = FUNC_2(VAR_0, VAR_2);
   if (VAR_5)
    FUNC_0(VAR_0, VAR_5);
   VAR_2 = FUNC_4(((void*)0), ", \t\n", &VAR_4);
  }
  FUNC_1(VAR_3);
 }
 if (!VAR_0->default_routing_engine)
  FUNC_2(VAR_0, "minhop");
}
