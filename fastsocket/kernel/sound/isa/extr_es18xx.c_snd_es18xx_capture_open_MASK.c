
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_es18xx {int caps; struct snd_pcm_substream* capture_a_substream; TYPE_2__* playback_a_substream; scalar_t__ playback_b_substream; } ;
struct TYPE_4__ {TYPE_1__* runtime; } ;
struct TYPE_3__ {int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct snd_es18xx* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
        struct snd_es18xx *VAR_9 = FUNC_1(VAR_7);

        if (VAR_9->playback_b_substream)
                return -VAR_0;
 if ((VAR_9->caps & VAR_1) &&
     VAR_9->playback_a_substream &&
     VAR_9->playback_a_substream->runtime->channels != 1)
  return -VAR_0;
        VAR_9->capture_a_substream = VAR_7;
 VAR_7->runtime->hw = VAR_6;
 FUNC_0(VAR_8, 0, VAR_3,
          (VAR_9->caps & VAR_2) ? &VAR_4 : &VAR_5);
        return 0;
}
