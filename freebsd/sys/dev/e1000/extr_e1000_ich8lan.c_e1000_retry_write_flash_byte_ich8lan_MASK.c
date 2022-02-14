
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_2,
      u32 VAR_3, u8 VAR_4)
{
 s32 VAR_5;
 u16 VAR_6;

 FUNC_0("e1000_retry_write_flash_byte_ich8lan");

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  FUNC_1("Retrying Byte %2.2X at offset %u\n", VAR_4, VAR_3);
  FUNC_3(100);
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
  if (VAR_5 == VAR_1)
   break;
 }
 if (VAR_6 == 100)
  return -VAR_0;

 return VAR_1;
}
