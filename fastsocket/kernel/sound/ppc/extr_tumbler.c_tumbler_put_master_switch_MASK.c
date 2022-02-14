
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pmac_tumbler {scalar_t__* master_switch; } ;


 struct snd_pmac* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct pmac_tumbler*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pmac *VAR_2 = FUNC_0(VAR_0);
 struct pmac_tumbler *VAR_3 = VAR_2->mixer_data;
 int VAR_4;

 VAR_4 = VAR_3->master_switch[0] != VAR_1->value.integer.value[0] ||
  VAR_3->master_switch[1] != VAR_1->value.integer.value[1];
 if (VAR_4) {
  VAR_3->master_switch[0] = !!VAR_1->value.integer.value[0];
  VAR_3->master_switch[1] = !!VAR_1->value.integer.value[1];
  FUNC_1(VAR_3);
 }
 return VAR_4;
}
