
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int osm_log_t ;
struct TYPE_8__ {void* class_count; void* class_type; } ;
typedef TYPE_2__ mesh_t ;
struct TYPE_9__ {int num_switches; TYPE_1__* p_osm; } ;
typedef TYPE_3__ lash_t ;
struct TYPE_7__ {int log; } ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static mesh_t *FUNC_3(lash_t *VAR_1)
{
 osm_log_t *VAR_2 = &VAR_1->p_osm->log;
 mesh_t *VAR_3;

 if(!(VAR_3 = FUNC_1(1, sizeof(mesh_t))))
  goto err;

 if (!(VAR_3->class_type = FUNC_1(VAR_1->num_switches, sizeof(int))))
  goto err;

 if (!(VAR_3->class_count = FUNC_1(VAR_1->num_switches, sizeof(int))))
  goto err;

 return VAR_3;

err:
 FUNC_2(VAR_3);
 FUNC_0(VAR_2, VAR_0,
  "Failed allocating mesh - out of memory\n");
 return ((void*)0);
}
