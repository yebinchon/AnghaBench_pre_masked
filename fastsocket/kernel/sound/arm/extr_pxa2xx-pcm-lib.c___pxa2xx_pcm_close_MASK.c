
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct pxa2xx_runtime_data* private_data; } ;
struct pxa2xx_runtime_data {int dma_desc_array_phys; int dma_desc_array; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct pxa2xx_runtime_data*) ;

int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct pxa2xx_runtime_data *VAR_3 = VAR_2->private_data;

 FUNC_0(VAR_1->pcm->card->dev, VAR_0,
         VAR_3->dma_desc_array, VAR_3->dma_desc_array_phys);
 FUNC_1(VAR_3);
 return 0;
}
