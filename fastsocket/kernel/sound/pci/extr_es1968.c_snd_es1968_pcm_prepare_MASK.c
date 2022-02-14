
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int format; struct esschan* private_data; } ;
struct esschan {int wav_shift; int fmt; int mode; int bob_freq; int frag_size; int dma_size; } ;
struct es1968 {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct es1968*,struct esschan*,struct snd_pcm_runtime*) ;
 int FUNC_1 (struct es1968*,struct esschan*,struct snd_pcm_runtime*) ;
 int FUNC_2 (struct es1968*,struct esschan*,struct snd_pcm_runtime*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct es1968* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_2)
{
 struct es1968 *VAR_3 = FUNC_6(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct esschan *VAR_5 = VAR_4->private_data;

 VAR_5->dma_size = FUNC_4(VAR_2);
 VAR_5->frag_size = FUNC_5(VAR_2);

 VAR_5->wav_shift = 1;
 VAR_5->fmt = 0;
 if (FUNC_3(VAR_4->format) == 16)
  VAR_5->fmt |= VAR_0;
 if (VAR_4->channels > 1) {
  VAR_5->fmt |= VAR_1;
  if (VAR_5->fmt & VAR_0)
   VAR_5->wav_shift++;
 }
 VAR_5->bob_freq = FUNC_0(VAR_3, VAR_5, VAR_4);

 switch (VAR_5->mode) {
 case 128:
  FUNC_2(VAR_3, VAR_5, VAR_4);
  break;
 case 129:
  FUNC_1(VAR_3, VAR_5, VAR_4);
  break;
 }

 return 0;
}
