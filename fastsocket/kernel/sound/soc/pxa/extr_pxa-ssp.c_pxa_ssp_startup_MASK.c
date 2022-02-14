
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ssp; int irq; scalar_t__ port; } ;
struct ssp_priv {TYPE_3__ dev; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int * dma_data; scalar_t__ id; int active; struct ssp_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_5__ {int clk; } ;
struct TYPE_4__ {struct snd_soc_dai* cpu_dai; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->dai->cpu_dai;
 struct ssp_priv *VAR_5 = VAR_4->private_data;
 int VAR_6 = 0;

 if (!VAR_4->active) {
  VAR_5->dev.port = VAR_4->id + 1;
  VAR_5->dev.irq = VAR_0;
  FUNC_0(VAR_5->dev.ssp->clk);
  FUNC_2(&VAR_5->dev);
 }

 if (VAR_4->dma_data) {
  FUNC_1(VAR_4->dma_data);
  VAR_4->dma_data = ((void*)0);
 }
 return VAR_6;
}
