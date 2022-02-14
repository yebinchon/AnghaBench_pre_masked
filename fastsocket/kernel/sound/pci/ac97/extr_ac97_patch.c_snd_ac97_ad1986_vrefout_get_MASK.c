
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned short* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {unsigned short* regs; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 size_t VAR_3 ;
 struct snd_ac97* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_4,
           struct snd_ctl_elem_value *VAR_5)
{

 struct snd_ac97 *VAR_6 = FUNC_0(VAR_4);
 unsigned short VAR_7;
 unsigned short VAR_8 = VAR_6->regs[VAR_3];
 if ((VAR_8 & VAR_0) != 0)
  VAR_7 = 2;
 else if ((VAR_8 & VAR_1) != 0)
  VAR_7 = 3;
 else if ((VAR_8 & VAR_2) != 0)
  VAR_7 = 1;
 else
  VAR_7 = 0;
 VAR_5->value.enumerated.item[0] = VAR_7;
 return 0;
}
