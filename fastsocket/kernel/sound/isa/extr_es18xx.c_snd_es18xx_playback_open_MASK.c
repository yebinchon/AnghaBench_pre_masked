
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_es18xx {int caps; struct snd_pcm_substream* playback_b_substream; TYPE_2__* capture_a_substream; struct snd_pcm_substream* playback_a_substream; } ;
struct TYPE_4__ {TYPE_1__* runtime; } ;
struct TYPE_3__ {int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct snd_es18xx* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_9)
{
 struct snd_pcm_runtime *VAR_10 = VAR_9->runtime;
        struct snd_es18xx *VAR_11 = FUNC_2(VAR_9);

 if (VAR_9->number == 0 && (VAR_11->caps & VAR_4)) {
  if ((VAR_11->caps & VAR_2) &&
      VAR_11->capture_a_substream &&
      VAR_11->capture_a_substream->runtime->channels != 1)
   return -VAR_0;
  VAR_11->playback_a_substream = VAR_9;
 } else if (VAR_9->number <= 1) {
  if (VAR_11->capture_a_substream)
   return -VAR_0;
  VAR_11->playback_b_substream = VAR_9;
 } else {
  FUNC_0();
  return -VAR_1;
 }
 VAR_9->runtime->hw = VAR_8;
 FUNC_1(VAR_10, 0, VAR_5,
          (VAR_11->caps & VAR_3) ? &VAR_6 : &VAR_7);
        return 0;
}
