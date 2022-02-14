
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_azf3328 {int dummy; } ;
struct azf3328_mixer_reg {scalar_t__ reg; unsigned int enum_c; int lchan_shift; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int,int) ;
 int FUNC_1 (struct snd_azf3328*,scalar_t__) ;
 int FUNC_2 (struct snd_azf3328*,scalar_t__,int) ;
 int FUNC_3 (struct azf3328_mixer_reg*,int ) ;
 struct snd_azf3328* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int
FUNC_5(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_value *VAR_3)
{
        struct snd_azf3328 *VAR_4 = FUNC_4(VAR_2);
 struct azf3328_mixer_reg VAR_5;
 u16 VAR_6, VAR_7, VAR_8;

 FUNC_3(&VAR_5, VAR_2->private_value);
 VAR_6 = FUNC_1(VAR_4, VAR_5.reg);
 VAR_8 = VAR_6;
 if (VAR_5.reg == VAR_1) {
         if (VAR_3->value.enumerated.item[0] > VAR_5.enum_c - 1U ||
             VAR_3->value.enumerated.item[1] > VAR_5.enum_c - 1U)
                 return -VAR_0;
         VAR_8 = (VAR_3->value.enumerated.item[0] << 8) |
               (VAR_3->value.enumerated.item[1] << 0);
 } else {
         if (VAR_3->value.enumerated.item[0] > VAR_5.enum_c - 1U)
                 return -VAR_0;
  VAR_8 &= ~((VAR_5.enum_c - 1) << VAR_5.lchan_shift);
         VAR_8 |= (VAR_3->value.enumerated.item[0] << VAR_5.lchan_shift);
 }
 FUNC_2(VAR_4, VAR_5.reg, VAR_8);
 VAR_7 = VAR_8;

 FUNC_0("put_enum: %02x to %04x, oreg %04x\n", VAR_5.reg, VAR_8, VAR_6);
 return (VAR_7 != VAR_6);
}
