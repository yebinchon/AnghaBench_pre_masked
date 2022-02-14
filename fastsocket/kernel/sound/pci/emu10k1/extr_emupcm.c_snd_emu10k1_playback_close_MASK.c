
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t number; } ;
struct snd_emu10k1_pcm_mixer {int * epcm; } ;
struct snd_emu10k1 {struct snd_emu10k1_pcm_mixer* pcm_mixer; } ;


 int FUNC_0 (struct snd_emu10k1*,size_t,int ) ;
 struct snd_emu10k1* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu10k1 *VAR_1 = FUNC_1(VAR_0);
 struct snd_emu10k1_pcm_mixer *VAR_2 = &VAR_1->pcm_mixer[VAR_0->number];

 VAR_2->epcm = ((void*)0);
 FUNC_0(VAR_1, VAR_0->number, 0);
 return 0;
}
