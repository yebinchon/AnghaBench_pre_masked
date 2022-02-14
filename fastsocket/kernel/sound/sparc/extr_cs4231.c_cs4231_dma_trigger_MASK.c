
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct cs4231_dma_control {int (* enable ) (struct cs4231_dma_control*,int) ;int (* prepare ) (struct cs4231_dma_control*,int) ;} ;
struct snd_cs4231 {int c_periods_sent; int capture_substream; struct cs4231_dma_control c_dma; int p_periods_sent; int playback_substream; struct cs4231_dma_control p_dma; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct cs4231_dma_control*,int ,int *) ;
 struct snd_cs4231* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct cs4231_dma_control*,int) ;
 int FUNC_3 (struct cs4231_dma_control*,int) ;
 int FUNC_4 (struct cs4231_dma_control*,int) ;
 int FUNC_5 (struct cs4231_dma_control*,int) ;
 int FUNC_6 (struct cs4231_dma_control*,int) ;
 int FUNC_7 (struct cs4231_dma_control*,int) ;

__attribute__((used)) static void FUNC_8(struct snd_pcm_substream *VAR_2,
          unsigned int VAR_3, int VAR_4)
{
 struct snd_cs4231 *VAR_5 = FUNC_1(VAR_2);
 struct cs4231_dma_control *VAR_6;

 if (VAR_3 & VAR_0) {
  VAR_6 = &VAR_5->p_dma;
  if (VAR_4) {
   VAR_6->prepare(VAR_6, 0);
   VAR_6->enable(VAR_6, 1);
   FUNC_0(VAR_6,
    VAR_5->playback_substream,
    &VAR_5->p_periods_sent);
  } else {
   VAR_6->enable(VAR_6, 0);
  }
 }
 if (VAR_3 & VAR_1) {
  VAR_6 = &VAR_5->c_dma;
  if (VAR_4) {
   VAR_6->prepare(VAR_6, 1);
   VAR_6->enable(VAR_6, 1);
   FUNC_0(VAR_6,
    VAR_5->capture_substream,
    &VAR_5->c_periods_sent);
  } else {
   VAR_6->enable(VAR_6, 0);
  }
 }
}
