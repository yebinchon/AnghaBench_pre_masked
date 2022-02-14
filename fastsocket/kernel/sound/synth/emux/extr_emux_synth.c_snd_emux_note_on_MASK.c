
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ exclusiveClass; } ;
struct snd_sf_zone {TYPE_2__* sample; TYPE_1__ v; } ;
struct snd_midi_channel {struct snd_emux_effect_table* private; } ;
struct snd_emux_voice {scalar_t__ ch; scalar_t__ state; int key; int note; int velocity; int ontime; struct snd_midi_channel* chan; int * block; struct snd_sf_zone* zone; struct snd_emux_port* port; scalar_t__ time; } ;
struct snd_emux_port {scalar_t__ port_mode; struct snd_emux* emu; } ;
struct snd_emux_effect_table {scalar_t__* flag; } ;
struct TYPE_6__ {scalar_t__ (* prepare ) (struct snd_emux_voice*) ;int (* trigger ) (struct snd_emux_voice*) ;int (* terminate ) (struct snd_emux_voice*) ;struct snd_emux_voice* (* get_voice ) (struct snd_emux*,struct snd_emux_port*) ;} ;
struct snd_emux {int max_voices; int voice_lock; TYPE_3__ ops; struct snd_emux_voice* voices; int use_time; } ;
struct TYPE_5__ {int * block; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct snd_emux*,struct snd_emux_port*,scalar_t__) ;
 int FUNC_2 (struct snd_emux*,struct snd_emux_port*,int*,int,struct snd_midi_channel*,struct snd_sf_zone**) ;
 int VAR_7 ;
 int FUNC_3 (struct snd_emux_voice*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct snd_emux_voice* FUNC_7 (struct snd_emux*,struct snd_emux_port*) ;
 int FUNC_8 (struct snd_emux_voice*) ;
 scalar_t__ FUNC_9 (struct snd_emux_voice*) ;
 int FUNC_10 (struct snd_emux_voice*) ;
 int FUNC_11 (struct snd_emux*,int,struct snd_midi_channel*,int ) ;

void
FUNC_12(void *VAR_8, int VAR_9, int VAR_10, struct snd_midi_channel *VAR_11)
{
 struct snd_emux *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 struct snd_emux_voice *VAR_16;
 struct snd_sf_zone *VAR_17[VAR_2];
 unsigned long VAR_18;
 struct snd_emux_port *VAR_19;

 VAR_19 = VAR_8;
 if (FUNC_4(!VAR_19 || !VAR_11))
  return;

 VAR_12 = VAR_19->emu;
 if (FUNC_4(!VAR_12 || !VAR_12->ops.get_voice || !VAR_12->ops.trigger))
  return;

 VAR_14 = VAR_9;
 VAR_15 = FUNC_2(VAR_12, VAR_19, &VAR_9, VAR_10, VAR_11, VAR_17);
 if (! VAR_15)
  return;


 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
  struct snd_sf_zone *VAR_20 = VAR_17[VAR_13];
  if (VAR_20 && VAR_20->v.exclusiveClass)
   FUNC_1(VAR_12, VAR_19, VAR_20->v.exclusiveClass);
 }






 FUNC_5(&VAR_12->voice_lock, VAR_18);
 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {




  if (VAR_17[VAR_13] == ((void*)0))
   continue;

  VAR_16 = VAR_12->ops.get_voice(VAR_12, VAR_19);
  if (VAR_16 == ((void*)0) || VAR_16->ch < 0)
   continue;
  if (FUNC_0(VAR_16->state))
   VAR_12->ops.terminate(VAR_16);

  VAR_16->time = VAR_12->use_time++;
  VAR_16->chan = VAR_11;
  VAR_16->port = VAR_19;
  VAR_16->key = VAR_14;
  VAR_16->note = VAR_9;
  VAR_16->velocity = VAR_10;
  VAR_16->zone = VAR_17[VAR_13];
  if (VAR_16->zone->sample)
   VAR_16->block = VAR_16->zone->sample->block;
  else
   VAR_16->block = ((void*)0);

  FUNC_3(VAR_16);

  VAR_16->state = VAR_6;
  if (VAR_12->ops.prepare) {
   VAR_16->state = VAR_4;
   if (VAR_12->ops.prepare(VAR_16) >= 0)
    VAR_16->state = VAR_6;
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_12->max_voices; VAR_13++) {
  VAR_16 = &VAR_12->voices[VAR_13];
  if (VAR_16->state == VAR_6 &&
      VAR_16->chan == VAR_11) {
   VAR_12->ops.trigger(VAR_16);
   VAR_16->state = VAR_5;
   VAR_16->ontime = VAR_7;
  }
 }
 FUNC_6(&VAR_12->voice_lock, VAR_18);
}
