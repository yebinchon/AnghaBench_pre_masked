
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct emu10k1x_pcm* private_data; } ;
struct emu10k1x_pcm {TYPE_1__* voice; } ;
struct TYPE_2__ {int * epcm; scalar_t__ use; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct emu10k1x_pcm *VAR_2;

 if (VAR_1->private_data == ((void*)0))
  return 0;

 VAR_2 = VAR_1->private_data;

 if (VAR_2->voice) {
  VAR_2->voice->use = 0;
  VAR_2->voice->epcm = ((void*)0);
  VAR_2->voice = ((void*)0);
 }

 return FUNC_0(VAR_0);
}
