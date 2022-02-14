
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int hw; int dma_area; } ;
struct snd_msnd {struct snd_pcm_substream* playback_substream; int mappedbase; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct snd_msnd*) ;
 int VAR_2 ;
 struct snd_msnd* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 struct snd_msnd *VAR_5 = FUNC_3(VAR_3);

 FUNC_1(VAR_0, &VAR_5->flags);
 FUNC_0(VAR_1, &VAR_5->flags);
 FUNC_2(VAR_5);

 VAR_4->dma_area = VAR_5->mappedbase;
 VAR_4->dma_bytes = 0x3000;

 VAR_5->playback_substream = VAR_3;
 VAR_4->hw = VAR_2;
 return 0;
}
