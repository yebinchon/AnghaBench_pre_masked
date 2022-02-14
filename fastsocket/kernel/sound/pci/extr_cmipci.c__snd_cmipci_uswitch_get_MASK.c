
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cmipci_switch_args {unsigned int mask; unsigned int mask_on; scalar_t__ reg; scalar_t__ is_byte; scalar_t__ ac3_sensitive; } ;
struct cmipci {int reg_lock; scalar_t__ iobase; scalar_t__ mixer_insensitive; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (struct cmipci*,scalar_t__) ;
 struct cmipci* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1,
       struct cmipci_switch_args *VAR_2)
{
 unsigned int VAR_3;
 struct cmipci *VAR_4 = FUNC_2(VAR_0);

 FUNC_3(&VAR_4->reg_lock);
 if (VAR_2->ac3_sensitive && VAR_4->mixer_insensitive) {
  VAR_1->value.integer.value[0] = 0;
  FUNC_4(&VAR_4->reg_lock);
  return 0;
 }
 if (VAR_2->is_byte)
  VAR_3 = FUNC_0(VAR_4->iobase + VAR_2->reg);
 else
  VAR_3 = FUNC_1(VAR_4, VAR_2->reg);
 VAR_1->value.integer.value[0] = ((VAR_3 & VAR_2->mask) == VAR_2->mask_on) ? 1 : 0;
 FUNC_4(&VAR_4->reg_lock);
 return 0;
}
