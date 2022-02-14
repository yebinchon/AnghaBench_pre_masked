
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {struct ecore_cid_acquired_map** acquired_vf; struct ecore_cid_acquired_map* acquired; struct ecore_conn_type_cfg* conn_cfg; } ;
struct ecore_conn_type_cfg {int cids_per_vf; scalar_t__ cid_count; } ;
struct ecore_cid_acquired_map {int cid_map; int max_count; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,size_t) ;

void FUNC_2(struct ecore_hwfn *VAR_4)
{
 struct ecore_cxt_mngr *VAR_5 = VAR_4->p_cxt_mngr;
 struct ecore_cid_acquired_map *VAR_6;
 struct ecore_conn_type_cfg *VAR_7;
 int VAR_8;
 u32 VAR_9;


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  u32 VAR_10;

  VAR_7 = &VAR_5->conn_cfg[VAR_8];
  if (VAR_7->cid_count) {
   VAR_6 = &VAR_5->acquired[VAR_8];
   VAR_9 = FUNC_0(VAR_6->max_count,
        VAR_0) *
         VAR_2;
   FUNC_1(VAR_6->cid_map, VAR_9);
  }

  if (!VAR_7->cids_per_vf)
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   VAR_6 = &VAR_5->acquired_vf[VAR_8][VAR_10];
   VAR_9 = FUNC_0(VAR_6->max_count,
        VAR_0) *
         VAR_2;
   FUNC_1(VAR_6->cid_map, VAR_9);
  }
 }
}
