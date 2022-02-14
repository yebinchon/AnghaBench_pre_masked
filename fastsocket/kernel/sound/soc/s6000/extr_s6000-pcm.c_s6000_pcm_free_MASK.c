
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm {struct snd_soc_pcm_runtime* private_data; } ;
struct s6000_pcm_dma_params {int irq; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {struct s6000_pcm_dma_params* dma_data; } ;


 int FUNC_0 (int ,struct snd_pcm*) ;
 int FUNC_1 (struct snd_pcm*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct s6000_pcm_dma_params *VAR_2 = VAR_1->dai->cpu_dai->dma_data;

 FUNC_0(VAR_2->irq, VAR_0);
 FUNC_1(VAR_0);
}
