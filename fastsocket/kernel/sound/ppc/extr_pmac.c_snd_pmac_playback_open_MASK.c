
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {int playback; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {int hw; } ;


 struct snd_pmac* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pmac*,int *,struct snd_pcm_substream*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_pmac *VAR_2 = FUNC_0(VAR_1);

 VAR_1->runtime->hw = VAR_0;
 return FUNC_1(VAR_2, &VAR_2->playback, VAR_1);
}
