
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* p_subn; int p_log; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
struct TYPE_5__ {int sw_guid_tbl; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (void*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (void*) ;
 int VAR_1 ;
 int FUNC_5 (void**) ;
 void** FUNC_6 (int) ;
 int FUNC_7 (void**,int,int,int ) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static void FUNC_9(osm_ucast_mgr_t * VAR_2)
{
 int VAR_3, VAR_4 = FUNC_2(&VAR_2->p_subn->sw_guid_tbl);
 void **VAR_5 = FUNC_6(VAR_4 * sizeof(*VAR_5));
 if (!VAR_5) {
  FUNC_0(VAR_2->p_log, VAR_0, "ERR 3A0C: "
   "No memory, skip by switch load sorting.\n");
  return;
 }
 VAR_5[0] = FUNC_3(&VAR_2->p_subn->sw_guid_tbl);
 for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3++)
  VAR_5[VAR_3] = FUNC_4(VAR_5[VAR_3 - 1]);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_8(VAR_5[VAR_3]);

 FUNC_7(VAR_5, VAR_4, sizeof(*VAR_5), VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_1(VAR_5[VAR_3], VAR_2);
 FUNC_5(VAR_5);
}
