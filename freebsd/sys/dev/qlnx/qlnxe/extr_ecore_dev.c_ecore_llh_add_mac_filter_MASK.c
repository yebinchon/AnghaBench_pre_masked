
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


 int FUNC_0 (struct ecore_dev*,int,char*,int,int,int,int,int,int,int) ;
 int FUNC_1 (struct ecore_dev*,int ,char*,int,int,int,int,int,int,int,int,int,int) ;
 int VAR_0 ;
 struct ecore_hwfn* FUNC_2 (struct ecore_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (union ecore_llh_filter*,int) ;
 struct ecore_ptt* VAR_6 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct ecore_dev*,int,int*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int,int,int ,int,int) ;
 int FUNC_8 (struct ecore_dev*,int,int ,union ecore_llh_filter*,int*,int*) ;
 struct ecore_ptt* FUNC_9 (struct ecore_hwfn*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t FUNC_11(struct ecore_dev *VAR_7, u8 VAR_8,
           u8 VAR_9[VAR_5])
{
 struct ecore_hwfn *VAR_10 = FUNC_2(VAR_7);
 struct ecore_ptt *VAR_11 = FUNC_9(VAR_10);
 union ecore_llh_filter VAR_12;
 u8 VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 enum _ecore_status_t VAR_18 = VAR_4;

 if (VAR_11 == VAR_6)
  return VAR_0;

 if (!FUNC_5(VAR_2, &VAR_7->mf_bits))
  goto out;

 FUNC_4(&VAR_12, sizeof(VAR_12));
 FUNC_3(VAR_12.mac.addr, VAR_9, VAR_5);
 VAR_18 = FUNC_8(VAR_7, VAR_8,
      VAR_1,
      &VAR_12, &VAR_13, &VAR_17);
 if (VAR_18 != VAR_4)
  goto err;

 VAR_18 = FUNC_6(VAR_7, VAR_8, &VAR_14);
 if (VAR_18 != VAR_4)
  goto err;


 if (VAR_17 == 1) {
  VAR_15 = VAR_9[1] | (VAR_9[0] << 8);
  VAR_16 = VAR_9[5] | (VAR_9[4] << 8) | (VAR_9[3] << 16) |
        (VAR_9[2] << 24);
  VAR_18 = FUNC_7(VAR_10, VAR_11, VAR_14, VAR_13,
       0, VAR_15, VAR_16);
  if (VAR_18 != VAR_4)
   goto err;
 }

 FUNC_1(VAR_7, VAR_3,
     "LLH: Added MAC filter [%02hhx:%02hhx:%02hhx:%02hhx:%02hhx:%02hhx] to ppfid %hhd [abs %hhd] at idx %hhd [ref_cnt %d]\n",
     VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3],
     VAR_9[4], VAR_9[5], VAR_8, VAR_14, VAR_13,
     VAR_17);

 goto out;

err:
 FUNC_0(VAR_7, 0,
    "LLH: Failed to add MAC filter [%02hhx:%02hhx:%02hhx:%02hhx:%02hhx:%02hhx] to ppfid %hhd\n",
    VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3],
    VAR_9[4], VAR_9[5], VAR_8);
out:
 FUNC_10(VAR_10, VAR_11);

 return VAR_18;
}
