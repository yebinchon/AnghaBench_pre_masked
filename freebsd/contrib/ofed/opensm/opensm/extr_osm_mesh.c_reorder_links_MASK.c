
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int osm_log_t ;
typedef int mesh_t ;
struct TYPE_6__ {int num_switches; TYPE_1__* p_osm; } ;
typedef TYPE_2__ lash_t ;
struct TYPE_5__ {int log; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_3(lash_t *VAR_0, mesh_t *VAR_1)
{
 osm_log_t *VAR_2 = &VAR_0->p_osm->log;
 int VAR_3;
 int VAR_4 = VAR_0->num_switches;

 FUNC_0(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (FUNC_2(VAR_0, VAR_1, VAR_3)) {
   FUNC_1(VAR_2);
   return -1;
  }
 }

 FUNC_1(VAR_2);
 return 0;
}
