
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {char* name; int num_dai; unsigned int (* read ) (struct snd_soc_codec*,int ) ;int (* write ) (struct snd_soc_codec*,int ,unsigned int) ;int reg_cache_size; int reg_cache; struct i2c_client* control_data; struct cs4270_private* private_data; TYPE_1__* dai; int owner; int * dev; int dapm_paths; int dapm_widgets; int mutex; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; } ;
struct cs4270_private {int reg_cache; struct snd_soc_codec codec; } ;
struct TYPE_3__ {int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int VAR_10 ;
 struct snd_soc_codec* VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_1 (struct snd_soc_codec*) ;
 int FUNC_2 (struct snd_soc_codec*,int ,unsigned int) ;
 unsigned int FUNC_3 (struct snd_soc_codec*,int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (struct i2c_client*,struct cs4270_private*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct cs4270_private*) ;
 struct cs4270_private* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_13,
 const struct i2c_device_id *VAR_14)
{
 struct snd_soc_codec *VAR_15;
 struct cs4270_private *VAR_16;
 unsigned int VAR_17;
 int VAR_18;




 if (VAR_11) {
  FUNC_4(&VAR_13->dev, "ignoring CS4270 at addr %X\n",
         VAR_13->addr);
  FUNC_4(&VAR_13->dev, "only one per board allowed\n");

  return -VAR_7;
 }



 VAR_18 = FUNC_7(VAR_13, VAR_0);
 if (VAR_18 < 0) {
  FUNC_4(&VAR_13->dev, "failed to read i2c at addr %X\n",
         VAR_13->addr);
  return VAR_18;
 }

 if ((VAR_18 & 0xF0) != 0xC0) {
  FUNC_4(&VAR_13->dev, "device at addr %X is not a CS4270\n",
         VAR_13->addr);
  return -VAR_7;
 }

 FUNC_5(&VAR_13->dev, "found device at i2c address %X\n",
  VAR_13->addr);
 FUNC_5(&VAR_13->dev, "hardware revision %X\n", VAR_18 & 0xF);



 VAR_16 = FUNC_9(sizeof(struct cs4270_private), VAR_9);
 if (!VAR_16) {
  FUNC_4(&VAR_13->dev, "could not allocate codec\n");
  return -VAR_8;
 }
 VAR_15 = &VAR_16->codec;

 FUNC_10(&VAR_15->mutex);
 FUNC_0(&VAR_15->dapm_widgets);
 FUNC_0(&VAR_15->dapm_paths);

 VAR_15->dev = &VAR_13->dev;
 VAR_15->name = "CS4270";
 VAR_15->owner = VAR_10;
 VAR_15->dai = &VAR_12;
 VAR_15->num_dai = 1;
 VAR_15->private_data = VAR_16;
 VAR_15->control_data = VAR_13;
 VAR_15->read = FUNC_3;
 VAR_15->write = FUNC_2;
 VAR_15->reg_cache = VAR_16->reg_cache;
 VAR_15->reg_cache_size = VAR_3;



 VAR_18 = FUNC_1(VAR_15);
 if (VAR_18 < 0) {
  FUNC_4(&VAR_13->dev, "failed to fill register cache\n");
  goto error_free_codec;
 }







 VAR_17 = FUNC_3(VAR_15, VAR_1);
 VAR_17 &= ~VAR_2;
 VAR_18 = FUNC_2(VAR_15, VAR_1, VAR_17);
 if (VAR_18 < 0) {
  FUNC_4(&VAR_13->dev, "i2c write failed\n");
  return VAR_18;
 }







 VAR_17 = FUNC_3(VAR_15, VAR_4);
 VAR_17 &= ~(VAR_5 | VAR_6);
 VAR_18 = FUNC_2(VAR_15, VAR_4, VAR_17);
 if (VAR_18 < 0) {
  FUNC_4(&VAR_13->dev, "i2c write failed\n");
  return VAR_18;
 }






 VAR_12.dev = &VAR_13->dev;





 VAR_11 = VAR_15;
 VAR_18 = FUNC_11(&VAR_12);
 if (VAR_18 < 0) {
  FUNC_4(&VAR_13->dev, "failed to register DAIe\n");
  goto error_free_codec;
 }

 FUNC_6(VAR_13, VAR_16);

 return 0;

error_free_codec:
 FUNC_8(VAR_16);
 VAR_11 = ((void*)0);
 VAR_12.dev = ((void*)0);

 return VAR_18;
}
