
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_ac97*,int ,int,unsigned short) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_4, struct snd_ctl_elem_value *VAR_5)
{
 struct snd_ac97 *VAR_6 = FUNC_1(VAR_4);
 unsigned short VAR_7;

 if (VAR_5->value.enumerated.item[0] > 2)
  return -VAR_3;
 if (VAR_5->value.enumerated.item[0] == 0)
  VAR_7 = 0;
 else
  VAR_7 = VAR_1 |
   ((VAR_5->value.enumerated.item[0] - 1) << 8);
 return FUNC_0(VAR_6, VAR_2,
        VAR_0 | VAR_1, VAR_7);
}
