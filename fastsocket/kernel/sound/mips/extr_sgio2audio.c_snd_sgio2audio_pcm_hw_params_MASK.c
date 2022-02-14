
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int * dma_area; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
     struct snd_pcm_hw_params *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 int VAR_4 = FUNC_0(VAR_2);


 if (VAR_3->dma_area)
  FUNC_1(VAR_3->dma_area);
 VAR_3->dma_area = FUNC_2(VAR_4);
 if (VAR_3->dma_area == ((void*)0))
  return -VAR_0;
 VAR_3->dma_bytes = VAR_4;
 return 0;
}
