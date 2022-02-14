
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident_pcm_mixer {int vol; } ;
struct snd_trident {scalar_t__ device; struct snd_trident_pcm_mixer* pcm_mixer; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (struct snd_kcontrol*,int *) ;
 struct snd_trident* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct snd_trident *VAR_3 = FUNC_1(VAR_1);
 struct snd_trident_pcm_mixer *VAR_4 = &VAR_3->pcm_mixer[FUNC_0(VAR_1, &VAR_2->id)];

 if (VAR_3->device == VAR_0) {
  VAR_2->value.integer.value[0] = 1023 - VAR_4->vol;
 } else {
  VAR_2->value.integer.value[0] = 255 - (VAR_4->vol>>2);
 }
 return 0;
}
