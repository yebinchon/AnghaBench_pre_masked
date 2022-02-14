
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ac97*,int ,int,unsigned short) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ac97 *VAR_4 = FUNC_1(VAR_2);
 unsigned short VAR_5;

 if (VAR_3->value.enumerated.item[0] > 2)
  return -VAR_1;
 VAR_5 = (VAR_3->value.enumerated.item[0] == 2) ? 0x0008 :
       (VAR_3->value.enumerated.item[0] == 1) ? 0x0020 : 0;
 return FUNC_0(VAR_4, VAR_0, 0x0028, VAR_5);


}
