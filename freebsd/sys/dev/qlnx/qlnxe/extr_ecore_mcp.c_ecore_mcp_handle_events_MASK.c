
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_info {size_t mfw_mb_length; scalar_t__* mfw_mb_cur; scalar_t__* mfw_mb_shadow; scalar_t__ mfw_mb_addr; } ;
struct ecore_hwfn {TYPE_1__* p_dcbx_info; struct ecore_mcp_info* mcp_info; } ;
struct ecore_dcbx_set {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int set; } ;
typedef int OSAL_BE32 ;


 int FUNC_0 (struct ecore_hwfn*,char*,...) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (size_t) ;




 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct ecore_hwfn*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_10 (struct ecore_hwfn*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_16 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_17 (struct ecore_hwfn*,struct ecore_ptt*,size_t) ;
 int FUNC_18 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_19 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_20 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int ) ;

enum _ecore_status_t FUNC_21(struct ecore_hwfn *VAR_7,
          struct ecore_ptt *VAR_8)
{
 struct ecore_mcp_info *VAR_9 = VAR_7->mcp_info;
 enum _ecore_status_t VAR_10 = VAR_6;
 bool VAR_11 = 0;
 u16 VAR_12;

 FUNC_1(VAR_7, VAR_5, "Received message from MFW\n");


 FUNC_16(VAR_7, VAR_8);


 for (VAR_12 = 0; VAR_12 < VAR_9->mfw_mb_length; VAR_12++) {
  if (VAR_9->mfw_mb_cur[VAR_12] == VAR_9->mfw_mb_shadow[VAR_12])
   continue;

  VAR_11 = 1;

  FUNC_1(VAR_7, VAR_4,
      "Msg [%d] - old CMD 0x%02x, new CMD 0x%02x\n",
      VAR_12, VAR_9->mfw_mb_shadow[VAR_12], VAR_9->mfw_mb_cur[VAR_12]);

  switch (VAR_12) {
  case 134:
   FUNC_11(VAR_7, VAR_8, 0);
   break;
  case 128:
   FUNC_15(VAR_7, VAR_8);
   break;
  case 133:
   FUNC_7(VAR_7, VAR_8,
          VAR_1);
   break;
  case 142:
   FUNC_7(VAR_7, VAR_8,
          VAR_2);
   break;
  case 143:
   FUNC_7(VAR_7, VAR_8,
          VAR_0);

   FUNC_5(&VAR_7->p_dcbx_info->set, 0,
        sizeof(struct ecore_dcbx_set));
   break;
  case 132:
   FUNC_8(VAR_7, VAR_8);
   break;
  case 131:
   FUNC_14(VAR_7, VAR_8);
   break;
  case 129:
   FUNC_13(VAR_7, VAR_8);
   break;
  case 141:
   FUNC_12(VAR_7, VAR_8);
   break;
  case 137:
  case 139:
  case 138:
  case 136:
   FUNC_17(VAR_7, VAR_8, VAR_12);
   break;
  case 145:
   FUNC_18(VAR_7, VAR_8);
   break;
  case 130:
   FUNC_19(VAR_7, VAR_8);
   break;
  case 140:
   FUNC_10(VAR_7);
   break;
  case 144:
   FUNC_9(VAR_7, VAR_8);
   break;
  case 135:
   FUNC_6(VAR_7);
   break;
  default:
   FUNC_0(VAR_7, "Unimplemented MFW message %d\n", VAR_12);
   VAR_10 = VAR_3;
  }
 }


 for (VAR_12 = 0; VAR_12 < FUNC_2(VAR_9->mfw_mb_length); VAR_12++) {
  OSAL_BE32 VAR_13 = FUNC_3(((u32 *)VAR_9->mfw_mb_cur)[VAR_12]);


  FUNC_20(VAR_7, VAR_8,
    VAR_9->mfw_mb_addr + sizeof(u32) +
    FUNC_2(VAR_9->mfw_mb_length) *
    sizeof(u32) + VAR_12 * sizeof(u32), VAR_13);
 }

 if (!VAR_11) {
  FUNC_0(VAR_7,
   "Received an MFW message indication but no new message!\n");
  VAR_10 = VAR_3;
 }


 FUNC_4(VAR_9->mfw_mb_shadow, VAR_9->mfw_mb_cur, VAR_9->mfw_mb_length);

 return VAR_10;
}
