
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_7__ {int* pcmreg; } ;
struct TYPE_8__ {TYPE_3__ ad18xx; } ;
struct snd_ac97 {int flags; TYPE_4__ spec; } ;


 int VAR_0 ;
 struct snd_ac97* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ac97 *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_1->private_value & 3;
 int VAR_5 = (VAR_1->private_value >> 8) & 0x0f;
 int VAR_6 = (VAR_1->private_value >> 12) & 0x0f;
 int VAR_7 = (VAR_1->private_value >> 16) & 0xff;

 VAR_2->value.integer.value[0] = VAR_7 - ((VAR_3->spec.ad18xx.pcmreg[VAR_4] >> VAR_5) & VAR_7);
 if (VAR_5 != VAR_6 && (VAR_3->flags & VAR_0))
  VAR_2->value.integer.value[1] = VAR_7 - ((VAR_3->spec.ad18xx.pcmreg[VAR_4] >> VAR_6) & VAR_7);
 return 0;
}
