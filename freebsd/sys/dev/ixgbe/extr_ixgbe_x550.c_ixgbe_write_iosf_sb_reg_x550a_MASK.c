
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int write_cmd ;
typedef int u32 ;
struct TYPE_4__ {int lan_id; } ;
struct ixgbe_hw {TYPE_2__ bus; } ;
struct TYPE_3__ {int checksum; int buf_len; int cmd; } ;
struct ixgbe_hic_internal_phy_req {int write_data; int address; int command_type; int port_number; TYPE_1__ hdr; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ixgbe_hw*,int *,int,int ,int ) ;
 int FUNC_4 (struct ixgbe_hic_internal_phy_req*,int ,int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_6, u32 VAR_7,
      u32 VAR_8, u32 VAR_9)
{
 struct ixgbe_hic_internal_phy_req VAR_10;
 s32 VAR_11;
 FUNC_2(VAR_8);

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.hdr.cmd = VAR_2;
 VAR_10.hdr.buf_len = VAR_3;
 VAR_10.hdr.checksum = VAR_1;
 VAR_10.port_number = VAR_6->bus.lan_id;
 VAR_10.command_type = VAR_4;
 VAR_10.address = FUNC_0(VAR_7);
 VAR_10.write_data = FUNC_1(VAR_9);

 VAR_11 = FUNC_3(VAR_6, (u32 *)&VAR_10,
           sizeof(VAR_10),
           VAR_5, VAR_0);

 return VAR_11;
}
