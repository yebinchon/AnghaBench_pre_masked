
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ac97*,int ,int,unsigned short,int ) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ac97 *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = VAR_2->private_value;
 unsigned short VAR_6;

 if (VAR_3->value.enumerated.item[0] > 4)
  return -VAR_1;
 if (VAR_3->value.enumerated.item[0] == 0)
  VAR_6 = 0;
 else
  VAR_6 = 4 | (VAR_3->value.enumerated.item[0] - 1);
 return FUNC_0(VAR_4, VAR_0,
         7 << VAR_5, VAR_6 << VAR_5, 0);
}
