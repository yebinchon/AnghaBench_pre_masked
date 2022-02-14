
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
struct cmipci_sb_reg {int mask; int left_shift; int right_shift; scalar_t__ left_reg; scalar_t__ right_reg; scalar_t__ stereo; scalar_t__ invert; } ;
struct cmipci {int reg_lock; } ;


 int FUNC_0 (struct cmipci_sb_reg*,int ) ;
 int FUNC_1 (struct cmipci*,scalar_t__) ;
 int FUNC_2 (struct cmipci*,scalar_t__,int) ;
 struct cmipci* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct cmipci *VAR_2 = FUNC_3(VAR_0);
 struct cmipci_sb_reg VAR_3;
 int VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_0(&VAR_3, VAR_0->private_value);
 VAR_5 = VAR_1->value.integer.value[0] & VAR_3.mask;
 if (VAR_3.invert)
  VAR_5 = VAR_3.mask - VAR_5;
 VAR_5 <<= VAR_3.left_shift;
 if (VAR_3.stereo) {
  VAR_6 = VAR_1->value.integer.value[1] & VAR_3.mask;
  if (VAR_3.invert)
   VAR_6 = VAR_3.mask - VAR_6;
  VAR_6 <<= VAR_3.right_shift;
 } else
  VAR_6 = 0;
 FUNC_4(&VAR_2->reg_lock);
 VAR_7 = FUNC_1(VAR_2, VAR_3.left_reg);
 VAR_5 |= VAR_7 & ~(VAR_3.mask << VAR_3.left_shift);
 VAR_4 = VAR_5 != VAR_7;
 if (VAR_3.stereo) {
  if (VAR_3.left_reg != VAR_3.right_reg) {
   FUNC_2(VAR_2, VAR_3.left_reg, VAR_5);
   VAR_8 = FUNC_1(VAR_2, VAR_3.right_reg);
  } else
   VAR_8 = VAR_5;
  VAR_6 |= VAR_8 & ~(VAR_3.mask << VAR_3.right_shift);
  VAR_4 |= VAR_6 != VAR_8;
  FUNC_2(VAR_2, VAR_3.right_reg, VAR_6);
 } else
  FUNC_2(VAR_2, VAR_3.left_reg, VAR_5);
 FUNC_5(&VAR_2->reg_lock);
 return VAR_4;
}
