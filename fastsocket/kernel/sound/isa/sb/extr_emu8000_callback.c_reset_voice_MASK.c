
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux {struct snd_emu8000* hw; } ;
struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int,int) ;
 int FUNC_1 (struct snd_emu8000*,int) ;

__attribute__((used)) static void
FUNC_2(struct snd_emux *VAR_0, int VAR_1)
{
 struct snd_emu8000 *VAR_2;

 VAR_2 = VAR_0->hw;
 FUNC_0(VAR_2, VAR_1, 0x807F);
 FUNC_1(VAR_2, VAR_1);
}
