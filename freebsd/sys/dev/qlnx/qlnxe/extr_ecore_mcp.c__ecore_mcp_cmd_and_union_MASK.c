
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {int mcp_resp; int mcp_param; int param; int cmd; } ;
struct ecore_mcp_cmd_elem {scalar_t__ b_is_completed; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int cmd_lock; scalar_t__ drv_mb_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int ,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int ,int ,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct ecore_mcp_mb_params*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*,scalar_t__) ;
 int FUNC_10 (struct ecore_hwfn*,int ) ;
 struct ecore_mcp_cmd_elem* FUNC_11 (struct ecore_hwfn*,struct ecore_mcp_mb_params*,scalar_t__) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_mcp_cmd_elem*) ;
 int FUNC_13 (struct ecore_hwfn*,int) ;
 int FUNC_14 (struct ecore_hwfn*) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_16 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_17 (struct ecore_hwfn*,struct ecore_ptt*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_18(struct ecore_hwfn *VAR_8, struct ecore_ptt *VAR_9,
    struct ecore_mcp_mb_params *VAR_10,
    u32 VAR_11, u32 VAR_12)
{
 u32 VAR_13 = 0, VAR_14 = FUNC_0(VAR_12, 1000);
 struct ecore_mcp_cmd_elem *VAR_15;
 u16 VAR_16;
 enum _ecore_status_t VAR_17 = VAR_6;


 do {





  FUNC_6(&VAR_8->mcp_info->cmd_lock);

  if (!FUNC_14(VAR_8))
   break;

  VAR_17 = FUNC_17(VAR_8, VAR_9);
  if (VAR_17 == VAR_6)
   break;
  else if (VAR_17 != VAR_2)
   goto err;

  FUNC_7(&VAR_8->mcp_info->cmd_lock);
  if (FUNC_3(VAR_10, VAR_1)) {
   FUNC_5(VAR_14);
  } else {
   FUNC_8(VAR_12);
  }
  FUNC_4(VAR_8);
 } while (++VAR_13 < VAR_11);

 if (VAR_13 >= VAR_11) {
  FUNC_1(VAR_8, 0,
     "The MFW mailbox is occupied by an uncompleted command. Failed to send command 0x%08x [param 0x%08x].\n",
     VAR_10->cmd, VAR_10->param);
  return VAR_2;
 }


 FUNC_16(VAR_8, VAR_9);
 VAR_16 = ++VAR_8->mcp_info->drv_mb_seq;
 VAR_15 = FUNC_11(VAR_8, VAR_10, VAR_16);
 if (!VAR_15) {
  VAR_17 = VAR_5;
  goto err;
 }

 FUNC_9(VAR_8, VAR_9, VAR_10, VAR_16);
 FUNC_7(&VAR_8->mcp_info->cmd_lock);


 do {





  if (FUNC_3(VAR_10, VAR_1)) {
   FUNC_5(VAR_14);
  } else {
   FUNC_8(VAR_12);
  }
  FUNC_6(&VAR_8->mcp_info->cmd_lock);

  if (VAR_15->b_is_completed)
   break;

  VAR_17 = FUNC_17(VAR_8, VAR_9);
  if (VAR_17 == VAR_6)
   break;
  else if (VAR_17 != VAR_2)
   goto err;

  FUNC_7(&VAR_8->mcp_info->cmd_lock);
  FUNC_4(VAR_8);
 } while (++VAR_13 < VAR_11);

 if (VAR_13 >= VAR_11) {
  FUNC_1(VAR_8, 0,
     "The MFW failed to respond to command 0x%08x [param 0x%08x].\n",
     VAR_10->cmd, VAR_10->param);
  FUNC_15(VAR_8, VAR_9);

  FUNC_6(&VAR_8->mcp_info->cmd_lock);
  FUNC_12(VAR_8, VAR_15);
  FUNC_7(&VAR_8->mcp_info->cmd_lock);

  if (!FUNC_3(VAR_10, VAR_0))
   FUNC_13(VAR_8, 1);
  FUNC_10(VAR_8, VAR_3);
  return VAR_2;
 }

 FUNC_12(VAR_8, VAR_15);
 FUNC_7(&VAR_8->mcp_info->cmd_lock);

 FUNC_2(VAR_8, VAR_4,
     "MFW mailbox: response 0x%08x param 0x%08x [after %d.%03d ms]\n",
     VAR_10->mcp_resp, VAR_10->mcp_param,
     (VAR_13 * VAR_12) / 1000, (VAR_13 * VAR_12) % 1000);


 VAR_10->mcp_resp &= VAR_7;

 return VAR_6;

err:
 FUNC_7(&VAR_8->mcp_info->cmd_lock);
 return VAR_17;
}
