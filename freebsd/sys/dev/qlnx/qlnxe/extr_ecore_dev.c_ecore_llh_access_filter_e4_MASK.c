
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_llh_filter_e4_details {void* enable; void* hdr_sel; void* protocol_type; void* mode; int value; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dmae_params {int flags; int dst_pfid; int src_pfid; } ;
typedef int params ;
typedef scalar_t__ osal_uintptr_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct ecore_dmae_params*,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int ,int,struct ecore_dmae_params*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__,int,struct ecore_dmae_params*) ;
 void* FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int,scalar_t__) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int,scalar_t__,void*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_6(struct ecore_hwfn *VAR_9,
      struct ecore_ptt *VAR_10, u8 VAR_11, u8 VAR_12,
      struct ecore_llh_filter_e4_details *VAR_13,
      bool VAR_14)
{
 u8 VAR_15 = FUNC_0(VAR_9, VAR_11);
 struct ecore_dmae_params VAR_16;
 enum _ecore_status_t VAR_17;
 u32 VAR_18;
 if (VAR_14 && !VAR_13->enable) {
  VAR_18 = VAR_4 + VAR_12 * 0x4;
  FUNC_5(VAR_9, VAR_10, VAR_11, VAR_18,
          VAR_13->enable);
 }


 VAR_18 = VAR_8 + 2 * VAR_12 * 0x4;
 FUNC_1(&VAR_16, 0, sizeof(VAR_16));

 if (VAR_14) {
  VAR_16.flags = VAR_1;
  VAR_16.dst_pfid = VAR_15;
  VAR_17 = FUNC_3(VAR_9, VAR_10,
      (u64)(osal_uintptr_t)&VAR_13->value,
      VAR_18, 2 , &VAR_16);
 } else {
  VAR_16.flags = VAR_2 |
          VAR_0;
  VAR_16.src_pfid = VAR_15;
  VAR_17 = FUNC_2(VAR_9, VAR_10, VAR_18,
      (u64)(osal_uintptr_t)&VAR_13->value,
      2 , &VAR_16);
 }

 if (VAR_17 != VAR_3)
  return VAR_17;


 VAR_18 = VAR_6 + VAR_12 * 0x4;
 if (VAR_14)
  FUNC_5(VAR_9, VAR_10, VAR_11, VAR_18, VAR_13->mode);
 else
  VAR_13->mode = FUNC_4(VAR_9, VAR_10, VAR_11,
       VAR_18);


 VAR_18 = VAR_7 + VAR_12 * 0x4;
 if (VAR_14)
  FUNC_5(VAR_9, VAR_10, VAR_11, VAR_18,
          VAR_13->protocol_type);
 else
  VAR_13->protocol_type = FUNC_4(VAR_9, VAR_10,
         VAR_11, VAR_18);


 VAR_18 = VAR_5 + VAR_12 * 0x4;
 if (VAR_14)
  FUNC_5(VAR_9, VAR_10, VAR_11, VAR_18,
          VAR_13->hdr_sel);
 else
  VAR_13->hdr_sel = FUNC_4(VAR_9, VAR_10, VAR_11,
          VAR_18);


 if (!VAR_14 || VAR_13->enable) {
  VAR_18 = VAR_4 + VAR_12 * 0x4;
  if (VAR_14)
   FUNC_5(VAR_9, VAR_10, VAR_11, VAR_18,
           VAR_13->enable);
  else
   VAR_13->enable = FUNC_4(VAR_9, VAR_10,
          VAR_11, VAR_18);
 }

 return VAR_3;
}
