
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int voldcysus; } ;
struct TYPE_4__ {TYPE_1__ parm; } ;
struct snd_emux_voice {int apan; unsigned int aaux; TYPE_2__ reg; int ch; int apitch; scalar_t__ ptarget; scalar_t__ block; struct snd_emu10k1* hw; } ;
struct snd_emu10k1_memblk {scalar_t__ mapped_page; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct snd_emu10k1*,int ,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct snd_emux_voice *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 struct snd_emu10k1 *VAR_7;
 struct snd_emu10k1_memblk *VAR_8;

 VAR_7 = VAR_4->hw;

 VAR_8 = (struct snd_emu10k1_memblk *)VAR_4->block;
 if (! VAR_8 || VAR_8->mapped_page < 0)
  return;




 VAR_6 = FUNC_0(VAR_4->apitch);


 VAR_5 = VAR_6 | (VAR_4->apan << 8) | VAR_4->aaux;
 FUNC_1(VAR_7, VAR_3, VAR_4->ch, VAR_5);


 FUNC_1(VAR_7, VAR_0, VAR_4->ch, VAR_6);


 FUNC_1(VAR_7, VAR_1, VAR_4->ch, VAR_4->reg.parm.voldcysus|VAR_2);
}
