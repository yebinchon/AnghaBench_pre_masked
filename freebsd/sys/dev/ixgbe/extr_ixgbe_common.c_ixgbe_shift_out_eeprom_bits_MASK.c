
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 int FUNC_5 (struct ixgbe_hw*,int*) ;
 int FUNC_6 (struct ixgbe_hw*,int*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ixgbe_hw *VAR_1, u16 VAR_2,
     u16 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 FUNC_0("ixgbe_shift_out_eeprom_bits");

 VAR_4 = FUNC_2(VAR_1, FUNC_1(VAR_1));





 VAR_5 = 0x01 << (VAR_3 - 1);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {







  if (VAR_2 & VAR_5)
   VAR_4 |= VAR_0;
  else
   VAR_4 &= ~VAR_0;

  FUNC_4(VAR_1, FUNC_1(VAR_1), VAR_4);
  FUNC_3(VAR_1);

  FUNC_7(1);

  FUNC_6(VAR_1, &VAR_4);
  FUNC_5(VAR_1, &VAR_4);





  VAR_5 = VAR_5 >> 1;
 }


 VAR_4 &= ~VAR_0;
 FUNC_4(VAR_1, FUNC_1(VAR_1), VAR_4);
 FUNC_3(VAR_1);
}
