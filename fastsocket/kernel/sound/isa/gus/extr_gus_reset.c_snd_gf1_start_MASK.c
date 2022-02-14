
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ playback_fifo_size; scalar_t__ record_fifo_size; int interwave_fifo_reg; TYPE_4__* record_fifo_block; TYPE_3__* playback_fifo_block; } ;
struct TYPE_7__ {int default_voice_address; scalar_t__ memory; int hw_lfo; int sw_lfo; scalar_t__ active_voice; scalar_t__ enh_mode; TYPE_1__* voices; } ;
struct snd_gus_card {int joystick_dac; TYPE_5__ chip; scalar_t__ pnp_flag; int reg_lock; scalar_t__ mix_cntrl_reg; TYPE_2__ gf1; } ;
struct TYPE_9__ {int ptr; } ;
struct TYPE_8__ {int ptr; } ;
struct TYPE_6__ {unsigned int number; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct snd_gus_card*) ;
 int FUNC_3 (struct snd_gus_card*,int ,int) ;
 int FUNC_4 (struct snd_gus_card*) ;
 int FUNC_5 (struct snd_gus_card*,int ) ;
 int FUNC_6 (struct snd_gus_card*,int ) ;
 int FUNC_7 (struct snd_gus_card*,int ,int) ;
 int FUNC_8 (struct snd_gus_card*,int ,int) ;
 int FUNC_9 (struct snd_gus_card*) ;
 int FUNC_10 (struct snd_gus_card*) ;
 int FUNC_11 (struct snd_gus_card*) ;
 int FUNC_12 (struct snd_gus_card*) ;
 int FUNC_13 (struct snd_gus_card*,unsigned int,int ) ;
 int FUNC_14 (struct snd_gus_card*) ;
 int FUNC_15 (struct snd_gus_card*,unsigned int) ;
 int FUNC_16 (struct snd_gus_card*) ;
 int FUNC_17 (struct snd_gus_card*,int) ;
 int FUNC_18 (struct snd_gus_card*) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int) ;

int FUNC_22(struct snd_gus_card * VAR_12)
{
 unsigned long VAR_13;
 unsigned int VAR_14;

 FUNC_8(VAR_12, VAR_5, 0);
 FUNC_21(160);
 FUNC_8(VAR_12, VAR_5, 1);
 FUNC_21(160);
 FUNC_8(VAR_12, VAR_3, VAR_12->joystick_dac);

 FUNC_15(VAR_12, VAR_10);
 for (VAR_14 = 0; VAR_14 < 32; VAR_14++) {
  VAR_12->gf1.voices[VAR_14].number = VAR_14;
  FUNC_15(VAR_12, VAR_11 | VAR_14);
 }

 FUNC_17(VAR_12, 0x03);

 if (VAR_12->gf1.enh_mode) {
  FUNC_8(VAR_12, VAR_2, FUNC_5(VAR_12, VAR_2) | 0x01);
  FUNC_8(VAR_12, VAR_4, 0x01);
 }
 FUNC_2(VAR_12);
 FUNC_14(VAR_12);
 FUNC_4(VAR_12);
 VAR_12->gf1.default_voice_address = VAR_12->gf1.memory > 0 ? 0 : 512 - 8;

 if (VAR_12->gf1.enh_mode && VAR_12->gf1.memory) {
  VAR_12->gf1.hw_lfo = 1;
  VAR_12->gf1.default_voice_address += 1024;
 } else {
  VAR_12->gf1.sw_lfo = 1;
 }



 if (VAR_12->gf1.memory > 0)
  for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
   FUNC_13(VAR_12, VAR_12->gf1.default_voice_address + VAR_14, 0);
 FUNC_2(VAR_12);
 FUNC_3(VAR_12, 0, 31);
 FUNC_10(VAR_12);
 FUNC_21(160);
 FUNC_8(VAR_12, VAR_5, 7);
 FUNC_21(160);
 FUNC_8(VAR_12, VAR_5, 7);
 if (VAR_12->gf1.enh_mode) {
  FUNC_8(VAR_12, VAR_2, FUNC_5(VAR_12, VAR_2) | 0x01);
  FUNC_8(VAR_12, VAR_4, 0x01);
 }
 while ((FUNC_6(VAR_12, VAR_6) & 0xc0) != 0xc0);

 FUNC_19(&VAR_12->reg_lock, VAR_13);
 FUNC_1(VAR_12->gf1.active_voice = 0, FUNC_0(VAR_12, VAR_0));
 FUNC_1(VAR_12->mix_cntrl_reg, FUNC_0(VAR_12, VAR_1));
 FUNC_20(&VAR_12->reg_lock, VAR_13);

 FUNC_16(VAR_12);
 FUNC_10(VAR_12);
 FUNC_11(VAR_12);
 FUNC_12(VAR_12);
 return 0;
}
