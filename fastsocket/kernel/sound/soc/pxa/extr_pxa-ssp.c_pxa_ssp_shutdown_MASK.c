
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ssp; } ;
struct ssp_priv {TYPE_3__ dev; } ;
struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_soc_dai {int * dma_data; int active; struct ssp_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_5__ {struct snd_soc_dai* cpu_dai; } ;
struct TYPE_4__ {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_0,
        struct snd_soc_dai *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct snd_soc_dai *VAR_3 = VAR_2->dai->cpu_dai;
 struct ssp_priv *VAR_4 = VAR_3->private_data;

 if (!VAR_3->active) {
  FUNC_2(&VAR_4->dev);
  FUNC_0(VAR_4->dev.ssp->clk);
 }

 if (VAR_3->dma_data) {
  FUNC_1(VAR_3->dma_data);
  VAR_3->dma_data = ((void*)0);
 }
}
