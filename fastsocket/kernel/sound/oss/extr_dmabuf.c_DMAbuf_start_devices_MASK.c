
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audio_operations {scalar_t__ open_mode; int go; int enable_bits; TYPE_1__* d; } ;
struct TYPE_2__ {int (* trigger ) (int,int) ;} ;


 struct audio_operations** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

void FUNC_1(unsigned int VAR_2)
{
 struct audio_operations *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (!(VAR_2 & (1 << VAR_4)))
   continue;
  if (!(VAR_3 = VAR_0[VAR_4]))
   continue;
  if (VAR_3->open_mode == 0)
   continue;
  if (VAR_3->go)
   continue;

  VAR_3->go = 1;
  if (VAR_3->d->trigger)
   VAR_3->d->trigger(VAR_4,VAR_3->enable_bits * VAR_3->go);
 }
}
