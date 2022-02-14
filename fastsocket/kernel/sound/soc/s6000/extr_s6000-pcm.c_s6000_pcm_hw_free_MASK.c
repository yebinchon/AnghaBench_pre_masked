
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct s6000_pcm_dma_params {int in_use; int rate; int lock; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {struct s6000_pcm_dma_params* dma_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct s6000_pcm_dma_params *VAR_2 = VAR_1->dai->cpu_dai->dma_data;

 FUNC_1(&VAR_2->lock);
 VAR_2->in_use &= ~(1 << VAR_0->stream);
 if (!VAR_2->in_use)
  VAR_2->rate = -1;
 FUNC_2(&VAR_2->lock);

 return FUNC_0(VAR_0);
}
