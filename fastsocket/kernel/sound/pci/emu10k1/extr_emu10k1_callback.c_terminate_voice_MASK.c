
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux_voice {scalar_t__ block; int ch; struct snd_emu10k1* hw; } ;
struct snd_emu10k1_memblk {scalar_t__ map_locked; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct snd_emux_voice *VAR_2)
{
 struct snd_emu10k1 *VAR_3;

 if (FUNC_0(!VAR_2))
  return;
 VAR_3 = VAR_2->hw;
 FUNC_1(VAR_3, VAR_0, VAR_2->ch, 0x807f | VAR_1);
 if (VAR_2->block) {
  struct snd_emu10k1_memblk *VAR_4;
  VAR_4 = (struct snd_emu10k1_memblk *)VAR_2->block;
  if (VAR_4->map_locked > 0)
   VAR_4->map_locked--;
 }
}
