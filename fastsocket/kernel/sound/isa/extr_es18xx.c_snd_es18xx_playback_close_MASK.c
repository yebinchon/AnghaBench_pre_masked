
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ number; } ;
struct snd_es18xx {int caps; int * playback_b_substream; int * playback_a_substream; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 struct snd_es18xx* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
        struct snd_es18xx *VAR_2 = FUNC_1(VAR_1);

 if (VAR_1->number == 0 && (VAR_2->caps & VAR_0))
  VAR_2->playback_a_substream = ((void*)0);
 else
  VAR_2->playback_b_substream = ((void*)0);

 FUNC_0(VAR_1);
 return 0;
}
