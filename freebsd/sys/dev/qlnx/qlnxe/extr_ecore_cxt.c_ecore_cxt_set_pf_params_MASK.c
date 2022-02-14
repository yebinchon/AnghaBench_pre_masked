
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ecore_iscsi_pf_params {int num_cons; int num_tasks; } ;
struct ecore_fcoe_pf_params {int num_cons; int num_tasks; } ;
struct ecore_eth_pf_params {int num_cons; int num_arfs_filters; int num_vf_cons; } ;
struct TYPE_7__ {struct ecore_iscsi_pf_params iscsi_pf_params; struct ecore_fcoe_pf_params fcoe_pf_params; struct ecore_eth_pf_params eth_pf_params; int rdma_pf_params; } ;
struct TYPE_5__ {int personality; } ;
struct ecore_hwfn {TYPE_4__* p_dev; TYPE_3__ pf_params; TYPE_2__* p_cxt_mngr; TYPE_1__ hw_info; scalar_t__ using_ll2; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_8__ {int mf_bits; } ;
struct TYPE_6__ {int arfs_count; } ;


 int FUNC_0 (TYPE_4__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ecore_hwfn*,int ,int,int ) ;
 int FUNC_3 (struct ecore_hwfn*,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,int *,int) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_10,
          u32 VAR_11)
{

 u32 VAR_12 = 1;

 if (VAR_10->using_ll2)
  VAR_12 += 4;

 FUNC_2(VAR_10, VAR_6, VAR_12, 0);

 switch (VAR_10->hw_info.personality) {
 case 131:
 case 132:
 case 130:
 {
  FUNC_4(VAR_10,
      &VAR_10->pf_params.rdma_pf_params,
      VAR_11);


 }
 case 133:
 {
  u32 VAR_13 = 0;

  struct ecore_eth_pf_params *VAR_14 =
     &VAR_10->pf_params.eth_pf_params;

  if (!VAR_14->num_vf_cons)
   VAR_14->num_vf_cons = VAR_5;
  FUNC_2(VAR_10, VAR_7,
           VAR_14->num_cons,
           VAR_14->num_vf_cons);

  VAR_13 = VAR_14->num_arfs_filters;

  if (!FUNC_1(VAR_3,
       &VAR_10->p_dev->mf_bits))
   VAR_10->p_cxt_mngr->arfs_count = VAR_13;

  break;
 }
 case 129:
 {
  struct ecore_fcoe_pf_params *VAR_15;

  VAR_15 = &VAR_10->pf_params.fcoe_pf_params;

  if (VAR_15->num_cons && VAR_15->num_tasks) {
   FUNC_2(VAR_10, VAR_8,
            VAR_15->num_cons, 0);

   FUNC_3(VAR_10, VAR_8,
            VAR_0,
            0,
            VAR_15->num_tasks,
            1);
  } else {
   FUNC_0(VAR_10->p_dev,
    "Fcoe personality used without setting params!\n");
  }
  break;
 }
 case 128:
 {
  struct ecore_iscsi_pf_params *VAR_16;

  VAR_16 = &VAR_10->pf_params.iscsi_pf_params;

  if (VAR_16->num_cons && VAR_16->num_tasks) {
   FUNC_2(VAR_10, VAR_9,
            VAR_16->num_cons, 0);

   FUNC_3(VAR_10, VAR_9,
            VAR_1,
            0,
            VAR_16->num_tasks,
            1);
  } else {
   FUNC_0(VAR_10->p_dev,
    "Iscsi personality used without setting params!\n");
  }
  break;
 }
 default:
  return VAR_2;
 }

 return VAR_4;
}
