
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {int dev; struct cs4270_private* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs4270_private {unsigned int mclk; int mode; scalar_t__ slave_mode; } ;
struct TYPE_4__ {unsigned int ratio; int mclk; int speed_mode; } ;
struct TYPE_3__ {struct snd_soc_codec* codec; } ;


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
 unsigned int VAR_12 ;


 TYPE_2__* VAR_13 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_14,
       struct snd_pcm_hw_params *VAR_15,
       struct snd_soc_dai *VAR_16)
{
 struct snd_soc_pcm_runtime *VAR_17 = VAR_14->private_data;
 struct snd_soc_device *VAR_18 = VAR_17->socdev;
 struct snd_soc_codec *VAR_19 = VAR_18->card->codec;
 struct cs4270_private *VAR_20 = VAR_19->private_data;
 int VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 int VAR_25;



 VAR_23 = FUNC_1(VAR_15);
 VAR_24 = VAR_20->mclk / VAR_23;

 for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {
  if (VAR_13[VAR_22].ratio == VAR_24)
   break;
 }

 if (VAR_22 == VAR_12) {

  FUNC_0(VAR_19->dev, "could not find matching ratio\n");
  return -VAR_11;
 }



 VAR_25 = FUNC_2(VAR_19, VAR_7);
 VAR_25 &= ~(VAR_10 | VAR_8);
 VAR_25 |= VAR_13[VAR_22].mclk;

 if (VAR_20->slave_mode)
  VAR_25 |= VAR_9;
 else
  VAR_25 |= VAR_13[VAR_22].speed_mode;

 VAR_21 = FUNC_3(VAR_19, VAR_7, VAR_25);
 if (VAR_21 < 0) {
  FUNC_0(VAR_19->dev, "i2c write failed\n");
  return VAR_21;
 }



 VAR_25 = FUNC_2(VAR_19, VAR_0);
 VAR_25 &= ~(VAR_6 | VAR_3);

 switch (VAR_20->mode) {
 case 129:
  VAR_25 |= VAR_4 | VAR_1;
  break;
 case 128:
  VAR_25 |= VAR_5 | VAR_2;
  break;
 default:
  FUNC_0(VAR_19->dev, "unknown dai format\n");
  return -VAR_11;
 }

 VAR_21 = FUNC_3(VAR_19, VAR_0, VAR_25);
 if (VAR_21 < 0) {
  FUNC_0(VAR_19->dev, "i2c write failed\n");
  return VAR_21;
 }

 return VAR_21;
}
