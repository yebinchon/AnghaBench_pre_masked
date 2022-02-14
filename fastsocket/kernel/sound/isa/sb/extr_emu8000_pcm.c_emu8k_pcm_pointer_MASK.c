
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_emu8k_pcm {scalar_t__ running; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {struct snd_emu8k_pcm* private_data; } ;


 int FUNC_0 (struct snd_emu8k_pcm*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu8k_pcm *VAR_1 = VAR_0->runtime->private_data;
 if (VAR_1->running)
  return FUNC_0(VAR_1, 0);
 return 0;
}
