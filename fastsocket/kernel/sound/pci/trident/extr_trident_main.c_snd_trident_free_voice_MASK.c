
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {void (* private_free ) (struct snd_trident_voice*) ;int * extra; int * substream; int * sample_ops; scalar_t__ spdif; scalar_t__ capture; scalar_t__ midi; scalar_t__ synth; scalar_t__ pcm; scalar_t__ use; int number; int * private_data; } ;
struct snd_trident {int voice_alloc; } ;


 int FUNC_0 (struct snd_trident*,int ,int ) ;
 int FUNC_1 (struct snd_trident*,int ) ;
 int FUNC_2 (struct snd_trident*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct snd_trident * VAR_0, struct snd_trident_voice *VAR_1)
{
 unsigned long VAR_2;
 void (*VAR_3)(struct snd_trident_voice *);
 void *VAR_4;

 if (VAR_1 == ((void*)0) || !VAR_1->use)
  return;
 FUNC_0(VAR_0, VAR_1->number, VAR_1->number);
 FUNC_3(&VAR_0->voice_alloc, VAR_2);
 VAR_3 = VAR_1->private_free;
 VAR_4 = VAR_1->private_data;
 VAR_1->private_free = ((void*)0);
 VAR_1->private_data = ((void*)0);
 if (VAR_1->pcm)
  FUNC_1(VAR_0, VAR_1->number);
 if (VAR_1->synth)
  FUNC_2(VAR_0, VAR_1->number);
 VAR_1->use = VAR_1->pcm = VAR_1->synth = VAR_1->midi = 0;
 VAR_1->capture = VAR_1->spdif = 0;
 VAR_1->sample_ops = ((void*)0);
 VAR_1->substream = ((void*)0);
 VAR_1->extra = ((void*)0);
 FUNC_4(&VAR_0->voice_alloc, VAR_2);
 if (VAR_3)
  VAR_3(VAR_1);
}
