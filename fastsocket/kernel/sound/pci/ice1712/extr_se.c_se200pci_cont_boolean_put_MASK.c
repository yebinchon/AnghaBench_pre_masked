
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {struct se_spec* spec; } ;
struct TYPE_6__ {int * value; } ;
struct TYPE_5__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct se_spec {TYPE_1__* vol; } ;
struct TYPE_4__ {unsigned int ch1; } ;


 int FUNC_0 (struct snd_ice1712*,int) ;
 struct snd_ice1712* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_1(VAR_0);
 struct se_spec *VAR_3 = VAR_2->spec;
 int VAR_4 = VAR_0->private_value;
 unsigned int VAR_5;

 VAR_5 = !!VAR_1->value.integer.value[0];
 if (VAR_3->vol[VAR_4].ch1 != VAR_5) {
  VAR_3->vol[VAR_4].ch1 = VAR_5;
  FUNC_0(VAR_2, VAR_4);
  return 1;
 }
 return 0;
}
