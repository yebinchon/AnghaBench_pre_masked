
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; } ;
struct snd_emu10k1_fx8010_pcm {int pcm_rec; scalar_t__ gpr_ptr; scalar_t__ gpr_trigger; } ;
struct TYPE_2__ {struct snd_emu10k1_fx8010_pcm* pcm; } ;
struct snd_emu10k1 {scalar_t__ gpr_base; TYPE_1__ fx8010; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct snd_emu10k1*,scalar_t__,int ) ;
 int FUNC_1 (struct snd_pcm_substream*,int *,size_t) ;
 struct snd_emu10k1* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu10k1 *VAR_1 = FUNC_2(VAR_0);
 struct snd_emu10k1_fx8010_pcm *VAR_2 = &VAR_1->fx8010.pcm[VAR_0->number];
 size_t VAR_3;

 if (!FUNC_0(VAR_1, VAR_1->gpr_base + VAR_2->gpr_trigger, 0))
  return 0;
 VAR_3 = FUNC_0(VAR_1, VAR_1->gpr_base + VAR_2->gpr_ptr, 0) << 2;
 return FUNC_1(VAR_0, &VAR_2->pcm_rec, VAR_3);
}
