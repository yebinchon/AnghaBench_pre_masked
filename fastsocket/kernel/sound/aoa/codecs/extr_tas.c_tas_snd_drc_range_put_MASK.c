
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tas {scalar_t__ drc_range; int mtx; scalar_t__ hw_enabled; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tas* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct tas*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
 struct snd_ctl_elem_value *VAR_3)
{
 struct tas *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3->value.integer.value[0] < 0 ||
     VAR_3->value.integer.value[0] > VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_4->mtx);
 if (VAR_4->drc_range == VAR_3->value.integer.value[0]) {
  FUNC_1(&VAR_4->mtx);
  return 0;
 }

 VAR_4->drc_range = VAR_3->value.integer.value[0];
 if (VAR_4->hw_enabled)
  FUNC_3(VAR_4);
 FUNC_1(&VAR_4->mtx);
 return 1;
}
