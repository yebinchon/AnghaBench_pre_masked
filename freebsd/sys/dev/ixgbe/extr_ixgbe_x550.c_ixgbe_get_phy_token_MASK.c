
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int token_cmd ;
struct TYPE_4__ {int lan_id; } ;
struct ixgbe_hw {TYPE_1__ bus; } ;
struct TYPE_5__ {scalar_t__ ret_status; scalar_t__ cmd_resv; } ;
struct TYPE_6__ {TYPE_2__ cmd_or_resp; int checksum; int buf_len; int cmd; } ;
struct ixgbe_hic_phy_token_req {TYPE_3__ hdr; scalar_t__ pad; int command_type; int port_number; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int *,int,int ,int ) ;

s32 FUNC_3(struct ixgbe_hw *VAR_11)
{
 struct ixgbe_hic_phy_token_req VAR_12;
 s32 VAR_13;

 VAR_12.hdr.cmd = VAR_3;
 VAR_12.hdr.buf_len = VAR_4;
 VAR_12.hdr.cmd_or_resp.cmd_resv = 0;
 VAR_12.hdr.checksum = VAR_0;
 VAR_12.port_number = VAR_11->bus.lan_id;
 VAR_12.command_type = VAR_2;
 VAR_12.pad = 0;
 VAR_13 = FUNC_2(VAR_11, (u32 *)&VAR_12,
           sizeof(VAR_12),
           VAR_8,
           VAR_10);
 if (VAR_13) {
  FUNC_1("Issuing host interface command failed with Status = %d\n",
     VAR_13);
  return VAR_13;
 }
 if (VAR_12.hdr.cmd_or_resp.ret_status == VAR_1)
  return VAR_9;
 if (VAR_12.hdr.cmd_or_resp.ret_status != VAR_5) {
  FUNC_1("Host interface command returned 0x%08x , returning IXGBE_ERR_FW_RESP_INVALID\n",
     VAR_12.hdr.cmd_or_resp.ret_status);
  return VAR_6;
 }

 FUNC_0("Returning  IXGBE_ERR_TOKEN_RETRY\n");
 return VAR_7;
}
