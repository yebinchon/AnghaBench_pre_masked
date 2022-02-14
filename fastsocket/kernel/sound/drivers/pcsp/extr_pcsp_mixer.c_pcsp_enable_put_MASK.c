
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcsp {int enable; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_pcsp* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pcsp *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;
 int VAR_4 = VAR_1->value.integer.value[0];
 if (VAR_4 != VAR_2->enable) {
  VAR_2->enable = VAR_4;
  VAR_3 = 1;
 }
 return VAR_3;
}
