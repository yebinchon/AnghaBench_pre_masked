
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ct_mixer {int dummy; } ;
struct ct_atc {struct ct_mixer* mixer; } ;
typedef enum CTALSA_MIXER_CTL { ____Placeholder_CTALSA_MIXER_CTL } CTALSA_MIXER_CTL ;


 int FUNC_0 (struct ct_mixer*,int) ;
 scalar_t__ FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct ct_mixer *VAR_2 =
  ((struct ct_atc *)FUNC_1(VAR_0))->mixer;
 enum CTALSA_MIXER_CTL VAR_3 = VAR_0->private_value;

 VAR_1->value.integer.value[0] = FUNC_0(VAR_2, VAR_3);
 return 0;
}
