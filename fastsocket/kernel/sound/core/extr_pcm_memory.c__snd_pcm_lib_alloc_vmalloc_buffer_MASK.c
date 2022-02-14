
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {size_t dma_bytes; scalar_t__ dma_area; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_1 (size_t,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct snd_pcm_substream *VAR_3,
          size_t VAR_4, gfp_t VAR_5)
{
 struct snd_pcm_runtime *VAR_6;

 if (FUNC_0(VAR_3))
  return -VAR_0;
 VAR_6 = VAR_3->runtime;
 if (VAR_6->dma_area) {
  if (VAR_6->dma_bytes >= VAR_4)
   return 0;
  FUNC_2(VAR_6->dma_area);
 }
 VAR_6->dma_area = FUNC_1(VAR_4, VAR_5, VAR_2);
 if (!VAR_6->dma_area)
  return -VAR_1;
 VAR_6->dma_bytes = VAR_4;
 return 1;
}
