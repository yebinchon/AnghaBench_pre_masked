
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {TYPE_2__* p_cxt_mngr; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
struct TYPE_4__ {TYPE_1__* conn_cfg; } ;
struct TYPE_3__ {int cid_count; int cids_per_vf; } ;



u32 FUNC_0(struct ecore_hwfn *VAR_0,
      enum protocol_type VAR_1,
      u32 *VAR_2)
{
 if (VAR_2)
  *VAR_2 = VAR_0->p_cxt_mngr->conn_cfg[VAR_1].cids_per_vf;

 return VAR_0->p_cxt_mngr->conn_cfg[VAR_1].cid_count;
}
