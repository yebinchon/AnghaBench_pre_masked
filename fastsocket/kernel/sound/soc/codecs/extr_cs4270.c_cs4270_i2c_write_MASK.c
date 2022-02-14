
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_soc_codec {unsigned int* reg_cache; int dev; struct i2c_client* control_data; } ;
struct i2c_client {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct i2c_client*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_3, unsigned int VAR_4,
       unsigned int VAR_5)
{
 u8 *VAR_6 = VAR_3->reg_cache;

 if ((VAR_4 < VAR_0) || (VAR_4 > VAR_1))
  return -VAR_2;


 if (VAR_6[VAR_4 - VAR_0] != VAR_5) {
  struct i2c_client *VAR_7 = VAR_3->control_data;
  if (FUNC_1(VAR_7, VAR_4, VAR_5)) {
   FUNC_0(VAR_3->dev, "i2c write failed\n");
   return -VAR_2;
  }


  VAR_6[VAR_4 - VAR_0] = VAR_5;
 }

 return 0;
}
