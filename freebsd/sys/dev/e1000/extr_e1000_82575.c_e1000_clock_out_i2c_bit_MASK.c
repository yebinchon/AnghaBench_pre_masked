
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct e1000_hw*,int *) ;
 int FUNC_4 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int *,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_5, bool VAR_6)
{
 s32 VAR_7;
 u32 VAR_8 = FUNC_2(VAR_5, VAR_1);

 FUNC_0("e1000_clock_out_i2c_bit");

 VAR_7 = FUNC_5(VAR_5, &VAR_8, VAR_6);
 if (VAR_7 == VAR_4) {
  FUNC_4(VAR_5, &VAR_8);


  FUNC_6(VAR_2);

  FUNC_3(VAR_5, &VAR_8);




  FUNC_6(VAR_3);
 } else {
  VAR_7 = VAR_0;
  FUNC_1("I2C data was not set to %X\n", VAR_6);
 }

 return VAR_7;
}
