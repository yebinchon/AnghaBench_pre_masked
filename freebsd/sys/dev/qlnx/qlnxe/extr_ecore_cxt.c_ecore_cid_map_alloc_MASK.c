
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {struct ecore_cid_acquired_map** acquired_vf; struct ecore_cid_acquired_map* acquired; struct ecore_conn_type_cfg* conn_cfg; } ;
struct ecore_conn_type_cfg {scalar_t__ cids_per_vf; scalar_t__ cid_count; } ;
struct ecore_cid_acquired_map {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct ecore_hwfn*,size_t,size_t,scalar_t__,struct ecore_cid_acquired_map*) ;
 int FUNC_1 (struct ecore_hwfn*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_4)
{
 struct ecore_cxt_mngr *VAR_5 = VAR_4->p_cxt_mngr;
 u32 VAR_6 = 0, VAR_7 = 0;
 u32 VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct ecore_conn_type_cfg *VAR_10 = &VAR_5->conn_cfg[VAR_8];
  struct ecore_cid_acquired_map *VAR_11;


  VAR_11 = &VAR_5->acquired[VAR_8];
  if (FUNC_0(VAR_4, VAR_8, VAR_6,
            VAR_10->cid_count, VAR_11))
   goto cid_map_fail;


  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_11 = &VAR_5->acquired_vf[VAR_8][VAR_9];
   if (FUNC_0(VAR_4, VAR_8,
             VAR_7,
             VAR_10->cids_per_vf,
             VAR_11))
    goto cid_map_fail;
  }

  VAR_6 += VAR_10->cid_count;
  VAR_7 += VAR_10->cids_per_vf;
 }

 return VAR_2;

cid_map_fail:
 FUNC_1(VAR_4);
 return VAR_1;
}
