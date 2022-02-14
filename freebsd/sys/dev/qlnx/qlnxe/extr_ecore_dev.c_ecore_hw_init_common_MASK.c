
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ecore_qm_info {int pf_rl_en; int pf_wfq_en; int qm_port_params; int vport_wfq_en; int vport_rl_en; int max_phys_tcs_per_port; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {scalar_t__ rel_pf_id; TYPE_2__* mcp_info; struct ecore_dev* p_dev; struct ecore_qm_info qm_info; } ;
struct ecore_dev {int num_ports_in_engine; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {scalar_t__ bandwidth_min; scalar_t__ bandwidth_max; } ;
struct TYPE_4__ {TYPE_1__ func_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ecore_dev*) ;
 scalar_t__ FUNC_1 (struct ecore_dev*) ;
 scalar_t__ FUNC_2 (struct ecore_dev*) ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (struct ecore_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct ecore_hwfn*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_10 (struct ecore_dev*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int) ;
 int FUNC_12 (struct ecore_hwfn*,int ,int ,int,int,int ,int ,int ) ;
 scalar_t__ FUNC_13 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_15(struct ecore_hwfn *VAR_12,
       struct ecore_ptt *VAR_13,
       int VAR_14)
{
 struct ecore_qm_info *VAR_15 = &VAR_12->qm_info;
 struct ecore_dev *VAR_16 = VAR_12->p_dev;
 u8 VAR_17, VAR_18;
 u16 VAR_19, VAR_20;
 u32 VAR_21;
 enum _ecore_status_t VAR_22 = VAR_2;

 FUNC_10(VAR_16);


 FUNC_7(VAR_12, VAR_13);


 if (FUNC_0(VAR_16)) {
  VAR_22 = FUNC_8(VAR_12, VAR_13);
  if (VAR_22 != VAR_2)
   return VAR_22;
 }


 if (VAR_12->mcp_info) {
  if (VAR_12->mcp_info->func_info.bandwidth_max)
   VAR_15->pf_rl_en = 1;
  if (VAR_12->mcp_info->func_info.bandwidth_min)
   VAR_15->pf_wfq_en = 1;
 }

 FUNC_12(VAR_12,
    VAR_16->num_ports_in_engine,
    VAR_15->max_phys_tcs_per_port,
    VAR_15->pf_rl_en, VAR_15->pf_wfq_en,
    VAR_15->vport_rl_en, VAR_15->vport_wfq_en,
    VAR_15->qm_port_params);

 FUNC_5(VAR_12);

 FUNC_9(VAR_12, VAR_13);

 VAR_22 = FUNC_11(VAR_12, VAR_13, VAR_6, FUNC_3(VAR_12),
       VAR_14);
 if (VAR_22 != VAR_2)
  return VAR_22;




 FUNC_14(VAR_12, VAR_13, VAR_9, 0);
 FUNC_14(VAR_12, VAR_13, VAR_5, 1);

 if (FUNC_2(VAR_16)) {



  VAR_19 = FUNC_4(VAR_16);
  for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
   FUNC_6(VAR_12, VAR_13, VAR_20);
   FUNC_14(VAR_12, VAR_13, VAR_7, 0x0);
   FUNC_14(VAR_12, VAR_13, VAR_8, 0x0);
  }

  FUNC_6(VAR_12, VAR_13, VAR_12->rel_pf_id);
 }







 VAR_18 = FUNC_1(VAR_16) ? VAR_4 : VAR_3;
 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
  VAR_21 = FUNC_13(VAR_12, VAR_17);
  FUNC_6(VAR_12, VAR_13, (u16)VAR_21);
  FUNC_14(VAR_12, VAR_13, VAR_0, 0x1);
  FUNC_14(VAR_12, VAR_13, VAR_1, 0x0);
  FUNC_14(VAR_12, VAR_13, VAR_10, 0x1);
  FUNC_14(VAR_12, VAR_13, VAR_11, 0x0);
 }

 FUNC_6(VAR_12, VAR_13, VAR_12->rel_pf_id);

 return VAR_22;
}
