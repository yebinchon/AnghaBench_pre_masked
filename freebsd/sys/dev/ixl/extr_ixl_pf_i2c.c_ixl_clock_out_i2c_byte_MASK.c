
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct ixl_pf*,int) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static s32
FUNC_6(struct ixl_pf *VAR_3, u8 VAR_4)
{
 struct i40e_hw *VAR_5 = &VAR_3->hw;
 s32 VAR_6 = VAR_2;
 s32 VAR_7;
 u32 VAR_8;
 bool VAR_9;

 FUNC_0("ixl_clock_out_i2c_byte");

 for (VAR_7 = 7; VAR_7 >= 0; VAR_7--) {
  VAR_9 = (VAR_4 >> VAR_7) & 0x1;
  VAR_6 = FUNC_2(VAR_3, VAR_9);

  if (VAR_6 != VAR_2)
   break;
 }


 VAR_8 = FUNC_4(VAR_5, FUNC_1(VAR_5));
 VAR_8 |= VAR_1;
 VAR_8 &= ~(VAR_0);
 FUNC_5(VAR_5, FUNC_1(VAR_5), VAR_8);
 FUNC_3(VAR_5);

 return VAR_6;
}
