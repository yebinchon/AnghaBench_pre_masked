
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
union ecore_llh_filter {TYPE_1__ mac; } ;
typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {int mf_bits; } ;
typedef int filter ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct ecore_dev*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct ecore_hwfn* FUNC_2 (struct ecore_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (union ecore_llh_filter*,int) ;
 struct ecore_ptt* VAR_4 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct ecore_dev*,int ,int *) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;
 int FUNC_8 (struct ecore_dev*,int ,union ecore_llh_filter*,int *,int *) ;
 struct ecore_ptt* FUNC_9 (struct ecore_hwfn*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*) ;

void FUNC_11(struct ecore_dev *VAR_5, u8 VAR_6,
     u8 VAR_7[VAR_3])
{
 struct ecore_hwfn *VAR_8 = FUNC_2(VAR_5);
 struct ecore_ptt *VAR_9 = FUNC_9(VAR_8);
 union ecore_llh_filter VAR_10;
 u8 VAR_11, VAR_12;
 enum _ecore_status_t VAR_13 = VAR_2;
 u32 VAR_14;

 if (VAR_9 == VAR_4)
  return;

 if (!FUNC_5(VAR_0, &VAR_5->mf_bits))
  goto out;

 FUNC_4(&VAR_10, sizeof(VAR_10));
 FUNC_3(VAR_10.mac.addr, VAR_7, VAR_3);
 VAR_13 = FUNC_8(VAR_5, VAR_6, &VAR_10, &VAR_11,
         &VAR_14);
 if (VAR_13 != VAR_2)
  goto err;

 VAR_13 = FUNC_6(VAR_5, VAR_6, &VAR_12);
 if (VAR_13 != VAR_2)
  goto err;


 if (!VAR_14) {
  VAR_13 = FUNC_7(VAR_8, VAR_9, VAR_12,
          VAR_11);
  if (VAR_13 != VAR_2)
   goto err;
 }

 FUNC_1(VAR_5, VAR_1,
     "LLH: Removed MAC filter [%02hhx:%02hhx:%02hhx:%02hhx:%02hhx:%02hhx] from ppfid %hhd [abs %hhd] at idx %hhd [ref_cnt %d]\n",
     VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3],
     VAR_7[4], VAR_7[5], VAR_6, VAR_12, VAR_11,
     VAR_14);

 goto out;

err:
 FUNC_0(VAR_5, 0,
    "LLH: Failed to remove MAC filter [%02hhx:%02hhx:%02hhx:%02hhx:%02hhx:%02hhx] from ppfid %hhd\n",
    VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3],
    VAR_7[4], VAR_7[5], VAR_6);
out:
 FUNC_10(VAR_8, VAR_9);
}
