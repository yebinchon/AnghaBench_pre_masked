
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct ecore_vf_info {int spoof_chk; int b_malicious; int shadow_config; scalar_t__ configured_features; int vport_id; int opaque_fid; int abs_vf_id; int vport_instance; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_vf_info*) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int ,int,int ) ;
 scalar_t__ FUNC_5 (struct ecore_vf_info*) ;
 scalar_t__ FUNC_6 (struct ecore_vf_info*) ;
 int FUNC_7 (struct ecore_hwfn*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ecore_hwfn *VAR_5,
     struct ecore_ptt *VAR_6,
     struct ecore_vf_info *VAR_7)
{
 u8 VAR_8 = VAR_4;
 enum _ecore_status_t VAR_9;

 FUNC_2(VAR_5, VAR_7);
 VAR_7->vport_instance--;
 VAR_7->spoof_chk = 0;

 if ((FUNC_5(VAR_7)) ||
     (FUNC_6(VAR_7))) {
  VAR_7->b_malicious = 1;
  FUNC_1(VAR_5,
     0, " VF [%02x] - considered malicious; Unable to stop RX/TX queuess\n",
     VAR_7->abs_vf_id);
  VAR_8 = VAR_3;
  goto out;
 }

 VAR_9 = FUNC_7(VAR_5, VAR_7->opaque_fid, VAR_7->vport_id);
 if (VAR_9 != VAR_1) {
  FUNC_0(VAR_5, "ecore_iov_vf_mbx_stop_vport returned error %d\n",
         VAR_9);
  VAR_8 = VAR_2;
 }


 VAR_7->configured_features = 0;
 FUNC_3(&VAR_7->shadow_config, 0, sizeof(VAR_7->shadow_config));

out:
 FUNC_4(VAR_5, VAR_6, VAR_7, VAR_0,
          sizeof(struct pfvf_def_resp_tlv), VAR_8);
}
