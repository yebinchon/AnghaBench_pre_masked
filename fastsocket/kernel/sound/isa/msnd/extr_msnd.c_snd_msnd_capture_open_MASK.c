
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int hw; scalar_t__ dma_area; } ;
struct snd_msnd {struct snd_pcm_substream* capture_substream; scalar_t__ mappedbase; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct snd_msnd*) ;
 struct snd_msnd* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct snd_msnd *VAR_4 = FUNC_3(VAR_2);

 FUNC_1(VAR_0, &VAR_4->flags);
 FUNC_2(VAR_4);
 VAR_3->dma_area = VAR_4->mappedbase + 0x3000;
 VAR_3->dma_bytes = 0x3000;
 FUNC_0(VAR_3->dma_area, 0, VAR_3->dma_bytes);
 VAR_4->capture_substream = VAR_2;
 VAR_3->hw = VAR_1;
 return 0;
}
