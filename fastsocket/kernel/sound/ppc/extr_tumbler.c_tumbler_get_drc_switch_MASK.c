
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pmac_tumbler {int drc_enable; } ;


 int VAR_0 ;
 struct snd_pmac* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct snd_pmac *VAR_3 = FUNC_0(VAR_1);
 struct pmac_tumbler *VAR_4;
 if (! (VAR_4 = VAR_3->mixer_data))
  return -VAR_0;
 VAR_2->value.integer.value[0] = VAR_4->drc_enable;
 return 0;
}
