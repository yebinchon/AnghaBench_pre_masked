
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct emu10k1x_pcm* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct emu10k1x_pcm {TYPE_2__* voice; TYPE_1__* emu; } ;
struct TYPE_4__ {int use; struct emu10k1x_pcm* epcm; } ;
struct TYPE_3__ {TYPE_2__ capture_voice; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
           struct snd_pcm_hw_params *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct emu10k1x_pcm *VAR_4 = VAR_3->private_data;

 if (! VAR_4->voice) {
  if (VAR_4->emu->capture_voice.use)
   return -VAR_0;
  VAR_4->voice = &VAR_4->emu->capture_voice;
  VAR_4->voice->epcm = VAR_4;
  VAR_4->voice->use = 1;
 }

 return FUNC_1(VAR_1,
     FUNC_0(VAR_2));
}
