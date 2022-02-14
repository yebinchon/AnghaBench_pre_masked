
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_dai*,int) ;
 int FUNC_2 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_6,
     struct snd_pcm_hw_params *VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_6->private_data;
 struct snd_soc_dai *VAR_9 = VAR_8->dai->codec_dai;
 struct snd_soc_dai *VAR_10 = VAR_8->dai->cpu_dai;
 unsigned int VAR_11 = 0;
 int VAR_12;

 switch (FUNC_0(VAR_7)) {
 case 8000:
 case 16000:
 case 48000:
 case 96000:
  VAR_11 = 12288000;
  break;
 case 11025:
 case 22050:
 case 44100:
  VAR_11 = 11289600;
  break;
 }


 VAR_12 = FUNC_1(VAR_9, VAR_4
      | VAR_5
      | VAR_3);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_1(VAR_10, VAR_4
      | VAR_5
      | VAR_3);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_9, 0, VAR_11,
         VAR_1);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_2(VAR_10, VAR_0, VAR_11,
  VAR_2);

 return VAR_12;
}
