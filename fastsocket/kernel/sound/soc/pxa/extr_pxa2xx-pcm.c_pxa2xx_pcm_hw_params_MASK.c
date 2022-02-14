
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct pxa2xx_runtime_data* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct pxa2xx_runtime_data {int dma_ch; struct pxa2xx_pcm_dma_params* params; } ;
struct pxa2xx_pcm_dma_params {int name; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {struct pxa2xx_pcm_dma_params* dma_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
 struct snd_pcm_hw_params *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct pxa2xx_runtime_data *VAR_5 = VAR_4->private_data;
 struct snd_soc_pcm_runtime *VAR_6 = VAR_2->private_data;
 struct pxa2xx_pcm_dma_params *VAR_7 = VAR_6->dai->cpu_dai->dma_data;
 int VAR_8;



 if (!VAR_7)
  return 0;



 if (VAR_5->params == ((void*)0)) {
  VAR_5->params = VAR_7;
  VAR_8 = FUNC_2(VAR_5->params->name, VAR_0,
         VAR_1, VAR_2);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_5->dma_ch = VAR_8;
 } else if (VAR_5->params != VAR_7) {
  FUNC_1(VAR_5->dma_ch);
  VAR_5->params = VAR_7;
  VAR_8 = FUNC_2(VAR_5->params->name, VAR_0,
         VAR_1, VAR_2);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_5->dma_ch = VAR_8;
 }

 return FUNC_0(VAR_2, VAR_3);
}
