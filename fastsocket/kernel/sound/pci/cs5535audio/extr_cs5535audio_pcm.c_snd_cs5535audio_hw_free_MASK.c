
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct cs5535audio_dma {scalar_t__ pcm_open_flag; } ;
struct cs5535audio {int ac97; struct snd_pcm_substream* playback_substream; } ;
struct TYPE_2__ {struct cs5535audio_dma* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cs5535audio*,struct cs5535audio_dma*,struct snd_pcm_substream*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct cs5535audio* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct cs5535audio *VAR_3 = FUNC_3(VAR_2);
 struct cs5535audio_dma *VAR_4 = VAR_2->runtime->private_data;

 if (VAR_4->pcm_open_flag) {
  if (VAR_2 == VAR_3->playback_substream)
   FUNC_1(VAR_3->ac97,
     VAR_0, 0);
  else
   FUNC_1(VAR_3->ac97,
     VAR_1, 0);
  VAR_4->pcm_open_flag = 0;
 }
 FUNC_0(VAR_3, VAR_4, VAR_2);
 return FUNC_2(VAR_2);
}
