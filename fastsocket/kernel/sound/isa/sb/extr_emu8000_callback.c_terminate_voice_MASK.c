
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux_voice {int ch; struct snd_emu8000* hw; } ;
struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct snd_emux_voice *VAR_0)
{
 struct snd_emu8000 *VAR_1;

 VAR_1 = VAR_0->hw;
 FUNC_0(VAR_1, VAR_0->ch, 0x807F);
}
