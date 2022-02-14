
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xbuf ;
struct i2c_info {scalar_t__ qsfp; } ;


 int FUNC_0 (struct i2c_info*,char*,int) ;
 int FUNC_1 (struct i2c_info*,char*,int) ;
 int FUNC_2 (struct i2c_info*,char*,int) ;
 int FUNC_3 (struct i2c_info*,char*,int) ;
 int FUNC_4 (struct i2c_info*,char*,int) ;
 int FUNC_5 (struct i2c_info*,char*,int) ;
 int FUNC_6 (struct i2c_info*,char*,int) ;
 int FUNC_7 (struct i2c_info*,char*,int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*,size_t,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_10(struct i2c_info *VAR_0, char *VAR_1, size_t VAR_2)
{
 char VAR_3[80];

 FUNC_8(VAR_3, 0, sizeof(VAR_3));
 if (VAR_0->qsfp != 0) {
  FUNC_1(VAR_0, VAR_3, 20);
  FUNC_2(VAR_0, &VAR_3[20], 20);
  FUNC_3(VAR_0, &VAR_3[40], 20);
  FUNC_0(VAR_0, &VAR_3[60], 20);
 } else {
  FUNC_5(VAR_0, VAR_3, 20);
  FUNC_6(VAR_0, &VAR_3[20], 20);
  FUNC_7(VAR_0, &VAR_3[40], 20);
  FUNC_4(VAR_0, &VAR_3[60], 20);
 }

 FUNC_9(VAR_1, VAR_2, "vendor: %s PN: %s SN: %s DATE: %s",
     VAR_3, &VAR_3[20], &VAR_3[40], &VAR_3[60]);
}
