
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;
 int FUNC_4 (struct e1000_hw*,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_3, u8 VAR_4)
{
 s32 VAR_5 = VAR_2;
 s32 VAR_6;
 u32 VAR_7;
 bool VAR_8 = 0;

 FUNC_0("e1000_clock_out_i2c_byte");

 for (VAR_6 = 7; VAR_6 >= 0; VAR_6--) {
  VAR_8 = (VAR_4 >> VAR_6) & 0x1;
  VAR_5 = FUNC_4(VAR_3, VAR_8);

  if (VAR_5 != VAR_2)
   break;
 }


 VAR_7 = FUNC_1(VAR_3, VAR_0);

 VAR_7 |= VAR_1;
 FUNC_3(VAR_3, VAR_0, VAR_7);
 FUNC_2(VAR_3);

 return VAR_5;
}
