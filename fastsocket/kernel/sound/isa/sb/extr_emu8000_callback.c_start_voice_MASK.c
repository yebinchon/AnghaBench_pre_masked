
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_midi_channel {scalar_t__* control; } ;
struct TYPE_3__ {unsigned int chorus; unsigned int filterQ; int lfo2delay; int lfo1delay; int pefe; int volatkhld; int voldelay; int moddcysus; int modatkhld; int moddelay; } ;
struct TYPE_4__ {int loopend; int start; TYPE_1__ parm; } ;
struct snd_emux_voice {int ch; int vtarget; unsigned int ftarget; TYPE_2__ reg; struct snd_midi_channel* chan; struct snd_emu8000* hw; } ;
struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int,int ) ;
 int FUNC_1 (struct snd_emu8000*,int,int ) ;
 int FUNC_2 (struct snd_emu8000*,int,int ) ;
 int FUNC_3 (struct snd_emu8000*,int,int ) ;
 int FUNC_4 (struct snd_emu8000*,int,unsigned int) ;
 int FUNC_5 (struct snd_emu8000*,int,int ) ;
 int FUNC_6 (struct snd_emu8000*,int,unsigned int) ;
 int FUNC_7 (struct snd_emu8000*,int,unsigned int) ;
 int FUNC_8 (struct snd_emu8000*,int,int) ;
 int FUNC_9 (struct snd_emu8000*,int,int ) ;
 int FUNC_10 (struct snd_emu8000*,int,int ) ;
 int FUNC_11 (struct snd_emu8000*,int,int ) ;
 int FUNC_12 (struct snd_emu8000*,int,int ) ;
 int FUNC_13 (struct snd_emu8000*,int,int ) ;
 int FUNC_14 (struct snd_emu8000*,int,int ) ;
 int FUNC_15 (struct snd_emu8000*,int,int ) ;
 int FUNC_16 (struct snd_emu8000*,int,unsigned int) ;
 int FUNC_17 (unsigned int,int) ;
 size_t VAR_0 ;
 int FUNC_18 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_19 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_20 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_21 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_22 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_23 (struct snd_emu8000*,struct snd_emux_voice*) ;

__attribute__((used)) static int
FUNC_24(struct snd_emux_voice *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;
 int VAR_4;
 struct snd_midi_channel *VAR_5;
 struct snd_emu8000 *VAR_6;

 VAR_6 = VAR_1->hw;
 VAR_3 = VAR_1->ch;
 VAR_5 = VAR_1->chan;


 FUNC_8(VAR_6, VAR_3, 0x0080);
 FUNC_16(VAR_6, VAR_3, 0x0000FFFF);
 FUNC_7(VAR_6, VAR_3, 0x0000FFFF);
 FUNC_15(VAR_6, VAR_3, 0);
 FUNC_5(VAR_6, VAR_3, 0);


 FUNC_21(VAR_6, VAR_1);


 FUNC_10(VAR_6, VAR_3, VAR_1->reg.parm.moddelay);
 FUNC_3(VAR_6, VAR_3, VAR_1->reg.parm.modatkhld);
 FUNC_9(VAR_6, VAR_3, VAR_1->reg.parm.moddcysus);
 FUNC_11(VAR_6, VAR_3, VAR_1->reg.parm.voldelay);
 FUNC_2(VAR_6, VAR_3, VAR_1->reg.parm.volatkhld);




 FUNC_23(VAR_6, VAR_1);


 FUNC_14(VAR_6, VAR_3, VAR_1->reg.parm.pefe);


 FUNC_12(VAR_6, VAR_3, VAR_1->reg.parm.lfo1delay);
 FUNC_13(VAR_6, VAR_3, VAR_1->reg.parm.lfo2delay);


 FUNC_19(VAR_6, VAR_1);

 FUNC_22(VAR_6, VAR_1);

 FUNC_18(VAR_6, VAR_1);

 FUNC_20(VAR_6, VAR_1);


 VAR_4 = VAR_1->reg.loopend - 1;
 VAR_2 = VAR_1->reg.parm.chorus;
 VAR_2 += (int)VAR_5->control[VAR_0] * 9 / 10;
 FUNC_17(VAR_2, 255);
 VAR_2 = (VAR_2 <<24) | (unsigned int)VAR_4;
 FUNC_6(VAR_6, VAR_3, VAR_2);


 VAR_4 = VAR_1->reg.start - 1;
 VAR_2 = VAR_1->reg.parm.filterQ;
 VAR_2 = (VAR_2<<28) | (unsigned int)VAR_4;
 FUNC_4(VAR_6, VAR_3, VAR_2);


 FUNC_1(VAR_6, VAR_3, 0);
 FUNC_0(VAR_6, VAR_3, 0);


 VAR_2 = VAR_1->vtarget << 16;
 FUNC_16(VAR_6, VAR_3, VAR_2 | VAR_1->ftarget);
 FUNC_7(VAR_6, VAR_3, VAR_2 | 0xff00);

 return 0;
}
