
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int queue_id; } ;
struct ecore_queue_cid {int sb_igu_id; TYPE_1__ abs; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct cau_sb_entry {int params; } ;
typedef scalar_t__ osal_uintptr_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int ,int,int ) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int) ;

int FUNC_5(struct ecore_hwfn *VAR_8,
      struct ecore_ptt *VAR_9,
      struct ecore_queue_cid *VAR_10,
      u16 *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;
 struct cau_sb_entry VAR_15;
 u8 VAR_16;
 enum _ecore_status_t VAR_17;

 VAR_17 = FUNC_3(VAR_8, VAR_9, VAR_1 +
     VAR_10->sb_igu_id * sizeof(u64),
     (u64)(osal_uintptr_t)&VAR_15, 2,
     VAR_7 );
 if (VAR_17 != VAR_6) {
  FUNC_0(VAR_8, "dmae_grc2host failed %d\n", VAR_17);
  return VAR_17;
 }

 VAR_16 = FUNC_1(VAR_15.params, VAR_2);

 VAR_13 = VAR_0 +
    FUNC_2(VAR_10->abs.queue_id);
 VAR_12 = FUNC_4(VAR_8, VAR_9, VAR_13);

 VAR_14 = FUNC_1(VAR_12, VAR_4);
 if (!VAR_14)
  return VAR_5;

 VAR_12 = FUNC_1(VAR_12, VAR_3);
 *VAR_11 = (u16)(VAR_12 << VAR_16);

 return VAR_6;
}
