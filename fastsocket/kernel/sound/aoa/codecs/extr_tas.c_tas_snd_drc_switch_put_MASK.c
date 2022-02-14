
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tas {int drc_enabled; int mtx; scalar_t__ hw_enabled; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tas* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct tas*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct tas *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->mtx);
 if (VAR_2->drc_enabled == VAR_1->value.integer.value[0]) {
  FUNC_1(&VAR_2->mtx);
  return 0;
 }

 VAR_2->drc_enabled = !!VAR_1->value.integer.value[0];
 if (VAR_2->hw_enabled)
  FUNC_3(VAR_2);
 FUNC_1(&VAR_2->mtx);
 return 1;
}
