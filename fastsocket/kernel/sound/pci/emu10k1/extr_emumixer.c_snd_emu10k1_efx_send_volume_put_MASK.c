
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1_pcm_mixer {int** send_volume; TYPE_4__* epcm; } ;
struct snd_emu10k1 {int reg_lock; scalar_t__ audigy; struct snd_emu10k1_pcm_mixer* efx_pcm_mixer; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct TYPE_8__ {TYPE_3__** voices; } ;
struct TYPE_7__ {int number; } ;


 int FUNC_0 (struct snd_kcontrol*,int *) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct snd_emu10k1*,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
                                       struct snd_ctl_elem_value *VAR_1)
{
 unsigned long VAR_2;
 struct snd_emu10k1 *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_0(VAR_0, &VAR_1->id);
 struct snd_emu10k1_pcm_mixer *VAR_5 = &VAR_3->efx_pcm_mixer[VAR_4];
 int VAR_6 = 0, VAR_7, VAR_8;
 int VAR_9 = VAR_3->audigy ? 8 : 4;

 FUNC_2(&VAR_3->reg_lock, VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_8 = VAR_1->value.integer.value[VAR_7] & 255;
  if (VAR_5->send_volume[0][VAR_7] != VAR_8) {
   VAR_5->send_volume[0][VAR_7] = VAR_8;
   VAR_6 = 1;
  }
 }
 if (VAR_6 && VAR_5->epcm) {
  if (VAR_5->epcm->voices[VAR_4]) {
   FUNC_4(VAR_3, VAR_5->epcm->voices[VAR_4]->number,
         &VAR_5->send_volume[0][0]);
  }
 }
 FUNC_3(&VAR_3->reg_lock, VAR_2);
 return VAR_6;
}
