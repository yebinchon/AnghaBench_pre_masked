
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dma_buffer; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int * dma_buffer_p; int * dma_area; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcm_substream*,int *) ;

int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2;

 if (FUNC_0(VAR_1))
  return -VAR_0;
 VAR_2 = VAR_1->runtime;
 if (VAR_2->dma_area == ((void*)0))
  return 0;
 if (VAR_2->dma_buffer_p != &VAR_1->dma_buffer) {

  FUNC_2(VAR_2->dma_buffer_p);
  FUNC_1(VAR_2->dma_buffer_p);
 }
 FUNC_3(VAR_1, ((void*)0));
 return 0;
}
