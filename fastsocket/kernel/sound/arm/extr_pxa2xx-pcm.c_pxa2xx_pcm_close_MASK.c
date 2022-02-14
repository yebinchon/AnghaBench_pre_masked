
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; struct pxa2xx_pcm_client* private_data; } ;
struct pxa2xx_runtime_data {int dma_ch; } ;
struct pxa2xx_pcm_client {int (* shutdown ) (struct snd_pcm_substream*) ;} ;
struct TYPE_2__ {struct pxa2xx_runtime_data* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct pxa2xx_pcm_client *VAR_1 = VAR_0->private_data;
 struct pxa2xx_runtime_data *VAR_2 = VAR_0->runtime->private_data;

 FUNC_1(VAR_2->dma_ch);
 VAR_1->shutdown(VAR_0);

 return FUNC_0(VAR_0);
}
