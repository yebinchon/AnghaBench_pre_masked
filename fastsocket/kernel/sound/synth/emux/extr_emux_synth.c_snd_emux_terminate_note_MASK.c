
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi_channel {int dummy; } ;
struct snd_emux_port {struct snd_emux* emu; } ;
struct TYPE_2__ {int terminate; } ;
struct snd_emux {TYPE_1__ ops; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_emux*,int,struct snd_midi_channel*,int) ;

void
FUNC_2(void *VAR_0, int VAR_1, struct snd_midi_channel *VAR_2)
{
 struct snd_emux *VAR_3;
 struct snd_emux_port *VAR_4;

 VAR_4 = VAR_0;
 if (FUNC_0(!VAR_4 || !VAR_2))
  return;

 VAR_3 = VAR_4->emu;
 if (FUNC_0(!VAR_3 || !VAR_3->ops.terminate))
  return;

 FUNC_1(VAR_3, VAR_1, VAR_2, 1);
}
