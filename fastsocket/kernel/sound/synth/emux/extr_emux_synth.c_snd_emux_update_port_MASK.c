
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emux_voice {struct snd_emux_port* port; } ;
struct snd_emux_port {struct snd_emux* emu; } ;
struct TYPE_2__ {int update; } ;
struct snd_emux {int max_voices; int voice_lock; struct snd_emux_voice* voices; TYPE_1__ ops; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_emux*,struct snd_emux_voice*,int) ;

void
FUNC_4(struct snd_emux_port *VAR_0, int VAR_1)
{
 struct snd_emux *VAR_2;
 struct snd_emux_voice *VAR_3;
 int VAR_4;
 unsigned long VAR_5;

 if (! VAR_1)
  return;

 VAR_2 = VAR_0->emu;
 if (FUNC_0(!VAR_2 || !VAR_2->ops.update))
  return;

 FUNC_1(&VAR_2->voice_lock, VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_2->max_voices; VAR_4++) {
  VAR_3 = &VAR_2->voices[VAR_4];
  if (VAR_3->port == VAR_0)
   FUNC_3(VAR_2, VAR_3, VAR_1);
 }
 FUNC_2(&VAR_2->voice_lock, VAR_5);
}
