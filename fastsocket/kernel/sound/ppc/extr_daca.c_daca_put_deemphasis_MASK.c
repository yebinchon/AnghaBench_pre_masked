
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {struct pmac_daca* mixer_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pmac_daca {scalar_t__ deemphasis; } ;


 int VAR_0 ;
 int FUNC_0 (struct pmac_daca*) ;
 struct snd_pmac* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct snd_pmac *VAR_3 = FUNC_1(VAR_1);
 struct pmac_daca *VAR_4;
 int VAR_5;

 if (! (VAR_4 = VAR_3->mixer_data))
  return -VAR_0;
 VAR_5 = VAR_4->deemphasis != VAR_2->value.integer.value[0];
 if (VAR_5) {
  VAR_4->deemphasis = !!VAR_2->value.integer.value[0];
  FUNC_0(VAR_4);
 }
 return VAR_5;
}
