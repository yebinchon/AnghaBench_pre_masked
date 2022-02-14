
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_ml403_ac97cr {struct snd_pcm_substream* playback_substream; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct snd_ml403_ac97cr* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4)
{
 struct snd_ml403_ac97cr *VAR_5;
 struct snd_pcm_runtime *VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 VAR_6 = VAR_4->runtime;

 FUNC_0(VAR_2, "open(playback)\n");
 VAR_5->playback_substream = VAR_4;
 VAR_6->hw = VAR_3;

 FUNC_1(VAR_6, 0,
       VAR_1,
       VAR_0 / 2);
 return 0;
}
