
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {TYPE_1__* card; struct pcm3008_setup_data* codec_data; } ;
struct snd_soc_codec {int dummy; } ;
struct platform_device {int dummy; } ;
struct pcm3008_setup_data {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (struct snd_soc_codec*) ;
 int FUNC_1 (struct pcm3008_setup_data*) ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct snd_soc_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct snd_soc_device *VAR_1 = FUNC_2(VAR_0);
 struct snd_soc_codec *VAR_2 = VAR_1->card->codec;
 struct pcm3008_setup_data *VAR_3 = VAR_1->codec_data;

 if (!VAR_2)
  return 0;

 FUNC_1(VAR_3);
 FUNC_3(VAR_1);
 FUNC_0(VAR_1->card->codec);

 return 0;
}
