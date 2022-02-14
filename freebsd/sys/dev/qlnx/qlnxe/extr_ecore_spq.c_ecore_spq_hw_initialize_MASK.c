
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int p_phys_addr; } ;
struct ecore_spq {TYPE_2__ chain; int cid; } ;
struct ecore_hwfn {TYPE_5__* p_consq; int p_dev; } ;
struct ecore_cxt_info {struct e4_core_conn_context* p_cxt; int iid; } ;
struct TYPE_8__ {int consolid_base_addr; int spq_base_hi; int spq_base_lo; } ;
struct TYPE_6__ {int physical_q0; int flags9; int flags1; int flags10; } ;
struct e4_core_conn_context {TYPE_3__ xstorm_st_context; TYPE_1__ xstorm_ag_context; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_9__ {int p_phys_addr; } ;
struct TYPE_10__ {TYPE_4__ chain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ecore_hwfn*,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct e4_core_conn_context*,int) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_cxt_info*) ;
 int FUNC_10 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static void FUNC_11(struct ecore_hwfn *VAR_5,
        struct ecore_spq *VAR_6)
{
 struct e4_core_conn_context *VAR_7;
 struct ecore_cxt_info VAR_8;
 u16 VAR_9;
 enum _ecore_status_t VAR_10;

 VAR_8.iid = VAR_6->cid;

 VAR_10 = FUNC_9(VAR_5, &VAR_8);

 if (VAR_10 < 0) {
  FUNC_3(VAR_5, 1, "Cannot find context info for cid=%d\n",
     VAR_6->cid);
  return;
 }

 VAR_7 = VAR_8.p_cxt;


 FUNC_7(VAR_7, sizeof(*VAR_7));

 if (FUNC_5(VAR_5->p_dev) || FUNC_4(VAR_5->p_dev)) {
  FUNC_8(VAR_7->xstorm_ag_context.flags10,
     VAR_2, 1);
  FUNC_8(VAR_7->xstorm_ag_context.flags1,
     VAR_1, 1);


  FUNC_8(VAR_7->xstorm_ag_context.flags9,
     VAR_0, 1);
 } else {
  VAR_3;
 }




 VAR_9 = FUNC_10(VAR_5, VAR_4);
 VAR_7->xstorm_ag_context.physical_q0 = FUNC_6(VAR_9);

 VAR_7->xstorm_st_context.spq_base_lo =
  FUNC_1(VAR_6->chain.p_phys_addr);
 VAR_7->xstorm_st_context.spq_base_hi =
  FUNC_0(VAR_6->chain.p_phys_addr);

 FUNC_2(VAR_7->xstorm_st_context.consolid_base_addr,
         VAR_5->p_consq->chain.p_phys_addr);
}
