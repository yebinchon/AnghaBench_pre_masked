
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ecore_iov_vf_mbx {int dummy; } ;
struct ecore_vf_info {int relative_vf_id; int vport_id; int opaque_fid; int abs_vf_id; int vport_instance; struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_sp_vport_update_params {struct ecore_rss_params* rss_params; int vport_id; int opaque_fid; } ;
struct ecore_sge_tpa_params {int dummy; } ;
struct ecore_rss_params {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef int params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,int ,struct ecore_sp_vport_update_params*,scalar_t__*) ;
 int FUNC_2 (struct ecore_sp_vport_update_params*,int ,int) ;
 struct ecore_rss_params* VAR_3 ;
 int FUNC_3 (int ,struct ecore_rss_params*) ;
 struct ecore_rss_params* FUNC_4 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct ecore_hwfn*,struct ecore_vf_info*,struct ecore_iov_vf_mbx*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,scalar_t__,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,struct ecore_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,struct ecore_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,struct ecore_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,struct ecore_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_vf_info*,struct ecore_sp_vport_update_params*,struct ecore_rss_params*,struct ecore_iov_vf_mbx*,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,struct ecore_sge_tpa_params*,struct ecore_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,struct ecore_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,struct ecore_vf_info*,struct ecore_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,int ,struct ecore_rss_params*) ;

__attribute__((used)) static void FUNC_16(struct ecore_hwfn *VAR_7,
       struct ecore_ptt *VAR_8,
       struct ecore_vf_info *VAR_9)
{
 struct ecore_rss_params *VAR_10 = VAR_3;
 struct ecore_sp_vport_update_params VAR_11;
 struct ecore_iov_vf_mbx *VAR_12 = &VAR_9->vf_mbx;
 struct ecore_sge_tpa_params VAR_13;
 u16 VAR_14 = 0, VAR_15 = 0;
 u8 VAR_16 = VAR_6;
 u16 VAR_17;
 enum _ecore_status_t VAR_18;


 if (!VAR_9->vport_instance) {
  FUNC_0(VAR_7, VAR_0,
      "No VPORT instance available for VF[%d], failing vport update\n",
      VAR_9->abs_vf_id);
  VAR_16 = VAR_4;
  goto out;
 }

 VAR_10 = FUNC_4(VAR_7->p_dev, sizeof(*VAR_10));
 if (VAR_10 == VAR_3) {
  VAR_16 = VAR_4;
  goto out;
 }

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.opaque_fid = VAR_9->opaque_fid;
 VAR_11.vport_id = VAR_9->vport_id;
 VAR_11.rss_params = VAR_3;




 FUNC_9(VAR_7, &VAR_11, VAR_12, &VAR_14);
 FUNC_14(VAR_7, &VAR_11, VAR_9, VAR_12, &VAR_14);
 FUNC_13(VAR_7, &VAR_11, VAR_12, &VAR_14);
 FUNC_10(VAR_7, &VAR_11, VAR_12, &VAR_14);
 FUNC_8(VAR_7, &VAR_11, VAR_12, &VAR_14);
 FUNC_7(VAR_7, &VAR_11, VAR_12, &VAR_14);
 FUNC_12(VAR_7, &VAR_11,
       &VAR_13, VAR_12, &VAR_14);

 VAR_15 = VAR_14;





 FUNC_11(VAR_7, VAR_9, &VAR_11, VAR_10,
          VAR_12, &VAR_14, &VAR_15);






 if (FUNC_1(VAR_7, VAR_9->relative_vf_id,
         &VAR_11, &VAR_15) !=
     VAR_2) {
  VAR_15 = 0;
  VAR_16 = VAR_5;
  goto out;
 }

 if (!VAR_15) {
  if (VAR_14)
   FUNC_0(VAR_7, VAR_0,
       "Upper-layer prevents said VF configuration\n");
  else
   FUNC_0(VAR_7, VAR_0,
       "No feature tlvs found for vport update\n");
  VAR_16 = VAR_5;
  goto out;
 }

 VAR_18 = FUNC_15(VAR_7, &VAR_11, VAR_1,
       VAR_3);

 if (VAR_18)
  VAR_16 = VAR_4;

out:
 FUNC_3(VAR_7->p_dev, VAR_10);
 VAR_17 = FUNC_5(VAR_7, VAR_9, VAR_12, VAR_16,
          VAR_14, VAR_15);
 FUNC_6(VAR_7, VAR_8, VAR_9, VAR_17, VAR_16);
}
