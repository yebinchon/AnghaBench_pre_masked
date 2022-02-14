
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct pxa2xx_runtime_data* private_data; int hw; } ;
struct pxa2xx_runtime_data {int dma_desc_array; int dma_desc_array_phys; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct pxa2xx_runtime_data*) ;
 struct pxa2xx_runtime_data* FUNC_2 (int,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct snd_pcm_runtime*,int ) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,int) ;

int FUNC_5(struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 struct pxa2xx_runtime_data *VAR_9;
 int VAR_10;

 VAR_8->hw = VAR_6;






 VAR_10 = FUNC_4(VAR_8, 0,
  VAR_5, 32);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_4(VAR_8, 0,
  VAR_3, 32);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_3(VAR_8,
         VAR_4);
 if (VAR_10 < 0)
  goto out;

 VAR_10 = -VAR_0;
 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  goto out;
 VAR_9->dma_desc_array =
  FUNC_0(VAR_7->pcm->card->dev, VAR_2,
           &VAR_9->dma_desc_array_phys, VAR_1);
 if (!VAR_9->dma_desc_array)
  goto err1;

 VAR_8->private_data = VAR_9;
 return 0;

 err1:
 FUNC_1(VAR_9);
 out:
 return VAR_10;
}
