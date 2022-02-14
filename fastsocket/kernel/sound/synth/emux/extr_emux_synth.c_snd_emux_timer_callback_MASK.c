
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_emux_voice {scalar_t__ state; scalar_t__ ontime; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_3__ {int (* release ) (struct snd_emux_voice*) ;} ;
struct snd_emux {int max_voices; int timer_active; int voice_lock; TYPE_2__ tlist; TYPE_1__ ops; struct snd_emux_voice* voices; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_emux_voice*) ;

void FUNC_4(unsigned long VAR_3)
{
 struct snd_emux *VAR_4 = (struct snd_emux *) VAR_3;
 struct snd_emux_voice *VAR_5;
 unsigned long VAR_6;
 int VAR_7, VAR_8 = 0;

 FUNC_1(&VAR_4->voice_lock, VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_4->max_voices; VAR_7++) {
  VAR_5 = &VAR_4->voices[VAR_7];
  if (VAR_5->state == VAR_0) {
   if (VAR_5->ontime == VAR_2)
    VAR_8++;
   else {
    VAR_4->ops.release(VAR_5);
    VAR_5->state = VAR_1;
   }
  }
 }
 if (VAR_8) {
  VAR_4->tlist.expires = VAR_2 + 1;
  FUNC_0(&VAR_4->tlist);
  VAR_4->timer_active = 1;
 } else
  VAR_4->timer_active = 0;
 FUNC_2(&VAR_4->voice_lock, VAR_6);
}
