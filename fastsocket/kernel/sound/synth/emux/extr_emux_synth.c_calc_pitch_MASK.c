
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_midi_channel {int midi_pitchbend; int gm_rpn_pitch_bend_range; int gm_rpn_coarse_tuning; int gm_rpn_fine_tuning; struct snd_emux_effect_table* private; } ;
struct TYPE_3__ {scalar_t__ fixkey; int root; int scaleTuning; int tune; scalar_t__ rate_offset; } ;
struct snd_emux_voice {int note; int apitch; TYPE_2__* emu; TYPE_1__ reg; struct snd_midi_channel* chan; } ;
struct snd_emux_effect_table {scalar_t__* val; scalar_t__* flag; } ;
struct TYPE_4__ {scalar_t__ pitch_shift; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct snd_emux_voice *VAR_1)
{
 struct snd_midi_channel *VAR_2 = VAR_1->chan;
 int VAR_3;


 if (VAR_1->reg.fixkey >= 0) {
  VAR_3 = (VAR_1->reg.fixkey - VAR_1->reg.root) * 4096 / 12;
 } else {
  VAR_3 = (VAR_1->note - VAR_1->reg.root) * 4096 / 12;
 }
 VAR_3 = (VAR_3 * VAR_1->reg.scaleTuning) / 100;
 VAR_3 += VAR_1->reg.tune * 4096 / 1200;
 if (VAR_2->midi_pitchbend != 0) {

  VAR_3 += VAR_2->midi_pitchbend * VAR_2->gm_rpn_pitch_bend_range / 3072;
 }






 VAR_3 += VAR_2->gm_rpn_coarse_tuning * 4096 / (12 * 128);
 VAR_3 += VAR_2->gm_rpn_fine_tuning / 24;
 VAR_3 += 0xe000 + VAR_1->reg.rate_offset;
 VAR_3 += VAR_1->emu->pitch_shift;
 FUNC_0(VAR_3, 0, 0xffff);
 if (VAR_3 == VAR_1->apitch)
  return 0;
 VAR_1->apitch = VAR_3;
 return 1;
}
