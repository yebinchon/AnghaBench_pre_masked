
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_es18xx {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned char FUNC_0 (struct snd_es18xx*,int) ;
 struct snd_es18xx* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_es18xx *VAR_2 = FUNC_1(VAR_0);
 unsigned char VAR_3 = FUNC_0(VAR_2, 0x50);
 VAR_1->value.integer.value[0] = !!(VAR_3 & 8);
 return 0;
}
