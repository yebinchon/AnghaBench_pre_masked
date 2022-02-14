
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali_voice {void (* private_free ) (void*) ;int * substream; scalar_t__ synth; scalar_t__ pcm; scalar_t__ use; int number; int * private_data; } ;
struct snd_ali {int voice_alloc; } ;


 int FUNC_0 (struct snd_ali*,int ,int ) ;
 int FUNC_1 (struct snd_ali*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct snd_ali * VAR_0,
          struct snd_ali_voice *VAR_1)
{
 void (*VAR_2)(void *);
 void *VAR_3;

 FUNC_2("free_voice: channel=%d\n",VAR_1->number);
 if (!VAR_1->use)
  return;
 FUNC_0(VAR_0, VAR_1->number, VAR_1->number);
 FUNC_3(&VAR_0->voice_alloc);
 VAR_2 = VAR_1->private_free;
 VAR_3 = VAR_1->private_data;
 VAR_1->private_free = ((void*)0);
 VAR_1->private_data = ((void*)0);
 if (VAR_1->pcm)
  FUNC_1(VAR_0, VAR_1->number);
 VAR_1->use = VAR_1->pcm = VAR_1->synth = 0;
 VAR_1->substream = ((void*)0);
 FUNC_4(&VAR_0->voice_alloc);
 if (VAR_2)
  VAR_2(VAR_3);
}
