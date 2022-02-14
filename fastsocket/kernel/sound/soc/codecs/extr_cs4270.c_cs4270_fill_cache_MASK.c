
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_codec {int dev; struct i2c_client* control_data; int * reg_cache; } ;
struct i2c_client {int addr; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct i2c_client*,int,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_4)
{
 u8 *VAR_5 = VAR_4->reg_cache;
 struct i2c_client *VAR_6 = VAR_4->control_data;
 s32 VAR_7;

 VAR_7 = FUNC_1(VAR_6,
  VAR_0 | VAR_1, VAR_2, VAR_5);

 if (VAR_7 != VAR_2) {
  FUNC_0(VAR_4->dev, "i2c read failure, addr=0x%x\n",
         VAR_6->addr);
  return -VAR_3;
 }

 return 0;
}
