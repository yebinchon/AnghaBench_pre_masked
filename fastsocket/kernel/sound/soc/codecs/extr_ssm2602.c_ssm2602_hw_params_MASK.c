
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ssm2602_priv {struct snd_pcm_substream* slave_substream; int sysclk; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct i2c_client* control_data; struct ssm2602_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_5__ {int sr; int bosr; int usb; } ;
struct TYPE_4__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_soc_codec*,int ) ;
 int FUNC_6 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_6,
 struct snd_pcm_hw_params *VAR_7,
 struct snd_soc_dai *VAR_8)
{
 u16 VAR_9;
 struct snd_soc_pcm_runtime *VAR_10 = VAR_6->private_data;
 struct snd_soc_device *VAR_11 = VAR_10->socdev;
 struct snd_soc_codec *VAR_12 = VAR_11->card->codec;
 struct ssm2602_priv *VAR_13 = VAR_12->private_data;
 struct i2c_client *VAR_14 = VAR_12->control_data;
 u16 VAR_15 = FUNC_5(VAR_12, VAR_3) & 0xfff3;
 int VAR_16 = FUNC_2(VAR_13->sysclk, FUNC_4(VAR_7));

 if (VAR_6 == VAR_13->slave_substream) {
  FUNC_1(&VAR_14->dev, "Ignoring hw_params for slave substream\n");
  return 0;
 }


 if (VAR_16 == FUNC_0(VAR_5))
  return -VAR_1;

 VAR_9 = (VAR_5[VAR_16].sr << 2) |
  (VAR_5[VAR_16].bosr << 1) | VAR_5[VAR_16].usb;

 FUNC_6(VAR_12, VAR_2, 0);
 FUNC_6(VAR_12, VAR_4, VAR_9);


 switch (FUNC_3(VAR_7)) {
 case 131:
  break;
 case 130:
  VAR_15 |= 0x0004;
  break;
 case 129:
  VAR_15 |= 0x0008;
  break;
 case 128:
  VAR_15 |= 0x000c;
  break;
 }
 FUNC_6(VAR_12, VAR_3, VAR_15);
 FUNC_6(VAR_12, VAR_2, VAR_0);
 return 0;
}
