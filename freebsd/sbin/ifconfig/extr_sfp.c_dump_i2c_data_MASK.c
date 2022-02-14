
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct i2c_info {scalar_t__ error; } ;
typedef int buf ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct i2c_info*,scalar_t__,scalar_t__,int,unsigned char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct i2c_info *VAR_1, uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{
 unsigned char VAR_5[16];
 int VAR_6, VAR_7;

 while (VAR_4 > 0) {
  FUNC_2(VAR_5, 0, sizeof(VAR_5));
  VAR_7 = FUNC_0(sizeof(VAR_5), VAR_4);
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_7, VAR_5);
  if (VAR_1->error != 0) {
   FUNC_1(VAR_0, "Error reading i2c info\n");
   return;
  }

  FUNC_3("\t");
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   FUNC_3("%02X ", VAR_5[VAR_6]);
  FUNC_3("\n");
  VAR_4 -= VAR_7;
  VAR_3 += VAR_7;
 }
}
