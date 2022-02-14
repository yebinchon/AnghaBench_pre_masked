
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*,int ,int,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_0, u32 VAR_1,
       u8 VAR_2)
{
 u16 VAR_3 = (u16)VAR_2;

 FUNC_0("e1000_write_flash_byte_ich8lan");

 return FUNC_1(VAR_0, VAR_1, 1, VAR_3);
}
