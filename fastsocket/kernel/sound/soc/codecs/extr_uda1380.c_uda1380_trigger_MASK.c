
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uda1380_priv {int work; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct uda1380_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2, int VAR_3,
  struct snd_soc_dai *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_2->private_data;
 struct snd_soc_device *VAR_6 = VAR_5->socdev;
 struct snd_soc_codec *VAR_7 = VAR_6->card->codec;
 struct uda1380_priv *VAR_8 = VAR_7->private_data;
 int VAR_9 = FUNC_1(VAR_7, VAR_1);

 switch (VAR_3) {
 case 129:
 case 130:
  FUNC_2(VAR_7, VAR_1,
     VAR_9 & ~VAR_0);
  FUNC_0(&VAR_8->work);
  break;
 case 128:
 case 131:
  FUNC_2(VAR_7, VAR_1,
     VAR_9 | VAR_0);
  FUNC_0(&VAR_8->work);
  break;
 }
 return 0;
}
