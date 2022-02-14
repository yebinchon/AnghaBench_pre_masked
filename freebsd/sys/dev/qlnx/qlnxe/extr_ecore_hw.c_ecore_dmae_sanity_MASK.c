
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef scalar_t__ osal_uintptr_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,char const*,...) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,char const*,unsigned long long,void*,unsigned long long,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int ,void*,int,int) ;
 int FUNC_4 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int,int,int,int ) ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_6,
           struct ecore_ptt *VAR_7,
           const char *VAR_8)
{
 u32 VAR_9 = VAR_5 / 2, VAR_10;
 enum _ecore_status_t VAR_11 = VAR_2;
 dma_addr_t VAR_12;
 void *VAR_13;
 u32 *VAR_14;

 VAR_13 = FUNC_2(VAR_6->p_dev, &VAR_12, 2 * VAR_9);
 if (!VAR_13) {
  FUNC_0(VAR_6, 0,
     "DMAE sanity [%s]: failed to allocate memory\n",
     VAR_8);
  return VAR_1;
 }


 for (VAR_14 = (u32 *)VAR_13;
      VAR_14 < (u32 *)((u8 *)VAR_13 + VAR_9);
      VAR_14++) {

  VAR_10 = (u32)(osal_uintptr_t)VAR_14;
  *VAR_14 = VAR_10;
 }


 FUNC_4((u8 *)VAR_13 + VAR_9, VAR_9);

 FUNC_1(VAR_6, VAR_0,
     "DMAE sanity [%s]: src_addr={phys 0x%llx, virt %p}, dst_addr={phys 0x%llx, virt %p}, size 0x%x\n",
     VAR_8, (unsigned long long)VAR_12, VAR_13,
     (unsigned long long)(VAR_12 + VAR_9), (u8 *)VAR_13 + VAR_9,
     VAR_9);

 VAR_11 = FUNC_5(VAR_6, VAR_7, VAR_12, VAR_12 + VAR_9,
      VAR_9 / 4 ,
      VAR_4 );
 if (VAR_11 != VAR_2) {
  FUNC_0(VAR_6, 0,
     "DMAE sanity [%s]: ecore_dmae_host2host() failed. rc = %d.\n",
     VAR_8, VAR_11);
  goto out;
 }


 for (VAR_14 = (u32 *)((u8 *)VAR_13 + VAR_9);
      VAR_14 < (u32 *)((u8 *)VAR_13 + (2 * VAR_9));
      VAR_14++) {

  VAR_10 = (u32)(osal_uintptr_t)VAR_14 - VAR_9;

  if (*VAR_14 != VAR_10) {
   FUNC_0(VAR_6, 0,
      "DMAE sanity [%s]: addr={phys 0x%llx, virt %p}, read_val 0x%08x, expected_val 0x%08x\n",
      VAR_8,
      (unsigned long long)(VAR_12 + (u32)((u8 *)VAR_14 - (u8 *)VAR_13)),
      VAR_14, *VAR_14, VAR_10);
   VAR_11 = VAR_3;
   goto out;
  }
 }

out:
 FUNC_3(VAR_6->p_dev, VAR_13, VAR_12, 2 * VAR_9);
 return VAR_11;
}
