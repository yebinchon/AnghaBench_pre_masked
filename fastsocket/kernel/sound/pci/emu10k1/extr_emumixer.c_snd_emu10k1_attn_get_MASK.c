
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1_pcm_mixer {int * attn; } ;
struct snd_emu10k1 {int reg_lock; struct snd_emu10k1_pcm_mixer* pcm_mixer; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 size_t FUNC_0 (struct snd_kcontrol*,int *) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
                                struct snd_ctl_elem_value *VAR_1)
{
 struct snd_emu10k1 *VAR_2 = FUNC_1(VAR_0);
 struct snd_emu10k1_pcm_mixer *VAR_3 =
  &VAR_2->pcm_mixer[FUNC_0(VAR_0, &VAR_1->id)];
 unsigned long VAR_4;
 int VAR_5;

 FUNC_2(&VAR_2->reg_lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
  VAR_1->value.integer.value[VAR_5] = VAR_3->attn[VAR_5];
 FUNC_3(&VAR_2->reg_lock, VAR_4);
 return 0;
}
