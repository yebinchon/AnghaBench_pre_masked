
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_emu10k1_pcm_mixer {int * epcm; } ;
struct snd_emu10k1 {struct snd_emu10k1_pcm_mixer* efx_pcm_mixer; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_emu10k1*,int,int ) ;
 struct snd_emu10k1* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_emu10k1 *VAR_2 = FUNC_1(VAR_1);
 struct snd_emu10k1_pcm_mixer *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->efx_pcm_mixer[VAR_4];
  VAR_3->epcm = ((void*)0);
  FUNC_0(VAR_2, VAR_4, 0);
 }
 return 0;
}
