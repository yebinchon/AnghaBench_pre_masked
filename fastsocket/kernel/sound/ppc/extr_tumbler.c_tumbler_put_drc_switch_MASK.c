
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {scalar_t__ model; struct pmac_tumbler* mixer_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pmac_tumbler {int drc_enable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pmac_tumbler*) ;
 struct snd_pmac* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct pmac_tumbler*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_value *VAR_3)
{
 struct snd_pmac *VAR_4 = FUNC_1(VAR_2);
 struct pmac_tumbler *VAR_5;
 int VAR_6;

 if (! (VAR_5 = VAR_4->mixer_data))
  return -VAR_0;
 VAR_6 = VAR_5->drc_enable != VAR_3->value.integer.value[0];
 if (VAR_6) {
  VAR_5->drc_enable = !!VAR_3->value.integer.value[0];
  if (VAR_4->model == VAR_1)
   FUNC_2(VAR_5);
  else
   FUNC_0(VAR_5);
 }
 return VAR_6;
}
