
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_azf3328 {int dummy; } ;
struct azf3328_mixer_reg {int mask; int lchan_shift; int rchan_shift; int reg; scalar_t__ invert; scalar_t__ stereo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int,int,int,int,int,int,int) ;
 int FUNC_3 (struct snd_azf3328*,int ) ;
 int FUNC_4 (struct snd_azf3328*,int ,int) ;
 int FUNC_5 (struct azf3328_mixer_reg*,int ) ;
 int FUNC_6 (struct snd_azf3328*,int ,int,int,int,int ) ;
 struct snd_azf3328* FUNC_7 (struct snd_kcontrol*) ;

__attribute__((used)) static int
FUNC_8(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct snd_azf3328 *VAR_4 = FUNC_7(VAR_2);
 struct azf3328_mixer_reg VAR_5;
 u16 VAR_6, VAR_7, VAR_8;

 FUNC_0();
 FUNC_5(&VAR_5, VAR_2->private_value);
 VAR_6 = FUNC_3(VAR_4, VAR_5.reg);
 VAR_8 = VAR_3->value.integer.value[0] & VAR_5.mask;
 if (VAR_5.invert)
  VAR_8 = VAR_5.mask - VAR_8;
 VAR_7 = VAR_6 & ~(VAR_5.mask << VAR_5.lchan_shift);
 VAR_7 |= (VAR_8 << VAR_5.lchan_shift);
 if (VAR_5.stereo) {
  VAR_8 = VAR_3->value.integer.value[1] & VAR_5.mask;
  if (VAR_5.invert)
   VAR_8 = VAR_5.mask - VAR_8;
  VAR_7 &= ~(VAR_5.mask << VAR_5.rchan_shift);
  VAR_7 |= (VAR_8 << VAR_5.rchan_shift);
 }
 if (VAR_5.mask >= 0x07)
  FUNC_6(
   VAR_4, VAR_5.reg, VAR_7 >> 8, VAR_7 & 0xff,

   VAR_0|VAR_1,
   0);
 else
         FUNC_4(VAR_4, VAR_5.reg, VAR_7);

 FUNC_2("put: %02x to %02lx|%02lx, "
        "oreg %04x; shift %02d|%02d -> nreg %04x; after: %04x\n",
  VAR_5.reg, VAR_3->value.integer.value[0], VAR_3->value.integer.value[1],
  VAR_6, VAR_5.lchan_shift, VAR_5.rchan_shift,
  VAR_7, FUNC_3(VAR_4, VAR_5.reg));
 FUNC_1();
 return (VAR_7 != VAR_6);
}
