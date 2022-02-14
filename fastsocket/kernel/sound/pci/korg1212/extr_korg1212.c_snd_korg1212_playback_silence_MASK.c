
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_korg1212 {size_t cardState; int channels; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct snd_korg1212*,int ,int ,int ,int) ;
 struct snd_korg1212* FUNC_2 (struct snd_pcm_substream*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
                           int VAR_2,
                           snd_pcm_uframes_t VAR_3,
                           snd_pcm_uframes_t VAR_4)
{
        struct snd_korg1212 *VAR_5 = FUNC_2(VAR_1);

 FUNC_0("K1212_DEBUG: snd_korg1212_playback_silence [%s]\n",
       VAR_0[VAR_5->cardState]);

 return FUNC_1(VAR_5, VAR_3, VAR_4, 0, VAR_5->channels * 2);
}
