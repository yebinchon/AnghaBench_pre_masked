
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; } ;
struct snd_emu10k1_fx8010_pcm {scalar_t__ opened; } ;
struct TYPE_2__ {struct snd_emu10k1_fx8010_pcm* pcm; } ;
struct snd_emu10k1 {int reg_lock; TYPE_1__ fx8010; } ;


 struct snd_emu10k1* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu10k1 *VAR_1 = FUNC_0(VAR_0);
 struct snd_emu10k1_fx8010_pcm *VAR_2 = &VAR_1->fx8010.pcm[VAR_0->number];

 FUNC_1(&VAR_1->reg_lock);
 VAR_2->opened = 0;
 FUNC_2(&VAR_1->reg_lock);
 return 0;
}
