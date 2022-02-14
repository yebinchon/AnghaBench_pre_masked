
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ number; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_es18xx {int caps; int dma2_shift; int dma1_shift; scalar_t__ capture_a_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct snd_es18xx* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_4,
      struct snd_pcm_hw_params *VAR_5)
{
 struct snd_es18xx *VAR_6 = FUNC_6(VAR_4);
 int VAR_7, VAR_8;

 VAR_7 = 0;
 if (FUNC_2(VAR_5) == 2)
  VAR_7++;
 if (FUNC_4(FUNC_3(VAR_5)) == 16)
  VAR_7++;

 if (VAR_4->number == 0 && (VAR_6->caps & VAR_2)) {
  if ((VAR_6->caps & VAR_1) &&
      (VAR_6->capture_a_substream) &&
      FUNC_2(VAR_5) != 1) {
   FUNC_0(VAR_5, VAR_3);
   return -VAR_0;
  }
  VAR_6->dma2_shift = VAR_7;
 } else {
  VAR_6->dma1_shift = VAR_7;
 }
 if ((VAR_8 = FUNC_5(VAR_4, FUNC_1(VAR_5))) < 0)
  return VAR_8;
 return 0;
}
