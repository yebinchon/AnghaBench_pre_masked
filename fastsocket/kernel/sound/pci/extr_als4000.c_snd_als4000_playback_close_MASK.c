
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int * playback_substream; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 struct snd_sb* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_sb *VAR_1 = FUNC_1(VAR_0);

 VAR_1->playback_substream = ((void*)0);
 FUNC_0(VAR_0);
 return 0;
}
