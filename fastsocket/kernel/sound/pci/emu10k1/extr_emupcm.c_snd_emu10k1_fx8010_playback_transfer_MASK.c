
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; } ;
struct snd_emu10k1_fx8010_pcm {int pcm_rec; } ;
struct TYPE_2__ {struct snd_emu10k1_fx8010_pcm* pcm; } ;
struct snd_emu10k1 {TYPE_1__ fx8010; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int *,int ) ;
 struct snd_emu10k1* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_emu10k1 *VAR_2 = FUNC_1(VAR_1);
 struct snd_emu10k1_fx8010_pcm *VAR_3 = &VAR_2->fx8010.pcm[VAR_1->number];

 FUNC_0(VAR_1, &VAR_3->pcm_rec, VAR_0);
 return 0;
}
