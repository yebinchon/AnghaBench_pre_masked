
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int hw_init_done; } ;
struct cau_sb_entry {int params; } ;
typedef scalar_t__ osal_uintptr_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int ,int,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__,int,int ) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_6,
          struct ecore_ptt *VAR_7,
          u8 VAR_8, u16 VAR_9, bool VAR_10)
{
 struct cau_sb_entry VAR_11;
 enum _ecore_status_t VAR_12;

 if (!VAR_6->hw_init_done) {
  FUNC_0(VAR_6, "hardware not initialized yet\n");
  return VAR_3;
 }

 VAR_12 = FUNC_2(VAR_6, VAR_7, VAR_0 +
     VAR_9 * sizeof(u64),
     (u64)(osal_uintptr_t)&VAR_11, 2,
     VAR_5 );
 if (VAR_12 != VAR_4) {
  FUNC_0(VAR_6, "dmae_grc2host failed %d\n", VAR_12);
  return VAR_12;
 }

 if (VAR_10)
  FUNC_1(VAR_11.params, VAR_2, VAR_8);
 else
  FUNC_1(VAR_11.params, VAR_1, VAR_8);

 VAR_12 = FUNC_3(VAR_6, VAR_7,
     (u64)(osal_uintptr_t)&VAR_11,
     VAR_0 + VAR_9 * sizeof(u64), 2,
     VAR_5 );
 if (VAR_12 != VAR_4) {
  FUNC_0(VAR_6, "dmae_host2grc failed %d\n", VAR_12);
  return VAR_12;
 }

 return VAR_12;
}
