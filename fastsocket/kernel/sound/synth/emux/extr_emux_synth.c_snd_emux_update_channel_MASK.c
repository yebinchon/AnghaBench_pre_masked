
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi_channel {int dummy; } ;
struct snd_emux_voice {struct snd_midi_channel* chan; } ;
struct snd_emux_port {struct snd_emux* emu; } ;
struct TYPE_2__ {int update; } ;
struct snd_emux {int max_voices; int voice_lock; struct snd_emux_voice* voices; TYPE_1__ ops; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_emux*,struct snd_emux_voice*,int) ;

void
FUNC_4(struct snd_emux_port *VAR_0, struct snd_midi_channel *VAR_1, int VAR_2)
{
 struct snd_emux *VAR_3;
 struct snd_emux_voice *VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 if (! VAR_2)
  return;

 VAR_3 = VAR_0->emu;
 if (FUNC_0(!VAR_3 || !VAR_3->ops.update))
  return;

 FUNC_1(&VAR_3->voice_lock, VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_3->max_voices; VAR_5++) {
  VAR_4 = &VAR_3->voices[VAR_5];
  if (VAR_4->chan == VAR_1)
   FUNC_3(VAR_3, VAR_4, VAR_2);
 }
 FUNC_2(&VAR_3->voice_lock, VAR_6);
}
