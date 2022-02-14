
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ecore_cxt_mngr {TYPE_1__* conn_cfg; } ;
struct ecore_cdu_iids {int per_vf_cids; int pf_cids; } ;
struct TYPE_2__ {scalar_t__ cids_per_vf; scalar_t__ cid_count; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ecore_cxt_mngr *VAR_1,
          struct ecore_cdu_iids *VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->pf_cids += VAR_1->conn_cfg[VAR_3].cid_count;
  VAR_2->per_vf_cids += VAR_1->conn_cfg[VAR_3].cids_per_vf;
 }
}
