
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct osm_routing_engine {int (* build_lid_matrices ) (int ) ;int (* ucast_build_fwd_tables ) (int ) ;int name; int context; } ;
struct TYPE_8__ {int ucast_mgr; } ;
struct TYPE_6__ {scalar_t__ scatter_ports; } ;
struct TYPE_7__ {TYPE_1__ opt; } ;
struct TYPE_9__ {TYPE_3__ sm; struct osm_routing_engine* routing_engine_used; int log; TYPE_2__ subn; } ;
typedef TYPE_4__ osm_opensm_t ;


 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct osm_routing_engine *VAR_2, osm_opensm_t * VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_3->log, VAR_1,
  "building routing with \'%s\' routing algorithm...\n", VAR_2->name);


 if (VAR_3->subn.opt.scatter_ports)
  FUNC_3(VAR_3->subn.opt.scatter_ports);

 if (!VAR_2->build_lid_matrices ||
     (VAR_4 = VAR_2->build_lid_matrices(VAR_2->context)) > 0)
  VAR_4 = FUNC_1(&VAR_3->sm.ucast_mgr);

 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->log, VAR_0,
   "%s: cannot build lid matrices\n", VAR_2->name);
  return VAR_4;
 }

 if (!VAR_2->ucast_build_fwd_tables ||
     (VAR_4 = VAR_2->ucast_build_fwd_tables(VAR_2->context)) > 0)
  VAR_4 = FUNC_6(&VAR_3->sm.ucast_mgr);

 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->log, VAR_0,
   "%s: cannot build fwd tables\n", VAR_2->name);
  return VAR_4;
 }

 VAR_3->routing_engine_used = VAR_2;

 FUNC_2(&VAR_3->sm.ucast_mgr);

 return 0;
}
