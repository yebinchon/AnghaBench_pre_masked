
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3_voice {scalar_t__ state; struct snd_midi_channel* chan; } ;
struct snd_opl3 {scalar_t__ synth_mode; int max_voices; int voice_lock; struct snd_opl3_voice* voices; } ;
struct snd_midi_channel {size_t number; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct snd_opl3*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_opl3 *VAR_3, struct snd_midi_channel *VAR_4)
{
 int VAR_5;
 struct snd_opl3_voice *VAR_6;

 unsigned long VAR_7;

 FUNC_1(&VAR_3->voice_lock, VAR_7);

 if (VAR_3->synth_mode == VAR_1) {
  for (VAR_5 = 0; VAR_5 < VAR_3->max_voices; VAR_5++) {
   VAR_6 = &VAR_3->voices[VAR_5];
   if (VAR_6->state > 0 && VAR_6->chan == VAR_4) {
    FUNC_0(VAR_3, VAR_5);
   }
  }
 } else {

  if (VAR_4->number < VAR_0) {
   VAR_5 = VAR_2[VAR_4->number];
   FUNC_0(VAR_3, VAR_5);
  }
 }
 FUNC_2(&VAR_3->voice_lock, VAR_7);
}
