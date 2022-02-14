
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {int playback; } ;
struct snd_pcm_substream {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 struct snd_pmac* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pmac*,int *,struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_pmac *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1, &VAR_1->playback, VAR_0);
}
