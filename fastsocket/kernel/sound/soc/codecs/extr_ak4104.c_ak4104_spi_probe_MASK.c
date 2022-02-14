
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int bits_per_word; int dev; int mode; } ;
struct snd_soc_codec {int num_dai; int reg_cache_size; int reg_cache; struct spi_device* control_data; struct ak4104_private* private_data; TYPE_1__* dai; int owner; int name; int * dev; int dapm_paths; int dapm_widgets; int mutex; } ;
struct ak4104_private {int reg_cache; struct snd_soc_codec codec; } ;
struct TYPE_3__ {int * dev; } ;


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
 int FUNC_0 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 struct snd_soc_codec* VAR_14 ;
 TYPE_1__ VAR_15 ;
 int FUNC_1 (struct snd_soc_codec*) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct ak4104_private*) ;
 struct ak4104_private* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct spi_device*,struct ak4104_private*) ;
 int FUNC_11 (struct spi_device*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_16)
{
 struct snd_soc_codec *VAR_17;
 struct ak4104_private *VAR_18;
 int VAR_19, VAR_20;

 VAR_16->bits_per_word = 8;
 VAR_16->mode = VAR_12;
 VAR_19 = FUNC_11(VAR_16);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_18 = FUNC_7(sizeof(struct ak4104_private), VAR_11);
 if (!VAR_18) {
  FUNC_4(&VAR_16->dev, "could not allocate codec\n");
  return -VAR_10;
 }

 VAR_17 = &VAR_18->codec;
 FUNC_8(&VAR_17->mutex);
 FUNC_0(&VAR_17->dapm_widgets);
 FUNC_0(&VAR_17->dapm_paths);

 VAR_17->dev = &VAR_16->dev;
 VAR_17->name = VAR_8;
 VAR_17->owner = VAR_13;
 VAR_17->dai = &VAR_15;
 VAR_17->num_dai = 1;
 VAR_17->private_data = VAR_18;
 VAR_17->control_data = VAR_16;
 VAR_17->reg_cache = VAR_18->reg_cache;
 VAR_17->reg_cache_size = VAR_2;


 VAR_19 = FUNC_1(VAR_17);
 if (VAR_19 < 0) {
  FUNC_4(&VAR_16->dev, "failed to fill register cache\n");
  return VAR_19;
 }




 if (FUNC_2(VAR_17, VAR_4) !=
      VAR_6) {
  VAR_19 = -VAR_9;
  goto error_free_codec;
 }


 VAR_20 = FUNC_2(VAR_17, VAR_3);
 VAR_20 |= VAR_0 | VAR_1;
 VAR_19 = FUNC_3(VAR_17, VAR_3, VAR_20);
 if (VAR_19 < 0)
  goto error_free_codec;


 VAR_20 = FUNC_2(VAR_17, VAR_5);
 VAR_20 |= VAR_7;
 VAR_19 = FUNC_3(VAR_17, VAR_5, VAR_20);
 if (VAR_19 < 0)
  goto error_free_codec;

 VAR_14 = VAR_17;
 VAR_19 = FUNC_9(&VAR_15);
 if (VAR_19 < 0) {
  FUNC_4(&VAR_16->dev, "failed to register DAI\n");
  goto error_free_codec;
 }

 FUNC_10(VAR_16, VAR_18);
 FUNC_5(&VAR_16->dev, "SPI device initialized\n");
 return 0;

error_free_codec:
 FUNC_6(VAR_18);
 VAR_15.dev = ((void*)0);
 return VAR_19;
}
