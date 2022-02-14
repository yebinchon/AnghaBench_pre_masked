
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ drv_mb_seq; int cmd_lock; scalar_t__ b_block_cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,char*) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*) ;
 int FUNC_3 (struct ecore_hwfn*,int ,char*,scalar_t__) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*) ;
 scalar_t__ FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

enum _ecore_status_t FUNC_10(struct ecore_hwfn *VAR_10,
         struct ecore_ptt *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14 = VAR_0, VAR_15 = 0;
 enum _ecore_status_t VAR_16 = VAR_6;


 if (FUNC_0(VAR_10->p_dev))
  VAR_14 = VAR_7;


 if (VAR_10->mcp_info->b_block_cmd) {
  FUNC_2(VAR_10, 0,
     "The MFW is not responsive. Avoid sending MCP_RESET mailbox command.\n");
  return VAR_2;
 }


 FUNC_5(&VAR_10->mcp_info->cmd_lock);

 VAR_12 = FUNC_9(VAR_10, VAR_11, VAR_8);


 FUNC_8(VAR_10, VAR_11);
 VAR_13 = ++VAR_10->mcp_info->drv_mb_seq;
 FUNC_4(VAR_10, VAR_11, VAR_9, (VAR_1 | VAR_13));

 do {

  FUNC_7(VAR_14);

 } while ((VAR_12 == FUNC_9(VAR_10, VAR_11,
      VAR_8)) &&
   (VAR_15++ < VAR_4));

 if (VAR_12 !=
     FUNC_9(VAR_10, VAR_11, VAR_8)) {
  FUNC_3(VAR_10, VAR_5,
      "MCP was reset after %d usec\n", VAR_15 * VAR_14);
 } else {
  FUNC_1(VAR_10, "Failed to reset MCP\n");
  VAR_16 = VAR_3;
 }

 FUNC_6(&VAR_10->mcp_info->cmd_lock);

 return VAR_16;
}
