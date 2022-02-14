
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned short* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_azf3328 {int dummy; } ;
struct azf3328_mixer_reg {scalar_t__ reg; int enum_c; unsigned short lchan_shift; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,unsigned short,unsigned short,unsigned short,unsigned short,int) ;
 unsigned short FUNC_1 (struct snd_azf3328*,scalar_t__) ;
 int FUNC_2 (struct azf3328_mixer_reg*,int ) ;
 struct snd_azf3328* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int
FUNC_4(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
        struct snd_azf3328 *VAR_3 = FUNC_3(VAR_1);
 struct azf3328_mixer_reg VAR_4;
        unsigned short VAR_5;

 FUNC_2(&VAR_4, VAR_1->private_value);
 VAR_5 = FUNC_1(VAR_3, VAR_4.reg);
 if (VAR_4.reg == VAR_0) {
         VAR_2->value.enumerated.item[0] = (VAR_5 >> 8) & (VAR_4.enum_c - 1);
         VAR_2->value.enumerated.item[1] = (VAR_5 >> 0) & (VAR_4.enum_c - 1);
 } else
         VAR_2->value.enumerated.item[0] = (VAR_5 >> VAR_4.lchan_shift) & (VAR_4.enum_c - 1);

 FUNC_0("get_enum: %02x is %04x -> %d|%d (shift %02d, enum_c %d)\n",
  VAR_4.reg, VAR_5, VAR_2->value.enumerated.item[0], VAR_2->value.enumerated.item[1],
  VAR_4.lchan_shift, VAR_4.enum_c);
        return 0;
}
