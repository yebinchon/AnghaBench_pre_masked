
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_sc_info {int rev; int mode; int * mute_gpr; scalar_t__ is_ca0108; scalar_t__ is_ca0102; scalar_t__ is_emu10k2; int dev; scalar_t__ broken_digital; scalar_t__ is_emu10k1; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct emu_sc_info*,int ,int) ;
 int FUNC_2 (struct emu_sc_info*,int ,int,int) ;
 int FUNC_3 (struct emu_sc_info*,int ,int) ;
 int FUNC_4 (struct emu_sc_info*,int ) ;

void
FUNC_5(struct emu_sc_info *VAR_12, int VAR_13)
{
 uint32_t VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;

 switch (VAR_13) {
 case 128:

 case 129:
  break;
 default:
  return;
 }

 VAR_15 = VAR_5 | VAR_6;
 VAR_14 = 0;

 if (VAR_12->rev >= 6)
  VAR_15 |= VAR_9;

 if (VAR_12->is_emu10k1)
  VAR_15 |= VAR_10;
 else
  VAR_15 |= VAR_7 | VAR_9;


 if (VAR_13 == 128) {
  if (VAR_12->broken_digital) {
   FUNC_0(VAR_12->dev, "Digital mode is reported as broken on this card.\n");
  }
  VAR_14 |= VAR_3;
  VAR_15 |= VAR_8;
 }

 if (VAR_13 == 129)
  FUNC_4(VAR_12, VAR_11);

 if (VAR_12->is_emu10k2)
  VAR_14 |= 0x80;

 if ((VAR_12->is_ca0102) || (VAR_12->is_ca0108))






  VAR_14 |= VAR_2;

 if (VAR_12->is_ca0108)
  VAR_14 |= 0x20;


 if (VAR_13 == 128)
  FUNC_3(VAR_12, VAR_12->mute_gpr[VAR_0], 1);

 FUNC_2(VAR_12, VAR_4, VAR_15, 4);

 if ((VAR_12->is_emu10k2) || (VAR_12->is_ca0102) || (VAR_12->is_ca0108)) {
  VAR_16 = FUNC_1(VAR_12, VAR_1, 2);
  VAR_16 = VAR_14;
  FUNC_2(VAR_12, VAR_1, VAR_16, 2);
 }



 if (VAR_13 == 129)
  FUNC_3(VAR_12, VAR_12->mute_gpr[VAR_0], 0);

 VAR_12->mode = VAR_13;
}
