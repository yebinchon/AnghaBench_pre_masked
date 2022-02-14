
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_midi_channel {int* control; struct snd_emux_effect_table* private; } ;
struct TYPE_5__ {int cutoff; int volatkhld; } ;
struct TYPE_6__ {int amplitude; TYPE_2__ parm; scalar_t__ attenuation; } ;
struct snd_emux_voice {int velocity; int avol; int acutoff; TYPE_3__ reg; struct snd_emux_port* port; struct snd_midi_channel* chan; } ;
struct TYPE_4__ {int gs_master_volume; } ;
struct snd_emux_port {scalar_t__ port_mode; scalar_t__ volume_atten; TYPE_1__ chset; } ;
struct snd_emux_effect_table {scalar_t__* val; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int FUNC_4 (struct snd_emux_port*,struct snd_midi_channel*) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static int
FUNC_5(struct snd_emux_voice *VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11, VAR_12;
 struct snd_midi_channel *VAR_13 = VAR_8->chan;
 struct snd_emux_port *VAR_14 = VAR_8->port;

 VAR_11 = VAR_13->control[VAR_1];
 FUNC_0(VAR_8->velocity, 127);
 FUNC_1(VAR_11, 0, 127);
 if (VAR_14->port_mode == VAR_3) {

  VAR_10 = VAR_13->control[VAR_2];
  VAR_9 = (VAR_8->velocity * VAR_10 * VAR_11) / (127*127);
  VAR_9 = VAR_9 * VAR_8->reg.amplitude / 127;

  FUNC_1(VAR_9, 0, 127);


  VAR_9 = VAR_5[VAR_9];

 } else {
  VAR_10 = VAR_13->control[VAR_2] * VAR_8->reg.amplitude / 127;
  FUNC_1(VAR_10, 0, 127);

  VAR_9 = VAR_6[VAR_10] + VAR_7[VAR_8->velocity];
  VAR_9 = (VAR_9 * 8) / 3;
  VAR_9 += VAR_8->reg.attenuation;
  VAR_9 += ((0x100 - VAR_9) * VAR_4[VAR_11])/128;
 }

 VAR_12 = VAR_14->chset.gs_master_volume;
 FUNC_1(VAR_12, 0, 127);
 VAR_9 += VAR_5[VAR_12];
 VAR_9 += VAR_14->volume_atten;
 FUNC_1(VAR_9, 0, 255);
 if (VAR_8->avol == VAR_9)
  return 0;

 VAR_8->avol = VAR_9;
 if (!FUNC_3(FUNC_4(VAR_14, VAR_13))
     && FUNC_2(VAR_8->reg.parm.volatkhld) < 0x7d) {
  int VAR_15;
  if (VAR_8->velocity < 70)
   VAR_15 = 70;
  else
   VAR_15 = VAR_8->velocity;
  VAR_8->acutoff = (VAR_15 * VAR_8->reg.parm.cutoff + 0xa0) >> 7;
 } else {
  VAR_8->acutoff = VAR_8->reg.parm.cutoff;
 }

 return 1;
}
