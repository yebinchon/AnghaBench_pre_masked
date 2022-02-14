
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int map_item; } ;
typedef TYPE_1__ osm_switch_t ;
struct TYPE_10__ {int sw_guid_tbl; } ;
struct TYPE_9__ {int lock; TYPE_4__ subn; } ;
typedef TYPE_2__ osm_opensm_t ;
typedef int cl_qmap_t ;
typedef int FILE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int *) ;
 char* FUNC_9 (char**) ;
 TYPE_1__* FUNC_10 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_11 (char*,char**,int ) ;

__attribute__((used)) static void FUNC_12(char **VAR_0, osm_opensm_t * VAR_1, FILE * VAR_2)
{
 char *VAR_3;
 uint64_t VAR_4 = 0;
 osm_switch_t *VAR_5;

 VAR_3 = FUNC_9(VAR_0);
 if (VAR_3) {
  char *VAR_6;

  VAR_4 = FUNC_11(VAR_3, &VAR_6, 0);
  if (!VAR_4 || *VAR_6 != '\0') {
   FUNC_6(VAR_2, "Invalid switchguid specified\n");
   FUNC_7(VAR_2, 1);
   return;
  }
 }

 FUNC_1(&VAR_1->lock);
 if (VAR_4) {
  VAR_5 = FUNC_10(&VAR_1->subn, FUNC_0(VAR_4));
  if (!VAR_5) {
   FUNC_6(VAR_2, "switchguid not found\n");
   goto lock_exit;
  }
  FUNC_8(VAR_1, VAR_5, VAR_2);
 } else {
  cl_qmap_t *VAR_7 = &VAR_1->subn.sw_guid_tbl;
  for (VAR_5 = (osm_switch_t *) FUNC_4(VAR_7);
       VAR_5 != (osm_switch_t *) FUNC_3(VAR_7);
       VAR_5 = (osm_switch_t *) FUNC_5(&VAR_5->map_item))
   FUNC_8(VAR_1, VAR_5, VAR_2);
 }

lock_exit:
 FUNC_2(&VAR_1->lock);
 return;
}
