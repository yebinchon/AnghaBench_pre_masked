
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {struct snd_pcm_substream* playback_substream; int mode; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int ,int *,int ,int) ;
 struct sonicvibes* FUNC_1 (struct snd_pcm_substream*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4)
{
 struct sonicvibes *VAR_5 = FUNC_1(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;

 VAR_5->mode |= VAR_1;
 VAR_5->playback_substream = VAR_4;
 VAR_6->hw = VAR_3;
 FUNC_0(VAR_6, 0, VAR_0, VAR_2, ((void*)0), VAR_0, -1);
 return 0;
}
