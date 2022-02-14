
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97_bus {int** used_slots; int bus_lock; } ;
struct ac97_pcm {unsigned short aslots; int cur_dbl; size_t stream; struct snd_ac97_bus* bus; TYPE_1__* r; } ;
struct TYPE_2__ {int* rslots; int * codec; } ;


 int FUNC_0 (struct ac97_pcm*,int,int,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ac97_pcm *VAR_0)
{
 struct snd_ac97_bus *VAR_1;
 unsigned short VAR_2 = VAR_0->aslots;
 int VAR_3, VAR_4;
 VAR_1 = VAR_0->bus;
 FUNC_2(&VAR_0->bus->bus_lock);
 for (VAR_3 = 3; VAR_3 < 12; VAR_3++) {
  if (!(VAR_2 & (1 << VAR_3)))
   continue;
  for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
   VAR_1->used_slots[VAR_0->stream][VAR_4] &= ~(1 << VAR_3);
 }
 VAR_0->aslots = 0;
 VAR_0->cur_dbl = 0;
 FUNC_3(&VAR_0->bus->bus_lock);
 return 0;
}
