
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int reverb; int voldcysus; } ;
struct TYPE_6__ {TYPE_2__ parm; } ;
struct snd_emux_voice {int ch; int ptarget; unsigned int aaux; TYPE_3__ reg; TYPE_1__* chan; struct snd_emu8000* hw; } ;
struct snd_emu8000 {int dummy; } ;
struct TYPE_4__ {scalar_t__* control; } ;


 int FUNC_0 (struct snd_emu8000*,int,int) ;
 int FUNC_1 (struct snd_emu8000*,int,int ) ;
 int FUNC_2 (struct snd_emu8000*,int,unsigned int) ;
 int FUNC_3 (unsigned int,int) ;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct snd_emux_voice *VAR_1)
{
 int VAR_2 = VAR_1->ch;
 unsigned int VAR_3;
 struct snd_emu8000 *VAR_4;

 VAR_4 = VAR_1->hw;


 VAR_3 = VAR_1->reg.parm.reverb;
 VAR_3 += (int)VAR_1->chan->control[VAR_0] * 9 / 10;
 FUNC_3(VAR_3, 255);
 VAR_3 = (VAR_3 << 8) | (VAR_1->ptarget << 16) | VAR_1->aaux;
 FUNC_2(VAR_4, VAR_2, VAR_3);
 FUNC_0(VAR_4, VAR_2, VAR_1->ptarget << 16);
 FUNC_1(VAR_4, VAR_2, VAR_1->reg.parm.voldcysus);
}
