
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef int u16 ;
struct TYPE_2__ {int req_phys; int pending_req; } ;
struct ecore_vf_info {TYPE_1__ vf_mbx; int abs_vf_id; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dmae_params {int flags; int src_vfid; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ecore_dmae_params*,int ,int) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int,struct ecore_dmae_params*) ;
 struct ecore_vf_info* FUNC_3 (struct ecore_hwfn*,int ,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_6,
        struct ecore_ptt *VAR_7,
        int VAR_8)
{
 struct ecore_dmae_params VAR_9;
 struct ecore_vf_info *VAR_10;

 VAR_10 = FUNC_3(VAR_6, (u16)VAR_8, 1);
 if (!VAR_10)
  return VAR_2;

 FUNC_1(&VAR_9, 0, sizeof(struct ecore_dmae_params));
 VAR_9.flags = VAR_1 |
         VAR_0;
 VAR_9.src_vfid = VAR_10->abs_vf_id;

 if (FUNC_2(VAR_6, VAR_7,
     VAR_10->vf_mbx.pending_req,
     VAR_10->vf_mbx.req_phys,
     sizeof(union vfpf_tlvs) / 4,
     &VAR_9)) {
  FUNC_0(VAR_6, VAR_4,
      "Failed to copy message from VF 0x%02x\n",
      VAR_8);

  return VAR_3;
 }

 return VAR_5;
}
