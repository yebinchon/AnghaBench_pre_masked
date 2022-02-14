
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssm2602_priv {struct snd_pcm_substream* master_substream; struct snd_pcm_substream* slave_substream; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct i2c_client* control_data; struct ssm2602_priv* private_data; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {scalar_t__ sample_bits; scalar_t__ rate; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
      struct snd_soc_dai *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct snd_soc_device *VAR_5 = VAR_4->socdev;
 struct snd_soc_codec *VAR_6 = VAR_5->card->codec;
 struct ssm2602_priv *VAR_7 = VAR_6->private_data;
 struct i2c_client *VAR_8 = VAR_6->control_data;
 struct snd_pcm_runtime *VAR_9;





 if (VAR_7->master_substream) {
  VAR_9 = VAR_7->master_substream->runtime;
  FUNC_0(&VAR_8->dev, "Constraining to %d bits at %dHz\n",
   VAR_9->sample_bits,
   VAR_9->rate);

  if (VAR_9->rate != 0)
   FUNC_1(VAR_2->runtime,
           VAR_0,
           VAR_9->rate,
           VAR_9->rate);

  if (VAR_9->sample_bits != 0)
   FUNC_1(VAR_2->runtime,
           VAR_1,
           VAR_9->sample_bits,
           VAR_9->sample_bits);

  VAR_7->slave_substream = VAR_2;
 } else
  VAR_7->master_substream = VAR_2;

 return 0;
}
