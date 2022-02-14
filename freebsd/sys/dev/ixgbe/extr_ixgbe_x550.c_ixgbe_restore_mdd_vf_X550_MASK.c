
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;

void FUNC_5(struct ixgbe_hw *VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_0("ixgbe_restore_mdd_vf_X550");


 VAR_5 = FUNC_1(VAR_2, VAR_0);
 switch (VAR_5 & VAR_1) {
 case 128:
  VAR_6 = 8;
  VAR_8 = 0x000000FF;
  break;
 case 130:
 case 129:
  VAR_6 = 4;
  VAR_8 = 0x0000000F;
  break;
 default:
  VAR_6 = 2;
  VAR_8 = 0x00000003;
  break;
 }
 VAR_7 = VAR_3 * VAR_6;


 VAR_4 = VAR_7 / 32;
 VAR_5 = 0;
 VAR_5 |= (VAR_8 << (VAR_7 % 32));
 FUNC_4(VAR_2, FUNC_3(VAR_4), VAR_5);
 FUNC_4(VAR_2, FUNC_2(VAR_4), VAR_5);
}
