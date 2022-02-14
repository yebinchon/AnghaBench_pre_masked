
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
struct e1000_host_mng_command_header {int checksum; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*,int ,int,int ) ;
 int FUNC_3 (int *,int) ;

s32 FUNC_4(struct e1000_hw *VAR_2,
          struct e1000_host_mng_command_header *VAR_3)
{
 u16 VAR_4, VAR_5 = sizeof(struct e1000_host_mng_command_header);

 FUNC_0("e1000_mng_write_cmd_header_generic");



 VAR_3->checksum = FUNC_3((u8 *)VAR_3, VAR_5);

 VAR_5 >>= 2;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  FUNC_2(VAR_2, VAR_0, VAR_4,
         *((u32 *) VAR_3 + VAR_4));
  FUNC_1(VAR_2);
 }

 return VAR_1;
}
