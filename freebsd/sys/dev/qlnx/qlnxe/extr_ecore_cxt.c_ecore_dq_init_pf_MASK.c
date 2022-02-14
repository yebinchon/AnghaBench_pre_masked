
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {TYPE_1__* conn_cfg; } ;
struct TYPE_2__ {int cid_count; int cids_per_vf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ecore_hwfn*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_17)
{
 struct ecore_cxt_mngr *VAR_18 = VAR_17->p_cxt_mngr;
 u32 VAR_19 = 0, VAR_20 = 0;

 VAR_19 += (VAR_18->conn_cfg[0].cid_count >> VAR_16);
 FUNC_0(VAR_17, VAR_0, VAR_19);

 VAR_20 += (VAR_18->conn_cfg[0].cids_per_vf >> VAR_16);
 FUNC_0(VAR_17, VAR_8, VAR_20);

 VAR_19 += (VAR_18->conn_cfg[1].cid_count >> VAR_16);
 FUNC_0(VAR_17, VAR_1, VAR_19);

 VAR_20 += (VAR_18->conn_cfg[1].cids_per_vf >> VAR_16);
 FUNC_0(VAR_17, VAR_9, VAR_20);

 VAR_19 += (VAR_18->conn_cfg[2].cid_count >> VAR_16);
 FUNC_0(VAR_17, VAR_2, VAR_19);

 VAR_20 += (VAR_18->conn_cfg[2].cids_per_vf >> VAR_16);
 FUNC_0(VAR_17, VAR_10, VAR_20);

 VAR_19 += (VAR_18->conn_cfg[3].cid_count >> VAR_16);
 FUNC_0(VAR_17, VAR_3, VAR_19);

 VAR_20 += (VAR_18->conn_cfg[3].cids_per_vf >> VAR_16);
 FUNC_0(VAR_17, VAR_11, VAR_20);

 VAR_19 += (VAR_18->conn_cfg[4].cid_count >> VAR_16);
 FUNC_0(VAR_17, VAR_4, VAR_19);

 VAR_20 += (VAR_18->conn_cfg[4].cids_per_vf >> VAR_16);
 FUNC_0(VAR_17, VAR_12, VAR_20);

 VAR_19 += (VAR_18->conn_cfg[5].cid_count >> VAR_16);
 FUNC_0(VAR_17, VAR_5, VAR_19);

 VAR_20 += (VAR_18->conn_cfg[5].cids_per_vf >> VAR_16);
 FUNC_0(VAR_17, VAR_13, VAR_20);







 FUNC_0(VAR_17, VAR_6, VAR_19);
 FUNC_0(VAR_17, VAR_14, VAR_20);

 FUNC_0(VAR_17, VAR_7, VAR_19);
 FUNC_0(VAR_17, VAR_15, VAR_20);
}
