
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
struct e1000_host_mng_command_header {scalar_t__ checksum; scalar_t__ reserved2; scalar_t__ reserved1; int command_length; int command_id; } ;
typedef scalar_t__ s32 ;
typedef int hdr ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int *,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,struct e1000_host_mng_command_header*) ;

s32 FUNC_6(struct e1000_hw *VAR_4, u8 *VAR_5,
          u16 VAR_6)
{
 struct e1000_host_mng_command_header VAR_7;
 s32 VAR_8;
 u32 VAR_9;

 FUNC_0("e1000_mng_write_dhcp_info_generic");

 VAR_7.command_id = VAR_2;
 VAR_7.command_length = VAR_6;
 VAR_7.reserved1 = 0;
 VAR_7.reserved2 = 0;
 VAR_7.checksum = 0;


 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6,
        sizeof(VAR_7), &(VAR_7.checksum));
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_5(VAR_4, &VAR_7);
 if (VAR_8)
  return VAR_8;


 VAR_9 = FUNC_1(VAR_4, VAR_0);
 FUNC_2(VAR_4, VAR_0, VAR_9 | VAR_1);

 return VAR_3;
}
