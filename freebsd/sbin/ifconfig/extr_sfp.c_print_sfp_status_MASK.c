
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_info {scalar_t__ error; int do_diag; } ;
typedef int caddr_t ;
typedef int buf3 ;
typedef int buf2 ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_info*,int ,int ,int) ;
 int FUNC_1 (struct i2c_info*,char*,int) ;
 int FUNC_2 (struct i2c_info*,char*,int) ;
 int FUNC_3 (struct i2c_info*,char*,int) ;
 int FUNC_4 (struct i2c_info*,char*,int) ;
 int FUNC_5 (struct i2c_info*,char*,int) ;
 int FUNC_6 (struct i2c_info*,char*,int) ;
 int FUNC_7 (struct i2c_info*,char*,int) ;
 int FUNC_8 (struct i2c_info*,char*,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct i2c_info*,char*,int) ;
 int FUNC_11 (struct i2c_info*,int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_12(struct i2c_info *VAR_4, int VAR_5)
{
 char VAR_6[80], VAR_7[40], VAR_8[40];
 uint8_t VAR_9, VAR_10;


 FUNC_11(VAR_4, VAR_0, VAR_3, 1, (caddr_t)&VAR_9);
 if (VAR_4->error != 0)
  return;





 VAR_10 = VAR_1 | VAR_2;
 if ((VAR_9 & VAR_10) == VAR_10)
  VAR_4->do_diag = 1;


 FUNC_2(VAR_4, VAR_6, sizeof(VAR_6));
 FUNC_5(VAR_4, VAR_7, sizeof(VAR_7));
 FUNC_1(VAR_4, VAR_8, sizeof(VAR_8));
 if (VAR_4->error == 0)
  FUNC_9("\tplugged: %s %s (%s)\n", VAR_6, VAR_7, VAR_8);
 FUNC_8(VAR_4, VAR_6, sizeof(VAR_6));
 if (VAR_4->error == 0)
  FUNC_9("\t%s\n", VAR_6);

 if (VAR_5 > 5)
  FUNC_10(VAR_4, VAR_6, sizeof(VAR_6));



 if (VAR_4->do_diag != 0) {
  FUNC_4(VAR_4, VAR_6, sizeof(VAR_6));
  FUNC_7(VAR_4, VAR_7, sizeof(VAR_7));
  FUNC_9("\tmodule temperature: %s Voltage: %s\n", VAR_6, VAR_7);
  FUNC_3(VAR_4, VAR_6, sizeof(VAR_6));
  FUNC_6(VAR_4, VAR_7, sizeof(VAR_7));
  FUNC_9("\tRX: %s TX: %s\n", VAR_6, VAR_7);
 }

 if (VAR_5 > 2) {
  FUNC_9("\n\tSFF8472 DUMP (0xA0 0..127 range):\n");
  FUNC_0(VAR_4, VAR_0, 0, 128);
 }
}
