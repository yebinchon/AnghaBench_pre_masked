
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fmmod; } ;
struct TYPE_6__ {TYPE_2__ parm; } ;
struct snd_emux_voice {int ch; TYPE_1__* chan; TYPE_3__ reg; } ;
struct snd_emu8000 {int dummy; } ;
struct TYPE_4__ {int gm_modulation; int midi_pressure; } ;


 int FUNC_0 (struct snd_emu8000*,int ,unsigned short) ;
 int FUNC_1 (short,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct snd_emu8000 *VAR_1, struct snd_emux_voice *VAR_2)
{
 unsigned short VAR_3;
 short VAR_4;
 unsigned char VAR_5;
 int VAR_6;

 VAR_4 = (char)(VAR_2->reg.parm.fmmod>>8);
 VAR_5 = (VAR_2->reg.parm.fmmod & 0xff);
 VAR_6 = VAR_2->chan->gm_modulation + VAR_2->chan->midi_pressure;
 VAR_4 += (VAR_0 * VAR_6) / 1200;
 FUNC_1(VAR_4, -128, 127);
 VAR_3 = ((unsigned char)VAR_4<<8) | VAR_5;
 FUNC_0(VAR_1, VAR_2->ch, VAR_3);
}
