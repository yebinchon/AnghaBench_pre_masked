
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct snd_soc_codec {int dev; struct i2c_client* control_data; } ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct snd_soc_codec *VAR_1, u8 VAR_2)
{
 struct i2c_msg VAR_3[2];
 u16 VAR_4;
 int VAR_5;
 struct i2c_client *VAR_6 = VAR_1->control_data;


 VAR_3[0].addr = VAR_6->addr;
 VAR_3[0].flags = 0;
 VAR_3[0].len = 1;
 VAR_3[0].buf = &VAR_2;


 VAR_3[1].addr = VAR_6->addr;
 VAR_3[1].flags = VAR_0;
 VAR_3[1].len = 2;
 VAR_3[1].buf = (u8 *)&VAR_4;

 VAR_5 = FUNC_1(VAR_6->adapter, VAR_3, 2);
 if (VAR_5 != 2) {
  FUNC_0(VAR_1->dev, "Failed to read 0x%x: %d\n", VAR_2, VAR_5);
  return 0;
 }

 return (VAR_4 >> 8) | ((VAR_4 & 0xff) << 8);
}
