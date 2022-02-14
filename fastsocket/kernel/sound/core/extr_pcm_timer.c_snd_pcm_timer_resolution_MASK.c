
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer {struct snd_pcm_substream* private_data; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {unsigned long timer_resolution; } ;



__attribute__((used)) static unsigned long FUNC_0(struct snd_timer * VAR_0)
{
 struct snd_pcm_substream *VAR_1;

 VAR_1 = VAR_0->private_data;
 return VAR_1->runtime ? VAR_1->runtime->timer_resolution : 0;
}
