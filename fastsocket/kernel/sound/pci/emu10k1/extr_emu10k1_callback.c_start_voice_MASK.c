
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_midi_channel {scalar_t__* control; } ;
struct TYPE_5__ {unsigned int moddelay; unsigned int modatkhld; unsigned int moddcysus; unsigned int voldelay; unsigned int volatkhld; unsigned int pefe; unsigned int lfo1delay; unsigned int lfo2delay; unsigned int tremfrq; unsigned int reverb; unsigned int chorus; unsigned int filterQ; } ;
struct TYPE_6__ {unsigned int start; unsigned int end; unsigned int loopstart; unsigned int loopend; int sample_mode; TYPE_2__ parm; } ;
struct snd_emux_voice {int ch; unsigned int apitch; unsigned int ftarget; scalar_t__ vtarget; TYPE_3__ reg; struct snd_midi_channel* chan; scalar_t__ avol; scalar_t__ acutoff; scalar_t__ block; struct snd_emu10k1* hw; } ;
struct snd_emu10k1_memblk {int map_locked; } ;
struct TYPE_4__ {int addr; } ;
struct snd_emu10k1 {TYPE_1__ silent_page; scalar_t__ audigy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (unsigned int,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (struct snd_emu10k1*,struct snd_emux_voice*) ;
 int FUNC_2 (struct snd_emu10k1*,struct snd_emux_voice*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct snd_emu10k1*,struct snd_emu10k1_memblk*) ;
 int FUNC_5 (struct snd_emu10k1_memblk*) ;
 int FUNC_6 (struct snd_emu10k1*,int ,int,unsigned int) ;

__attribute__((used)) static int
FUNC_7(struct snd_emux_voice *VAR_40)
{
 unsigned int VAR_41;
 int VAR_42;
 unsigned int VAR_43, VAR_44;
 struct snd_midi_channel *VAR_45;
 struct snd_emu10k1 *VAR_46;
 struct snd_emu10k1_memblk *VAR_47;

 VAR_46 = VAR_40->hw;
 VAR_42 = VAR_40->ch;
 if (FUNC_3(VAR_42 < 0))
  return -VAR_14;
 VAR_45 = VAR_40->chan;

 VAR_47 = (struct snd_emu10k1_memblk *)VAR_40->block;
 if (VAR_47 == ((void*)0))
  return -VAR_14;
 VAR_47->map_locked++;
 if (FUNC_4(VAR_46, VAR_47) < 0) {

  return -VAR_15;
 }
 VAR_44 = FUNC_5(VAR_47) >> 1;
 VAR_40->reg.start += VAR_44;
 VAR_40->reg.end += VAR_44;
 VAR_40->reg.loopstart += VAR_44;
 VAR_40->reg.loopend += VAR_44;



 if (VAR_46->audigy) {
  VAR_41 = VAR_19 | (VAR_21 << 8) |
   (VAR_20 << 16) | (VAR_18 << 24);
  FUNC_6(VAR_46, VAR_2, VAR_42, VAR_41);
 } else {
  VAR_41 = (VAR_19 << 16) | (VAR_21 << 20) |
   (VAR_20 << 24) | (VAR_18 << 28);
  FUNC_6(VAR_46, VAR_22, VAR_42, VAR_41);
 }


 FUNC_6(VAR_46, VAR_12, VAR_42, 0x0000);
 FUNC_6(VAR_46, VAR_37, VAR_42, 0x0000FFFF);
 FUNC_6(VAR_46, VAR_10, VAR_42, 0x0000FFFF);
 FUNC_6(VAR_46, VAR_34, VAR_42, 0);
 FUNC_6(VAR_46, VAR_9, VAR_42, 0);


 FUNC_6(VAR_46, VAR_24, VAR_40->ch, VAR_40->apitch);


 FUNC_6(VAR_46, VAR_16, VAR_42, VAR_40->reg.parm.moddelay);
 FUNC_6(VAR_46, VAR_0, VAR_42, VAR_40->reg.parm.modatkhld);
 FUNC_6(VAR_46, VAR_11, VAR_42, VAR_40->reg.parm.moddcysus);
 FUNC_6(VAR_46, VAR_17, VAR_42, VAR_40->reg.parm.voldelay);
 FUNC_6(VAR_46, VAR_1, VAR_42, VAR_40->reg.parm.volatkhld);




 VAR_41 = (unsigned int)VAR_40->acutoff << 8 | (unsigned char)VAR_40->avol;
 FUNC_6(VAR_46, VAR_23, VAR_40->ch, VAR_41);


 FUNC_6(VAR_46, VAR_32, VAR_42, VAR_40->reg.parm.pefe);


 FUNC_6(VAR_46, VAR_25, VAR_42, VAR_40->reg.parm.lfo1delay);
 FUNC_6(VAR_46, VAR_26, VAR_42, VAR_40->reg.parm.lfo2delay);


 FUNC_2(VAR_46, VAR_40);

 FUNC_6(VAR_46, VAR_36, VAR_40->ch, VAR_40->reg.parm.tremfrq);

 FUNC_1(VAR_46, VAR_40);


 VAR_41 = VAR_40->reg.parm.reverb;
 VAR_41 += (int)VAR_40->chan->control[VAR_30] * 9 / 10;
 FUNC_0(VAR_41, 255);
 VAR_43 = VAR_40->reg.loopstart;
 FUNC_6(VAR_46, VAR_33, VAR_40->ch, (VAR_41 << 24) | VAR_43);


 VAR_43 = VAR_40->reg.loopend;
 VAR_41 = VAR_40->reg.parm.chorus;
 VAR_41 += (int)VAR_45->control[VAR_31] * 9 / 10;
 FUNC_0(VAR_41, 255);
 VAR_41 = (VAR_41 <<24) | VAR_43;
 FUNC_6(VAR_46, VAR_13, VAR_42, VAR_41);


 FUNC_6(VAR_46, VAR_38, VAR_42, 0);
 FUNC_6(VAR_46, VAR_39, VAR_42, 0);


 VAR_41 = (VAR_46->silent_page.addr << 1) | VAR_29;
 FUNC_6(VAR_46, VAR_27, VAR_42, VAR_41);
 FUNC_6(VAR_46, VAR_28, VAR_42, VAR_41);
 VAR_43 = VAR_40->reg.start;
 VAR_41 = VAR_40->reg.parm.filterQ;
 VAR_41 = (VAR_41<<28) | VAR_43;
 if (VAR_40->apitch < 0xe400)
  VAR_41 |= VAR_5;
 else {
  unsigned int VAR_48 = (VAR_40->apitch - 0xe000) >> 10;
  VAR_41 |= VAR_48 << 25;
 }
 if (VAR_40->reg.sample_mode & VAR_35)
  VAR_41 |= VAR_4;
 FUNC_6(VAR_46, VAR_3, VAR_42, VAR_41);


 VAR_41 = (unsigned int)VAR_40->vtarget << 16;
 FUNC_6(VAR_46, VAR_37, VAR_42, VAR_41 | VAR_40->ftarget);
 FUNC_6(VAR_46, VAR_10, VAR_42, VAR_41 | 0xff00);
 return 0;
}
