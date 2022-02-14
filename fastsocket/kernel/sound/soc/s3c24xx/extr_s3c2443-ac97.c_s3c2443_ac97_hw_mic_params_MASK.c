
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int * dma_data; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_3,
          struct snd_pcm_hw_params *VAR_4,
          struct snd_soc_dai *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_3->private_data;
 struct snd_soc_dai *VAR_7 = VAR_6->dai->cpu_dai;

 if (VAR_3->stream == VAR_1)
  return -VAR_0;
 else
  VAR_7->dma_data = &VAR_2;

 return 0;
}
