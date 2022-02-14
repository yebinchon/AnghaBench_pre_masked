
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; struct pxa2xx_pcm_client* private_data; } ;
struct snd_pcm_runtime {struct pxa2xx_runtime_data* private_data; } ;
struct pxa2xx_runtime_data {int dma_ch; TYPE_1__* params; } ;
struct pxa2xx_pcm_client {int (* startup ) (struct snd_pcm_substream*) ;TYPE_1__* capture_params; TYPE_1__* playback_params; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3)
{
 struct pxa2xx_pcm_client *VAR_4 = VAR_3->private_data;
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 struct pxa2xx_runtime_data *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7)
  goto out;

 VAR_6 = VAR_5->private_data;

 VAR_6->params = (VAR_3->stream == VAR_1) ?
        VAR_4->playback_params : VAR_4->capture_params;
 VAR_7 = FUNC_3(VAR_6->params->name, VAR_0,
         VAR_2, VAR_3);
 if (VAR_7 < 0)
  goto err2;
 VAR_6->dma_ch = VAR_7;

 VAR_7 = VAR_4->startup(VAR_3);
 if (!VAR_7)
  goto out;

 FUNC_2(VAR_6->dma_ch);
 err2:
 FUNC_0(VAR_3);
 out:
 return VAR_7;
}
