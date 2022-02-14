
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int type; } ;
struct TYPE_12__ {TYPE_5__ tl; } ;
union vfpf_tlvs {TYPE_6__ first_tlv; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_8__ {int hi; int lo; } ;
struct TYPE_9__ {TYPE_2__ vf_pf_msg_addr; } ;
struct ustorm_vf_zone {int trigger; TYPE_3__ non_trigger; } ;
struct ustorm_trigger_vf_zone {int vf_pf_msg_valid; } ;
struct TYPE_7__ {int concrete_fid; } ;
struct ecore_hwfn {int p_dev; TYPE_4__* vf_iov_info; TYPE_1__ hw_info; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef int osal_uintptr_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_10__ {int vf2pf_request_phys; int pf2vf_reply; int b_hw_channel; union vfpf_tlvs* vf2pf_request; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__,...) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,scalar_t__,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ustorm_trigger_vf_zone*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__*,union vfpf_tlvs*,int ,int,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (struct ecore_hwfn*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ecore_hwfn*,union vfpf_tlvs*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_11(struct ecore_hwfn *VAR_7,
    u8 *VAR_8, u32 VAR_9)
{
 union vfpf_tlvs *VAR_10 = VAR_7->vf_iov_info->vf2pf_request;
 struct ustorm_trigger_vf_zone VAR_11;
 struct ustorm_vf_zone *VAR_12;
 enum _ecore_status_t VAR_13 = VAR_1;
 int VAR_14 = 100;

 VAR_12 = (struct ustorm_vf_zone *)VAR_6;


 FUNC_10(VAR_7, VAR_10);


 VAR_9 += sizeof(struct channel_list_end_tlv);
 FUNC_3(&VAR_11, 0, sizeof(struct ustorm_trigger_vf_zone));
 VAR_11.vf_pf_msg_valid = 1;

 FUNC_1(VAR_7, VAR_0,
     "VF -> PF [%02x] message: [%08x, %08x] --> %p, %08x --> %p\n",
     FUNC_2(VAR_7->hw_info.concrete_fid,
        VAR_5),
     FUNC_8(VAR_7->vf_iov_info->vf2pf_request_phys),
     FUNC_9(VAR_7->vf_iov_info->vf2pf_request_phys),
     &VAR_12->non_trigger.vf_pf_msg_addr,
     *((u32 *)&VAR_11),
     &VAR_12->trigger);

 FUNC_7(VAR_7,
        (osal_uintptr_t)&VAR_12->non_trigger.vf_pf_msg_addr.lo,
        FUNC_9(VAR_7->vf_iov_info->vf2pf_request_phys));

 FUNC_7(VAR_7,
        (osal_uintptr_t)&VAR_12->non_trigger.vf_pf_msg_addr.hi,
        FUNC_8(VAR_7->vf_iov_info->vf2pf_request_phys));




 FUNC_6(VAR_7->p_dev);

 FUNC_7(VAR_7, (osal_uintptr_t)&VAR_12->trigger, *((u32 *)&VAR_11));




 while ((!*VAR_8) && VAR_14) {
  FUNC_4(25);
  VAR_14--;
 }

 if (!*VAR_8) {
  FUNC_0(VAR_7, 1,
     "VF <-- PF Timeout [Type %d]\n",
     VAR_10->first_tlv.tl.type);
  VAR_13 = VAR_2;
 } else {
  if ((*VAR_8 != VAR_4) &&
      (*VAR_8 != VAR_3))
   FUNC_0(VAR_7, 0,
      "PF response: %d [Type %d]\n",
      *VAR_8, VAR_10->first_tlv.tl.type);
  else
   FUNC_1(VAR_7, VAR_0,
       "PF response: %d [Type %d]\n",
       *VAR_8, VAR_10->first_tlv.tl.type);
 }

 return VAR_13;
}
