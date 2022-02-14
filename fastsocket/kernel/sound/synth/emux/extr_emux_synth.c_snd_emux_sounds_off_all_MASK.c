
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emux_voice {scalar_t__ state; struct snd_emux_port* port; } ;
struct snd_emux_port {struct snd_emux* emu; } ;
struct TYPE_2__ {int (* reset ) (struct snd_emux*,int) ;int (* free_voice ) (struct snd_emux_voice*) ;int terminate; } ;
struct snd_emux {int max_voices; int voice_lock; TYPE_1__ ops; struct snd_emux_voice* voices; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct snd_emux_voice*) ;
 int FUNC_5 (struct snd_emux*,int) ;
 int FUNC_6 (struct snd_emux*,struct snd_emux_voice*,int ) ;

void
FUNC_7(struct snd_emux_port *VAR_1)
{
 int VAR_2;
 struct snd_emux *VAR_3;
 struct snd_emux_voice *VAR_4;
 unsigned long VAR_5;

 if (FUNC_1(!VAR_1))
  return;
 VAR_3 = VAR_1->emu;
 if (FUNC_1(!VAR_3 || !VAR_3->ops.terminate))
  return;

 FUNC_2(&VAR_3->voice_lock, VAR_5);
 for (VAR_2 = 0; VAR_2 < VAR_3->max_voices; VAR_2++) {
  VAR_4 = &VAR_3->voices[VAR_2];
  if (FUNC_0(VAR_4->state) &&
      VAR_4->port == VAR_1)
   FUNC_6(VAR_3, VAR_4, 0);
  if (VAR_4->state == VAR_0) {
   if (VAR_3->ops.free_voice)
    VAR_3->ops.free_voice(VAR_4);
   if (VAR_3->ops.reset)
    VAR_3->ops.reset(VAR_3, VAR_2);
  }
 }
 FUNC_3(&VAR_3->voice_lock, VAR_5);
}
