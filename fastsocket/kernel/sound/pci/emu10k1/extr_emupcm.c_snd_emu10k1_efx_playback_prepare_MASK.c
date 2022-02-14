
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {unsigned int start_addr; int * voices; int extra; } ;
struct snd_emu10k1 {int * efx_pcm_mixer; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct snd_emu10k1*,int,int,int ,unsigned int,unsigned int,int *) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_emu10k1* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_emu10k1 *VAR_2 = FUNC_2(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_emu10k1_pcm *VAR_4 = VAR_3->private_data;
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_5 = VAR_4->start_addr;
 VAR_6 = VAR_4->start_addr + FUNC_1(VAR_1);




 VAR_7 = ( VAR_6 - VAR_5 ) / VAR_0;

 FUNC_0(VAR_2, 1, 1, VAR_4->extra,
       VAR_5, VAR_5 + (VAR_7 / 2), ((void*)0));


 FUNC_0(VAR_2, 1, 0, VAR_4->voices[0],
       VAR_5, VAR_5 + VAR_7,
       &VAR_2->efx_pcm_mixer[0]);

 VAR_5 += VAR_7;
 for (VAR_8 = 1; VAR_8 < VAR_0; VAR_8++) {
  FUNC_0(VAR_2, 0, 0, VAR_4->voices[VAR_8],
        VAR_5, VAR_5 + VAR_7,
        &VAR_2->efx_pcm_mixer[VAR_8]);
  VAR_5 += VAR_7;
 }

 return 0;
}
