
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {struct snd_pcm_substream* private_data; } ;
struct snd_pcm_substream {int * timer; } ;



__attribute__((used)) static void FUNC_0(struct snd_timer *VAR_0)
{
 struct snd_pcm_substream *VAR_1 = VAR_0->private_data;
 VAR_1->timer = ((void*)0);
}
