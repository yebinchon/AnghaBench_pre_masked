
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vf_info {int spoof_chk; int req_spoofchk_val; int relative_vf_id; int vport_id; int opaque_fid; } ;
struct ecore_sp_vport_update_params {int update_anti_spoofing_en_flg; int anti_spoofing_en; int vport_id; int opaque_fid; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_sp_vport_update_params*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,int ,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_4,
           struct ecore_vf_info *VAR_5, bool VAR_6)
{
 struct ecore_sp_vport_update_params VAR_7;
 enum _ecore_status_t VAR_8;

 if (VAR_6 == VAR_5->spoof_chk) {
  FUNC_0(VAR_4, VAR_0,
      "Spoofchk value[%d] is already configured\n",
      VAR_6);
  return VAR_2;
 }

 FUNC_1(&VAR_7, 0, sizeof(struct ecore_sp_vport_update_params));
 VAR_7.opaque_fid = VAR_5->opaque_fid;
 VAR_7.vport_id = VAR_5->vport_id;
 VAR_7.update_anti_spoofing_en_flg = 1;
 VAR_7.anti_spoofing_en = VAR_6;

 VAR_8 = FUNC_2(VAR_4, &VAR_7, VAR_1,
       VAR_3);
 if (VAR_8 == VAR_2) {
  VAR_5->spoof_chk = VAR_6;
  VAR_5->req_spoofchk_val = VAR_5->spoof_chk;
  FUNC_0(VAR_4, VAR_0,
      "Spoofchk val[%d] configured\n", VAR_6);
 } else {
  FUNC_0(VAR_4, VAR_0,
      "Spoofchk configuration[val:%d] failed for VF[%d]\n",
      VAR_6, VAR_5->relative_vf_id);
 }

 return VAR_8;
}
