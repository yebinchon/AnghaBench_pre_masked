
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_9, u32 *VAR_10, bool VAR_11)
{
 s32 VAR_12 = VAR_8;

 FUNC_0("e1000_set_i2c_data");

 if (VAR_11)
  *VAR_10 |= VAR_4;
 else
  *VAR_10 &= ~VAR_4;

 *VAR_10 &= ~VAR_3;
 *VAR_10 |= VAR_2;
 FUNC_4(VAR_9, VAR_1, *VAR_10);
 FUNC_3(VAR_9);


 FUNC_6(VAR_6 + VAR_5 + VAR_7);

 *VAR_10 = FUNC_2(VAR_9, VAR_1);
 if (VAR_11 != FUNC_5(VAR_10)) {
  VAR_12 = VAR_0;
  FUNC_1("Error - I2C data was not set to %X.\n", VAR_11);
 }

 return VAR_12;
}
