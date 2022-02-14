
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct i2c_info {int qsfp; scalar_t__ error; } ;
typedef int buf3 ;
typedef int buf2 ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_info*,int ,int,int) ;
 int FUNC_1 (struct i2c_info*) ;
 int FUNC_2 (struct i2c_info*,char*,int) ;
 int FUNC_3 (struct i2c_info*,char*,int) ;
 int FUNC_4 (struct i2c_info*,char*,int) ;
 int FUNC_5 (struct i2c_info*,char*,int,int) ;
 scalar_t__ FUNC_6 (struct i2c_info*,char*,int) ;
 int FUNC_7 (struct i2c_info*,char*,int) ;
 int FUNC_8 (struct i2c_info*,char*,int,int) ;
 int FUNC_9 (struct i2c_info*,char*,int) ;
 int FUNC_10 (struct i2c_info*,char*,int) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void
FUNC_12(struct i2c_info *VAR_1, int VAR_2)
{
 char VAR_3[80], VAR_4[40], VAR_5[40];
 uint32_t VAR_6;
 int VAR_7;

 VAR_1->qsfp = 1;


 FUNC_3(VAR_1, VAR_3, sizeof(VAR_3));
 FUNC_7(VAR_1, VAR_4, sizeof(VAR_4));
 FUNC_2(VAR_1, VAR_5, sizeof(VAR_5));
 if (VAR_1->error == 0)
  FUNC_11("\tplugged: %s %s (%s)\n", VAR_3, VAR_4, VAR_5);
 FUNC_10(VAR_1, VAR_3, sizeof(VAR_3));
 if (VAR_1->error == 0)
  FUNC_11("\t%s\n", VAR_3);

 if (VAR_2 > 1) {
  FUNC_4(VAR_1, VAR_3, sizeof(VAR_3));
  if (VAR_1->error == 0)
   FUNC_11("\tcompliance level: %s\n", VAR_3);

  VAR_6 = FUNC_1(VAR_1);
  if (VAR_1->error == 0 && VAR_6 > 0)
   FUNC_11("\tnominal bitrate: %u Mbps\n", VAR_6);
 }







 if (FUNC_6(VAR_1, VAR_3, sizeof(VAR_3)) == 0) {
  FUNC_9(VAR_1, VAR_4, sizeof(VAR_4));
  FUNC_11("\tmodule temperature: %s voltage: %s\n", VAR_3, VAR_4);
  for (VAR_7 = 1; VAR_7 <= 4; VAR_7++) {
   FUNC_5(VAR_1, VAR_3, sizeof(VAR_3), VAR_7);
   FUNC_8(VAR_1, VAR_4, sizeof(VAR_4), VAR_7);
   FUNC_11("\tlane %d: RX: %s TX: %s\n", VAR_7, VAR_3, VAR_4);
  }
 }

 if (VAR_2 > 2) {
  FUNC_11("\n\tSFF8436 DUMP (0xA0 128..255 range):\n");
  FUNC_0(VAR_1, VAR_0, 128, 128);
  FUNC_11("\n\tSFF8436 DUMP (0xA0 0..81 range):\n");
  FUNC_0(VAR_1, VAR_0, 0, 82);
 }
}
