
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int p_log; int cache_valid; TYPE_2__* p_subn; } ;
typedef TYPE_3__ osm_ucast_mgr_t ;
struct TYPE_11__ {int max_lid_ho; int lft_size; scalar_t__ lft; int new_lft; } ;
typedef TYPE_4__ osm_switch_t ;
typedef int cl_qmap_t ;
typedef int cl_map_item_t ;
struct TYPE_8__ {int use_ucast_cache; } ;
struct TYPE_9__ {TYPE_1__ opt; int sw_guid_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

int FUNC_9(osm_ucast_mgr_t * VAR_4)
{
 cl_qmap_t *VAR_5 = &VAR_4->p_subn->sw_guid_tbl;
 cl_map_item_t *VAR_6;
 osm_switch_t *VAR_7;
 uint16_t VAR_8;

 if (!VAR_4->p_subn->opt.use_ucast_cache)
  return 1;

 FUNC_8(VAR_4);
 if (!VAR_4->cache_valid)
  return 1;

 FUNC_1(VAR_4->p_log, VAR_2,
  "Configuring switch tables using cached routing\n");

 for (VAR_6 = FUNC_3(VAR_5); VAR_6 != FUNC_2(VAR_5);
      VAR_6 = FUNC_4(VAR_6)) {
  VAR_7 = (osm_switch_t *) VAR_6;
  FUNC_0(VAR_7->new_lft);
  if (!VAR_7->lft) {
   VAR_8 = (VAR_7->max_lid_ho / VAR_1 + 1)
       * VAR_1;
   VAR_7->lft = FUNC_5(VAR_8);
   if (!VAR_7->lft)
    return VAR_0;
   VAR_7->lft_size = VAR_8;
   FUNC_6(VAR_7->lft, VAR_3, VAR_7->lft_size);
  }

 }

 FUNC_7(VAR_4);

 return 0;
}
