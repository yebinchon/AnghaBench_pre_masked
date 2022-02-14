
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {char* name; int num_dai; int dev; int (* write ) (struct snd_soc_codec*,int ,int) ;int dapm_paths; int dapm_widgets; int set_bias_level; int read; TYPE_1__* dai; int owner; int reg_cache_size; int reg_cache; struct ad1938_priv* private_data; int mutex; } ;
struct ad1938_priv {int reg_cache; struct snd_soc_codec codec; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 struct snd_soc_codec* VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_1 (struct snd_soc_codec*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct ad1938_priv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_soc_codec*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct snd_soc_codec*) ;
 int FUNC_9 (struct snd_soc_codec*,int ,int) ;
 int FUNC_10 (struct snd_soc_codec*,int ,int) ;
 int FUNC_11 (struct snd_soc_codec*,int ,int) ;
 int FUNC_12 (struct snd_soc_codec*,int ,int) ;
 int FUNC_13 (struct snd_soc_codec*,int ,int) ;
 int FUNC_14 (struct snd_soc_codec*,int ,int) ;
 int FUNC_15 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct ad1938_priv *VAR_14)
{
 int VAR_15;
 struct snd_soc_codec *VAR_16 = &VAR_14->codec;

 if (VAR_10) {
  FUNC_3(VAR_16->dev, "Another ad1938 is registered\n");
  return -VAR_8;
 }

 FUNC_5(&VAR_16->mutex);
 FUNC_0(&VAR_16->dapm_widgets);
 FUNC_0(&VAR_16->dapm_paths);
 VAR_16->private_data = VAR_14;
 VAR_16->reg_cache = VAR_14->reg_cache;
 VAR_16->reg_cache_size = VAR_5;
 VAR_16->name = "AD1938";
 VAR_16->owner = VAR_9;
 VAR_16->dai = &VAR_11;
 VAR_16->num_dai = 1;
 VAR_16->write = FUNC_2;
 VAR_16->read = VAR_12;
 VAR_16->set_bias_level = VAR_13;
 FUNC_0(&VAR_16->dapm_widgets);
 FUNC_0(&VAR_16->dapm_paths);

 VAR_11.dev = VAR_16->dev;
 VAR_10 = VAR_16;




 VAR_16->write(VAR_16, VAR_2, 0x0);

 VAR_16->write(VAR_16, VAR_4, 0x1A);

 VAR_16->write(VAR_16, VAR_3, 0x41);

 VAR_16->write(VAR_16, VAR_0, 0x3);

 VAR_16->write(VAR_16, VAR_1, 0x43);

 VAR_16->write(VAR_16, VAR_6, 0x9D);
 VAR_16->write(VAR_16, VAR_7, 0x04);

 FUNC_1(VAR_16);

 VAR_15 = FUNC_6(VAR_16);
 if (VAR_15 != 0) {
  FUNC_3(VAR_16->dev, "Failed to register codec: %d\n", VAR_15);
  FUNC_4(VAR_14);
  return VAR_15;
 }

 VAR_15 = FUNC_7(&VAR_11);
 if (VAR_15 != 0) {
  FUNC_3(VAR_16->dev, "Failed to register DAI: %d\n", VAR_15);
  FUNC_8(VAR_16);
  FUNC_4(VAR_14);
  return VAR_15;
 }

 return 0;
}
