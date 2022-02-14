
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
 int FUNC_0 (struct snd_soc_dai*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3,
 struct snd_pcm_hw_params *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct snd_soc_dai *VAR_6 = VAR_5->dai->codec_dai;
 struct snd_soc_dai *VAR_7 = VAR_5->dai->cpu_dai;
 int VAR_8;


 VAR_8 = FUNC_0(VAR_6, VAR_1 |
  VAR_2 | VAR_0);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_0(VAR_7, VAR_1 |
  VAR_2 | VAR_0);
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
