
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int dma_area; int hw; } ;
struct snd_cs4231 {scalar_t__ p_periods_sent; struct snd_pcm_substream* playback_substream; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_cs4231*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct snd_pcm_runtime*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_cs4231* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2)
{
 struct snd_cs4231 *VAR_3 = FUNC_4(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 int VAR_5;

 VAR_4->hw = VAR_1;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (VAR_5 < 0) {
  FUNC_2(VAR_4->dma_area, VAR_4->dma_bytes);
  return VAR_5;
 }
 VAR_3->playback_substream = VAR_2;
 VAR_3->p_periods_sent = 0;
 FUNC_3(VAR_2);
 FUNC_1(VAR_4);

 return 0;
}
