
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct ensoniq {int mode; int * playback1_substream; } ;


 int VAR_0 ;
 struct ensoniq* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct ensoniq *VAR_2 = FUNC_0(VAR_1);

 VAR_2->playback1_substream = ((void*)0);
 VAR_2->mode &= ~VAR_0;
 return 0;
}
