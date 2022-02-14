
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {TYPE_2__* clients; struct ecore_conn_type_cfg* conn_cfg; } ;
struct ecore_conn_type_cfg {int cid_count; void* cids_per_vf; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
struct TYPE_3__ {int val; } ;
struct TYPE_4__ {TYPE_1__ p_size; } ;


 int FUNC_0 (struct ecore_hwfn*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 void* FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_3,
       enum protocol_type VAR_4,
       u32 VAR_5, u32 VAR_6)
{
 struct ecore_cxt_mngr *VAR_7 = VAR_3->p_cxt_mngr;
 struct ecore_conn_type_cfg *VAR_8 = &VAR_7->conn_cfg[VAR_4];

 VAR_8->cid_count = FUNC_2(VAR_5, VAR_0);
 VAR_8->cids_per_vf = FUNC_2(VAR_6, VAR_0);

 if (VAR_4 == VAR_2) {
  u32 VAR_9 = VAR_7->clients[VAR_1].p_size.val;
  u32 VAR_10 = FUNC_0(VAR_3);
  u32 VAR_11 = FUNC_1(VAR_9) / VAR_10;
  u32 VAR_12 = VAR_11 * VAR_0;

  VAR_8->cid_count = FUNC_2(VAR_8->cid_count, VAR_12);
 }
}
