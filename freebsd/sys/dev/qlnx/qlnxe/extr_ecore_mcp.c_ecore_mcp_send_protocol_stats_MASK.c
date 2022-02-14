
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ecore_mcp_protocol_stats {int dummy; } ecore_mcp_protocol_stats ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {int data_src_size; union ecore_mcp_protocol_stats* p_data_src; int param; int cmd; } ;
struct ecore_hwfn {int p_dev; } ;
typedef int stats ;
typedef int mb_params ;
typedef enum ecore_mcp_protocol_type { ____Placeholder_ecore_mcp_protocol_type } ecore_mcp_protocol_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef enum MFW_DRV_MSG_TYPE { ____Placeholder_MFW_DRV_MSG_TYPE } MFW_DRV_MSG_TYPE ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int FUNC_2 (int ,int,union ecore_mcp_protocol_stats*) ;
 int FUNC_3 (struct ecore_mcp_mb_params*,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_11,
       struct ecore_ptt *VAR_12,
       enum MFW_DRV_MSG_TYPE VAR_13)
{
 enum ecore_mcp_protocol_type VAR_14;
 union ecore_mcp_protocol_stats VAR_15;
 struct ecore_mcp_mb_params VAR_16;
 u32 VAR_17;
 enum _ecore_status_t VAR_18;

 switch (VAR_13) {
 case 129:
  VAR_14 = VAR_7;
  VAR_17 = VAR_3;
  break;
 case 131:
  VAR_14 = VAR_5;
  VAR_17 = VAR_1;
  break;
 case 130:
  VAR_14 = VAR_6;
  VAR_17 = VAR_2;
  break;
 case 128:
  VAR_14 = VAR_8;
  VAR_17 = VAR_4;
  break;
 default:
  FUNC_1(VAR_11, VAR_9,
      "Invalid protocol type %d\n", VAR_13);
  return;
 }

 FUNC_2(VAR_11->p_dev, VAR_14, &VAR_15);

 FUNC_3(&VAR_16, sizeof(VAR_16));
 VAR_16.cmd = VAR_0;
 VAR_16.param = VAR_17;
 VAR_16.p_data_src = &VAR_15;
 VAR_16.data_src_size = sizeof(VAR_15);
 VAR_18 = FUNC_4(VAR_11, VAR_12, &VAR_16);
 if (VAR_18 != VAR_10)
  FUNC_0(VAR_11, "Failed to send protocol stats, rc = %d\n", VAR_18);
}
