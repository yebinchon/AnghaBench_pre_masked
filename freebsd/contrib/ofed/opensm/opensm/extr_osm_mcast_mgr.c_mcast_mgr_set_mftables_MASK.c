
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ mft_block_num; scalar_t__ mft_position; int map_item; } ;
typedef TYPE_2__ osm_switch_t ;
struct TYPE_15__ {TYPE_1__* p_subn; } ;
typedef TYPE_3__ osm_sm_t ;
struct TYPE_16__ {scalar_t__ max_position; } ;
typedef TYPE_4__ osm_mcast_tbl_t ;
typedef scalar_t__ int16_t ;
typedef int cl_qmap_t ;
struct TYPE_13__ {int sw_guid_tbl; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(osm_sm_t * VAR_0)
{
 cl_qmap_t *VAR_1 = &VAR_0->p_subn->sw_guid_tbl;
 osm_switch_t *VAR_2;
 osm_mcast_tbl_t *VAR_3;
 int VAR_4, VAR_5 = 0;
 int16_t VAR_6, VAR_7 = -1;

 VAR_2 = (osm_switch_t *) FUNC_1(VAR_1);
 while (VAR_2 != (osm_switch_t *) FUNC_0(VAR_1)) {
  VAR_2->mft_block_num = 0;
  VAR_2->mft_position = 0;
  VAR_3 = FUNC_6(VAR_2);
  if (FUNC_5(VAR_3) > VAR_7)
   VAR_7 = FUNC_5(VAR_3);
  FUNC_4(VAR_0, VAR_2);
  VAR_2 = (osm_switch_t *) FUNC_2(&VAR_2->map_item);
 }


 for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++) {
  VAR_4 = 1;
  while (VAR_4) {
   VAR_4 = 0;
   VAR_2 = (osm_switch_t *) FUNC_1(VAR_1);
   while (VAR_2 != (osm_switch_t *) FUNC_0(VAR_1)) {
    if (VAR_2->mft_block_num == VAR_6) {
     VAR_4 = 1;
     if (FUNC_3(VAR_0, VAR_2,
            VAR_2->mft_block_num,
            VAR_2->mft_position))
      VAR_5 = -1;
     VAR_3 = FUNC_6(VAR_2);
     if (++VAR_2->mft_position > VAR_3->max_position) {
      VAR_2->mft_position = 0;
      VAR_2->mft_block_num++;
     }
    }
    VAR_2 = (osm_switch_t *) FUNC_2(&VAR_2->map_item);
   }
  }
 }

 return VAR_5;
}
