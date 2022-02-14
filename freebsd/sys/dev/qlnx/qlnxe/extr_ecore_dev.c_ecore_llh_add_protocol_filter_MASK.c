
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; void* dest_port; void* source_port_or_eth_type; } ;
union ecore_llh_filter {TYPE_1__ protocol; } ;
typedef int u8 ;
typedef int u32 ;
typedef void* u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {int mf_bits; } ;
typedef int str ;
typedef int filter ;
typedef enum ecore_llh_prot_filter_type_t { ____Placeholder_ecore_llh_prot_filter_type_t } ecore_llh_prot_filter_type_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int*,int) ;
 int FUNC_1 (struct ecore_dev*,int ,char*,int*,int,int,int,int) ;
 int VAR_0 ;
 struct ecore_hwfn* FUNC_2 (struct ecore_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (union ecore_llh_filter*,int) ;
 struct ecore_ptt* VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct ecore_dev*,int,int*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int,int,int,int,int) ;
 int FUNC_7 (struct ecore_dev*,int,void*,void*,int*,int) ;
 int FUNC_8 (struct ecore_dev*,int,void*,void*,int*,int*) ;
 int FUNC_9 (struct ecore_dev*,int,int ,union ecore_llh_filter*,int*,int*) ;
 struct ecore_ptt* FUNC_10 (struct ecore_hwfn*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t
FUNC_12(struct ecore_dev *VAR_6, u8 VAR_7,
         enum ecore_llh_prot_filter_type_t VAR_8,
         u16 VAR_9, u16 VAR_10)
{
 struct ecore_hwfn *VAR_11 = FUNC_2(VAR_6);
 struct ecore_ptt *VAR_12 = FUNC_10(VAR_11);
 u8 VAR_13, VAR_14, VAR_15[32], VAR_16;
 union ecore_llh_filter VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 enum _ecore_status_t VAR_21 = VAR_4;

 if (VAR_12 == VAR_5)
  return VAR_0;

 if (!FUNC_4(VAR_2, &VAR_6->mf_bits))
  goto out;

 VAR_21 = FUNC_7(VAR_6, VAR_8,
       VAR_9,
       VAR_10, VAR_15, sizeof(VAR_15));
 if (VAR_21 != VAR_4)
  goto err;

 FUNC_3(&VAR_17, sizeof(VAR_17));
 VAR_17.protocol.type = VAR_8;
 VAR_17.protocol.source_port_or_eth_type = VAR_9;
 VAR_17.protocol.dest_port = VAR_10;
 VAR_21 = FUNC_9(VAR_6, VAR_7,
      VAR_1,
      &VAR_17, &VAR_13, &VAR_20);
 if (VAR_21 != VAR_4)
  goto err;

 VAR_21 = FUNC_5(VAR_6, VAR_7, &VAR_14);
 if (VAR_21 != VAR_4)
  goto err;


 if (VAR_20 == 1) {
  VAR_21 = FUNC_8(VAR_6, VAR_8,
             VAR_9,
             VAR_10, &VAR_18, &VAR_19);
  if (VAR_21 != VAR_4)
   goto err;

  VAR_16 = 0x1 << VAR_8;
  VAR_21 = FUNC_6(VAR_11, VAR_12, VAR_14, VAR_13,
       VAR_16, VAR_18, VAR_19);
  if (VAR_21 != VAR_4)
   goto err;
 }

 FUNC_1(VAR_6, VAR_3,
     "LLH: Added protocol filter [%s] to ppfid %hhd [abs %hhd] at idx %hhd [ref_cnt %d]\n",
     VAR_15, VAR_7, VAR_14, VAR_13, VAR_20);

 goto out;

err:
 FUNC_0(VAR_11, 0,
    "LLH: Failed to add protocol filter [%s] to ppfid %hhd\n",
    VAR_15, VAR_7);
out:
 FUNC_11(VAR_11, VAR_12);

 return VAR_21;
}
