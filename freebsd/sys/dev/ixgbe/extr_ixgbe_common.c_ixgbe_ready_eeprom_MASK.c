
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_6)
{
 s32 VAR_7 = VAR_5;
 u16 VAR_8;
 u8 VAR_9;

 FUNC_0("ixgbe_ready_eeprom");







 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8 += 5) {
  FUNC_3(VAR_6, VAR_2,
         VAR_1);
  VAR_9 = (u8)FUNC_2(VAR_6, 8);
  if (!(VAR_9 & VAR_3))
   break;

  FUNC_5(5);
  FUNC_4(VAR_6);
 }





 if (VAR_8 >= VAR_0) {
  FUNC_1("SPI EEPROM Status error\n");
  VAR_7 = VAR_4;
 }

 return VAR_7;
}
