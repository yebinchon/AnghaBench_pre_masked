
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int rel_pf_id; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,char*) ;
 int FUNC_3 (struct ecore_hwfn*,int,char*) ;
 int FUNC_4 (struct ecore_hwfn*,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*,int) ;
 int FUNC_7 (struct ecore_hwfn*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum _ecore_status_t FUNC_10(struct ecore_hwfn *VAR_13,
      struct ecore_ptt *VAR_14,
      u16 VAR_15, bool VAR_16)
{
 u32 VAR_17 = 0, VAR_18, VAR_19 = VAR_3;
 enum _ecore_status_t VAR_20 = VAR_2;


 if (FUNC_1(VAR_13->p_dev) ||
     FUNC_0(VAR_13->p_dev)) {
  FUNC_2(VAR_13, "Skipping final cleanup for non-ASIC\n");
  return VAR_1;
 }


 VAR_18 = VAR_5 +
        FUNC_8(VAR_13->rel_pf_id);

 if (VAR_16)
  VAR_15 += 0x10;

 VAR_17 |= VAR_12 <<
     VAR_6;
 VAR_17 |= 1 << VAR_8;
 VAR_17 |= VAR_15 << VAR_7;
 VAR_17 |= VAR_9 << VAR_10;


 if (FUNC_6(VAR_13, VAR_18)) {
  FUNC_3(VAR_13, 0,
     "Unexpected; Found final cleanup notification before initiating final cleanup\n");
  FUNC_7(VAR_13, VAR_18, 0);
 }

 FUNC_4(VAR_13, VAR_0,
     "Sending final cleanup for PFVF[%d] [Command %08x]\n",
     VAR_15, VAR_17);

 FUNC_9(VAR_13, VAR_14, VAR_11, VAR_17);


 while (!FUNC_6(VAR_13, VAR_18) && VAR_19--)
  FUNC_5(VAR_4);

 if (FUNC_6(VAR_13, VAR_18))
  VAR_20 = VAR_1;
 else
  FUNC_3(VAR_13, 1, "Failed to receive FW final cleanup notification\n");


 FUNC_7(VAR_13, VAR_18, 0);

 return VAR_20;
}
