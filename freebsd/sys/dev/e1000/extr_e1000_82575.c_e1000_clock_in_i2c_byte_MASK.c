
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_1, u8 *VAR_2)
{
 s32 VAR_3;
 bool VAR_4 = 0;

 FUNC_0("e1000_clock_in_i2c_byte");

 *VAR_2 = 0;
 for (VAR_3 = 7; VAR_3 >= 0; VAR_3--) {
  FUNC_1(VAR_1, &VAR_4);
  *VAR_2 |= VAR_4 << VAR_3;
 }

 return VAR_0;
}
