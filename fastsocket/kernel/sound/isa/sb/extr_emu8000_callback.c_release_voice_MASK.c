
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ volrelease; scalar_t__ modrelease; } ;
struct TYPE_4__ {TYPE_1__ parm; } ;
struct snd_emux_voice {int ch; TYPE_2__ reg; struct snd_emu8000* hw; } ;
struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int ,int) ;
 int FUNC_1 (struct snd_emu8000*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct snd_emux_voice *VAR_0)
{
 int VAR_1;
 struct snd_emu8000 *VAR_2;

 VAR_2 = VAR_0->hw;
 VAR_1 = 0x8000 | (unsigned char)VAR_0->reg.parm.modrelease;
 FUNC_1(VAR_2, VAR_0->ch, VAR_1);
 VAR_1 = 0x8000 | (unsigned char)VAR_0->reg.parm.volrelease;
 FUNC_0(VAR_2, VAR_0->ch, VAR_1);
}
