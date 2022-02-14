
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {char* name; int num_dai; int dev; int (* write ) (struct snd_soc_codec*,int ,int) ;int dapm_paths; int dapm_widgets; int read; TYPE_1__* dai; int owner; int reg_cache_size; int reg_cache; struct ad1836_priv* private_data; int mutex; } ;
struct ad1836_priv {int reg_cache; struct snd_soc_codec codec; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int VAR_13 ;
 struct snd_soc_codec* VAR_14 ;
 TYPE_1__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct ad1836_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snd_soc_codec*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct snd_soc_codec*) ;
 int FUNC_8 (struct snd_soc_codec*,int ,int) ;
 int FUNC_9 (struct snd_soc_codec*,int ,int) ;
 int FUNC_10 (struct snd_soc_codec*,int ,int) ;
 int FUNC_11 (struct snd_soc_codec*,int ,int) ;
 int FUNC_12 (struct snd_soc_codec*,int ,int) ;
 int FUNC_13 (struct snd_soc_codec*,int ,int) ;
 int FUNC_14 (struct snd_soc_codec*,int ,int) ;
 int FUNC_15 (struct snd_soc_codec*,int ,int) ;
 int FUNC_16 (struct snd_soc_codec*,int ,int) ;
 int FUNC_17 (struct snd_soc_codec*,int ,int) ;
 int FUNC_18 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_19(struct ad1836_priv *VAR_17)
{
 int VAR_18;
 struct snd_soc_codec *VAR_19 = &VAR_17->codec;

 if (VAR_14) {
  FUNC_2(VAR_19->dev, "Another ad1836 is registered\n");
  return -VAR_12;
 }

 FUNC_4(&VAR_19->mutex);
 FUNC_0(&VAR_19->dapm_widgets);
 FUNC_0(&VAR_19->dapm_paths);
 VAR_19->private_data = VAR_17;
 VAR_19->reg_cache = VAR_17->reg_cache;
 VAR_19->reg_cache_size = VAR_11;
 VAR_19->name = "AD1836";
 VAR_19->owner = VAR_13;
 VAR_19->dai = &VAR_15;
 VAR_19->num_dai = 1;
 VAR_19->write = FUNC_1;
 VAR_19->read = VAR_16;
 FUNC_0(&VAR_19->dapm_widgets);
 FUNC_0(&VAR_19->dapm_paths);

 VAR_15.dev = VAR_19->dev;
 VAR_14 = VAR_19;



 VAR_19->write(VAR_19, VAR_3, 0x300);

 VAR_19->write(VAR_19, VAR_4, 0x0);

 VAR_19->write(VAR_19, VAR_0, 0x100);

 VAR_19->write(VAR_19, VAR_1, 0x180);

 VAR_19->write(VAR_19, VAR_2, 0x3A);

 VAR_19->write(VAR_19, VAR_5, 0x3FF);
 VAR_19->write(VAR_19, VAR_8, 0x3FF);
 VAR_19->write(VAR_19, VAR_6, 0x3FF);
 VAR_19->write(VAR_19, VAR_9, 0x3FF);
 VAR_19->write(VAR_19, VAR_7, 0x3FF);
 VAR_19->write(VAR_19, VAR_10, 0x3FF);

 VAR_18 = FUNC_5(VAR_19);
 if (VAR_18 != 0) {
  FUNC_2(VAR_19->dev, "Failed to register codec: %d\n", VAR_18);
  FUNC_3(VAR_17);
  return VAR_18;
 }

 VAR_18 = FUNC_6(&VAR_15);
 if (VAR_18 != 0) {
  FUNC_2(VAR_19->dev, "Failed to register DAI: %d\n", VAR_18);
  FUNC_7(VAR_19);
  FUNC_3(VAR_17);
  return VAR_18;
 }

 return 0;
}
