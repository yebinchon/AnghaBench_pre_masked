
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct pmac_tumbler {int * master_vol; } ;


 struct snd_pmac* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pmac *VAR_2 = FUNC_0(VAR_0);
 struct pmac_tumbler *VAR_3 = VAR_2->mixer_data;

 VAR_1->value.integer.value[0] = VAR_3->master_vol[0];
 VAR_1->value.integer.value[1] = VAR_3->master_vol[1];
 return 0;
}
