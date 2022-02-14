
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emux_voice {int state; int * block; int * zone; int * port; int * chan; scalar_t__ time; } ;
struct TYPE_2__ {int (* free_voice ) (struct snd_emux_voice*) ;int (* terminate ) (struct snd_emux_voice*) ;} ;
struct snd_emux {TYPE_1__ ops; int use_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_emux_voice*) ;
 int FUNC_1 (struct snd_emux_voice*) ;

__attribute__((used)) static void
FUNC_2(struct snd_emux *VAR_1, struct snd_emux_voice *VAR_2, int VAR_3)
{
 VAR_1->ops.terminate(VAR_2);
 VAR_2->time = VAR_1->use_time++;
 VAR_2->chan = ((void*)0);
 VAR_2->port = ((void*)0);
 VAR_2->zone = ((void*)0);
 VAR_2->block = ((void*)0);
 VAR_2->state = VAR_0;
 if (VAR_3 && VAR_1->ops.free_voice)
  VAR_1->ops.free_voice(VAR_2);
}
