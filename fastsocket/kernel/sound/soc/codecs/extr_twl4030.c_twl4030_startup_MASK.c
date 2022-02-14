
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_priv {struct snd_pcm_substream* master_substream; scalar_t__ configured; struct snd_pcm_substream* slave_substream; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct twl4030_priv* private_data; } ;
struct snd_pcm_substream {int runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (struct twl4030_priv*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct snd_soc_device *VAR_6 = VAR_5->socdev;
 struct snd_soc_codec *VAR_7 = VAR_6->card->codec;
 struct twl4030_priv *VAR_8 = VAR_7->private_data;

 if (VAR_8->master_substream) {
  VAR_8->slave_substream = VAR_3;



  if (VAR_8->configured)
   FUNC_1(VAR_8, VAR_8->master_substream);
 } else {
  if (!(FUNC_2(VAR_7, VAR_2) &
   VAR_1)) {



   FUNC_0(VAR_3->runtime,
      VAR_0,
      2, 2);
  }
  VAR_8->master_substream = VAR_3;
 }

 return 0;
}
