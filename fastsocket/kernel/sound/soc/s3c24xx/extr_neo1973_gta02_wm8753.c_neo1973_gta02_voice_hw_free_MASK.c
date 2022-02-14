
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {struct snd_soc_dai* codec_dai; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_dai*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_dai *VAR_3 = VAR_2->dai->codec_dai;


 return FUNC_0(VAR_3, VAR_0, 0, 0);
}
