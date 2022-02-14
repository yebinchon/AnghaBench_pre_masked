
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct storm_defs {int cm_task_st_ctx_rd_addr; int cm_task_st_ctx_lid_size; int cm_task_ag_ctx_rd_addr; int cm_task_ag_ctx_lid_size; int cm_conn_st_ctx_rd_addr; int cm_conn_st_ctx_lid_size; int cm_conn_ag_ctx_rd_addr; int cm_conn_ag_ctx_lid_size; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,char*,int ,int ,int ,size_t) ;
 int FUNC_1 (struct ecore_hwfn*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int) ;
 struct storm_defs* VAR_3 ;

__attribute__((used)) static u32 FUNC_3(struct ecore_hwfn *VAR_4,
         struct ecore_ptt *VAR_5,
         u32 *VAR_6,
         bool VAR_7)
{
 u32 VAR_8 = 0;
 u8 VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  struct storm_defs *VAR_10 = &VAR_3[VAR_9];

  if (!FUNC_2(VAR_4, (enum dbg_storms)VAR_9))
   continue;


  VAR_8 += FUNC_0(VAR_4, VAR_5, VAR_6 + VAR_8, VAR_7, "CONN_AG_CTX", FUNC_1(VAR_4, VAR_0),
   VAR_10->cm_conn_ag_ctx_lid_size, VAR_10->cm_conn_ag_ctx_rd_addr, VAR_9);


  VAR_8 += FUNC_0(VAR_4, VAR_5, VAR_6 + VAR_8, VAR_7, "CONN_ST_CTX", FUNC_1(VAR_4, VAR_0),
   VAR_10->cm_conn_st_ctx_lid_size, VAR_10->cm_conn_st_ctx_rd_addr, VAR_9);


  VAR_8 += FUNC_0(VAR_4, VAR_5, VAR_6 + VAR_8, VAR_7, "TASK_AG_CTX", FUNC_1(VAR_4, VAR_1),
   VAR_10->cm_task_ag_ctx_lid_size, VAR_10->cm_task_ag_ctx_rd_addr, VAR_9);


  VAR_8 += FUNC_0(VAR_4, VAR_5, VAR_6 + VAR_8, VAR_7, "TASK_ST_CTX", FUNC_1(VAR_4, VAR_1),
   VAR_10->cm_task_st_ctx_lid_size, VAR_10->cm_task_st_ctx_rd_addr, VAR_9);
 }

 return VAR_8;
}
