
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_korg1212 {int currentBuffer; size_t cardState; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 struct snd_korg1212* FUNC_1 (struct snd_pcm_substream*) ;
 int * VAR_1 ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_2)
{
        struct snd_korg1212 *VAR_3 = FUNC_1(VAR_2);
        snd_pcm_uframes_t VAR_4;

 VAR_4 = VAR_3->currentBuffer * VAR_0;

 FUNC_0("K1212_DEBUG: snd_korg1212_playback_pointer [%s] %ld\n",
       VAR_1[VAR_3->cardState], VAR_4);

        return VAR_4;
}
