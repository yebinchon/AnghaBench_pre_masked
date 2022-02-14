
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {size_t device; struct snd_ali* private_data; } ;
struct snd_ali {int ** pcm; } ;



__attribute__((used)) static void FUNC_0(struct snd_pcm *VAR_0)
{
 struct snd_ali *VAR_1 = VAR_0->private_data;
 VAR_1->pcm[VAR_0->device] = ((void*)0);
}
