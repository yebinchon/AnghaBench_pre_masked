
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned short* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int dummy; } ;
struct ac97_enum {unsigned short mask; unsigned short shift_l; unsigned short shift_r; int reg; } ;


 unsigned short FUNC_0 (struct snd_ac97*,int ) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ac97 *VAR_2 = FUNC_1(VAR_0);
 struct ac97_enum *VAR_3 = (struct ac97_enum *)VAR_0->private_value;
 unsigned short VAR_4, VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_3->mask; VAR_5 <<= 1)
  ;
 VAR_4 = FUNC_0(VAR_2, VAR_3->reg);
 VAR_1->value.enumerated.item[0] = (VAR_4 >> VAR_3->shift_l) & (VAR_5 - 1);
 if (VAR_3->shift_l != VAR_3->shift_r)
  VAR_1->value.enumerated.item[1] = (VAR_4 >> VAR_3->shift_r) & (VAR_5 - 1);

 return 0;
}
