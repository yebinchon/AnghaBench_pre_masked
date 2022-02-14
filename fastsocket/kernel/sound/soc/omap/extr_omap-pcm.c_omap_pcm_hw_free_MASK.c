
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct omap_runtime_data* private_data; } ;
struct omap_runtime_data {int * dma_data; int dma_ch; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct omap_runtime_data *VAR_2 = VAR_1->private_data;

 if (VAR_2->dma_data == ((void*)0))
  return 0;

 FUNC_0(VAR_2->dma_ch, VAR_2->dma_ch);
 FUNC_1(VAR_2->dma_ch);
 VAR_2->dma_data = ((void*)0);

 FUNC_2(VAR_0, ((void*)0));

 return 0;
}
