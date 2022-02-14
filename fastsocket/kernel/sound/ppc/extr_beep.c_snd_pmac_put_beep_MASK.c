
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pmac {TYPE_1__* beep; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {unsigned int* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_4__ {unsigned int volume; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct snd_pmac* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct snd_pmac *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5, VAR_6;
 if (FUNC_0(!VAR_4->beep))
  return -VAR_1;
 VAR_5 = VAR_4->beep->volume;
 VAR_6 = VAR_3->value.integer.value[0];
 if (VAR_6 > 100)
  return -VAR_0;
 VAR_4->beep->volume = VAR_6;
 return VAR_5 != VAR_4->beep->volume;
}
