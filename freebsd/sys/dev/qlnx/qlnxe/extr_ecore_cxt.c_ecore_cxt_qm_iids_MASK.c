
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ecore_tid_seg {scalar_t__ count; } ;
struct ecore_qm_iids {size_t tids; size_t vf_cids; int cids; } ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {size_t vf_count; TYPE_1__* conn_cfg; } ;
struct TYPE_2__ {struct ecore_tid_seg* tid_seg; scalar_t__ cids_per_vf; scalar_t__ cid_count; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,size_t,size_t,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_3,
         struct ecore_qm_iids *VAR_4)
{
 struct ecore_cxt_mngr *VAR_5 = VAR_3->p_cxt_mngr;
 struct ecore_tid_seg *VAR_6;
 u32 VAR_7 = 0, VAR_8, VAR_9;
 u32 VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_4->cids += VAR_5->conn_cfg[VAR_8].cid_count;
  VAR_7 += VAR_5->conn_cfg[VAR_8].cids_per_vf;

  VAR_6 = VAR_5->conn_cfg[VAR_8].tid_seg;



  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   VAR_4->tids += VAR_6[VAR_9].count;





  VAR_10 += VAR_6[VAR_2].count;
 }

 VAR_4->vf_cids += VAR_7 * VAR_5->vf_count;
 VAR_4->tids += VAR_10 * VAR_5->vf_count;

 FUNC_0(VAR_3, VAR_0,
     "iids: CIDS %08x vf_cids %08x tids %08x vf_tids %08x\n",
     VAR_4->cids, VAR_4->vf_cids, VAR_4->tids, VAR_10);
}
