
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {scalar_t__ b_wol_support; } ;
struct ecore_hwfn {TYPE_1__* p_dev; TYPE_2__ hw_info; } ;
typedef enum ecore_ov_wol { ____Placeholder_ecore_ov_wol } ecore_ov_wol ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {scalar_t__ wol_config; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int *,int *) ;

enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_8, struct ecore_ptt *VAR_9,
   enum ecore_ov_wol VAR_10)
{
 u32 VAR_11 = 0, VAR_12 = 0;
 u32 VAR_13;
 enum _ecore_status_t VAR_14;

 if (VAR_8->hw_info.b_wol_support == VAR_7) {
  FUNC_1(VAR_8, VAR_5,
      "Can't change WoL configuration when WoL isn't supported\n");
  return VAR_4;
 }

 switch (VAR_10) {
 case 130:
  VAR_13 = VAR_0;
  break;
 case 129:
  VAR_13 = VAR_1;
  break;
 case 128:
  VAR_13 = VAR_2;
  break;
 default:
  FUNC_0(VAR_8, "Invalid wol state %d\n", VAR_10);
  return VAR_4;
 }

 VAR_14 = FUNC_2(VAR_8, VAR_9, VAR_3,
      VAR_13, &VAR_11, &VAR_12);
 if (VAR_14 != VAR_6)
  FUNC_0(VAR_8, "Failed to send wol mode, rc = %d\n", VAR_14);


 VAR_8->p_dev->wol_config = (u8)VAR_10;

 return VAR_14;
}
