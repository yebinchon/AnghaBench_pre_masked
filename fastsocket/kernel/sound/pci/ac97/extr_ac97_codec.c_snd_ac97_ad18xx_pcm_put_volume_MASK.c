
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int dummy; } ;


 int FUNC_0 (struct snd_ac97*,int,int,unsigned short) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ac97 *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = VAR_0->private_value & 3;
 unsigned short VAR_4, VAR_5;

 VAR_4 = 31 - (VAR_1->value.integer.value[0] & 31);
 VAR_5 = 31 - (VAR_1->value.integer.value[1] & 31);
 return FUNC_0(VAR_2, VAR_3, 0x1f1f, (VAR_4 << 8) | VAR_5);
}
