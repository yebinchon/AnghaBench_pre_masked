
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_riptide {int ** playback_substream; } ;
struct snd_pcm_substream {int number; TYPE_1__* runtime; } ;
struct pcmhw {int dummy; } ;
struct TYPE_2__ {int * private_data; } ;


 struct pcmhw* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct pcmhw*) ;
 struct snd_riptide* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_riptide *VAR_1 = FUNC_2(VAR_0);
 struct pcmhw *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_0->number;

 VAR_0->runtime->private_data = ((void*)0);
 VAR_1->playback_substream[VAR_3] = ((void*)0);
 FUNC_1(VAR_2);
 return 0;
}
