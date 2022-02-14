
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1_pcm_mixer {int** send_routing; TYPE_4__* epcm; } ;
struct snd_emu10k1 {int reg_lock; scalar_t__ audigy; struct snd_emu10k1_pcm_mixer* pcm_mixer; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct TYPE_8__ {TYPE_3__** voices; } ;
struct TYPE_7__ {int number; } ;


 size_t FUNC_0 (struct snd_kcontrol*,int *) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct snd_emu10k1*,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
                                        struct snd_ctl_elem_value *VAR_1)
{
 unsigned long VAR_2;
 struct snd_emu10k1 *VAR_3 = FUNC_1(VAR_0);
 struct snd_emu10k1_pcm_mixer *VAR_4 =
  &VAR_3->pcm_mixer[FUNC_0(VAR_0, &VAR_1->id)];
 int VAR_5 = 0, VAR_6, VAR_7, VAR_8;
 int VAR_9 = VAR_3->audigy ? 8 : 4;
 int VAR_10 = VAR_3->audigy ? 0x3f : 0x0f;

 FUNC_2(&VAR_3->reg_lock, VAR_2);
 for (VAR_6 = 0; VAR_6 < 3; VAR_6++)
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
   VAR_8 = VAR_1->value.integer.value[(VAR_6 * VAR_9) + VAR_7] & VAR_10;
   if (VAR_4->send_routing[VAR_6][VAR_7] != VAR_8) {
    VAR_4->send_routing[VAR_6][VAR_7] = VAR_8;
    VAR_5 = 1;
   }
  }
 if (VAR_5 && VAR_4->epcm) {
  if (VAR_4->epcm->voices[0] && VAR_4->epcm->voices[1]) {
   FUNC_4(VAR_3, VAR_4->epcm->voices[0]->number,
         &VAR_4->send_routing[1][0]);
   FUNC_4(VAR_3, VAR_4->epcm->voices[1]->number,
         &VAR_4->send_routing[2][0]);
  } else if (VAR_4->epcm->voices[0]) {
   FUNC_4(VAR_3, VAR_4->epcm->voices[0]->number,
         &VAR_4->send_routing[0][0]);
  }
 }
 FUNC_3(&VAR_3->reg_lock, VAR_2);
 return VAR_5;
}
