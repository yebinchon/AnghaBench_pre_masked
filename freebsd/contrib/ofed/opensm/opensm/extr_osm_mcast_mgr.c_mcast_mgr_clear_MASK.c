
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int map_item; } ;
typedef TYPE_2__ osm_switch_t ;
struct TYPE_8__ {int p_log; TYPE_1__* p_subn; } ;
typedef TYPE_3__ osm_sm_t ;
typedef int osm_mcast_tbl_t ;
typedef int cl_qmap_t ;
struct TYPE_6__ {int sw_guid_tbl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(osm_sm_t * VAR_0, uint16_t VAR_1)
{
 osm_switch_t *VAR_2;
 cl_qmap_t *VAR_3;
 osm_mcast_tbl_t *VAR_4;

 FUNC_0(VAR_0->p_log);


 VAR_3 = &VAR_0->p_subn->sw_guid_tbl;
 VAR_2 = (osm_switch_t *) FUNC_3(VAR_3);
 while (VAR_2 != (osm_switch_t *) FUNC_2(VAR_3)) {
  VAR_4 = FUNC_6(VAR_2);
  FUNC_5(VAR_4, VAR_1);
  VAR_2 = (osm_switch_t *) FUNC_4(&VAR_2->map_item);
 }

 FUNC_1(VAR_0->p_log);
}
