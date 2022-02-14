
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct routing_engine_module {char const* name; scalar_t__ (* setup ) (struct osm_routing_engine*,TYPE_1__*) ;} ;
struct osm_routing_engine {char const* name; scalar_t__ type; } ;
struct TYPE_4__ {int log; struct osm_routing_engine* default_routing_engine; int no_fallback_routing_engine; } ;
typedef TYPE_1__ osm_opensm_t ;


 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct osm_routing_engine*) ;
 struct osm_routing_engine* FUNC_2 (int) ;
 int FUNC_3 (struct osm_routing_engine*,int ,int) ;
 scalar_t__ FUNC_4 (char const*) ;
 struct routing_engine_module* VAR_5 ;
 int FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (struct osm_routing_engine*,TYPE_1__*) ;

__attribute__((used)) static struct osm_routing_engine *FUNC_7(osm_opensm_t *VAR_6,
             const char *VAR_7)
{
 struct osm_routing_engine *VAR_8;
 const struct routing_engine_module *VAR_9;

 if (!FUNC_5(VAR_7, "no_fallback")) {
  VAR_6->no_fallback_routing_engine = VAR_4;
  return ((void*)0);
 }

 for (VAR_9 = VAR_5; VAR_9->name && *VAR_9->name; VAR_9++) {
  if (!FUNC_5(VAR_9->name, VAR_7)) {
   VAR_8 = FUNC_2(sizeof(struct osm_routing_engine));
   if (!VAR_8) {
    FUNC_0(&VAR_6->log, VAR_2,
     "memory allocation failed\n");
    return ((void*)0);
   }
   FUNC_3(VAR_8, 0, sizeof(struct osm_routing_engine));

   VAR_8->name = VAR_9->name;
   VAR_8->type = FUNC_4(VAR_9->name);
   if (VAR_9->setup(VAR_8, VAR_6)) {
    FUNC_0(&VAR_6->log, VAR_2,
     "setup of routing"
     " engine \'%s\' failed\n", VAR_7);
    FUNC_1(VAR_8);
    return ((void*)0);
   }
   FUNC_0(&VAR_6->log, VAR_0,
    "\'%s\' routing engine set up\n", VAR_8->name);
   if (VAR_8->type == VAR_3)
    VAR_6->default_routing_engine = VAR_8;
   return VAR_8;
  }
 }

 FUNC_0(&VAR_6->log, VAR_1,
  "cannot find or setup routing engine \'%s\'\n", VAR_7);
 return ((void*)0);
}
