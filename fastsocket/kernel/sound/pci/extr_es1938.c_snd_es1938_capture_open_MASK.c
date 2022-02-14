
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct es1938 {struct snd_pcm_substream* capture_substream; scalar_t__ playback2_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct es1938* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5)
{
 struct es1938 *VAR_6 = FUNC_2(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;

 if (VAR_6->playback2_substream)
  return -VAR_0;
 VAR_6->capture_substream = VAR_5;
 VAR_7->hw = VAR_4;
 FUNC_1(VAR_7, 0, VAR_2,
          &VAR_3);
 FUNC_0(VAR_7, VAR_1, 0, 0xff00);
 return 0;
}
