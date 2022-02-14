
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_opl3_voice {scalar_t__ state; scalar_t__ note_off; int chan; int note; scalar_t__ note_off_check; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct snd_opl3 {int max_voices; int sys_timer_lock; scalar_t__ sys_timer_status; TYPE_1__ tlist; int voice_lock; struct snd_opl3_voice* voices; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct snd_opl3*,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(unsigned long VAR_1)
{

 struct snd_opl3 *VAR_2 = (struct snd_opl3 *)VAR_1;
 unsigned long VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 FUNC_2(&VAR_2->voice_lock, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_2->max_voices; VAR_5++) {
  struct snd_opl3_voice *VAR_6 = &VAR_2->voices[VAR_5];
  if (VAR_6->state > 0 && VAR_6->note_off_check) {
   if (VAR_6->note_off == VAR_0)
    FUNC_1(VAR_2, VAR_6->note, 0,
        VAR_6->chan);
   else
    VAR_4++;
  }
 }
 FUNC_3(&VAR_2->voice_lock, VAR_3);

 FUNC_2(&VAR_2->sys_timer_lock, VAR_3);
 if (VAR_4) {
  VAR_2->tlist.expires = VAR_0 + 1;
  FUNC_0(&VAR_2->tlist);
 } else {
  VAR_2->sys_timer_status = 0;
 }
 FUNC_3(&VAR_2->sys_timer_lock, VAR_3);
}
