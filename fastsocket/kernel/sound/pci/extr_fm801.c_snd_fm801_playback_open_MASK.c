
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int channels_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct fm801 {scalar_t__ multichannel; struct snd_pcm_substream* playback_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct fm801* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_6)
{
 struct fm801 *VAR_7 = FUNC_2(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;
 int VAR_9;

 VAR_7->playback_substream = VAR_6;
 VAR_8->hw = VAR_5;
 FUNC_1(VAR_8, 0, VAR_2,
       &VAR_4);
 if (VAR_7->multichannel) {
  VAR_8->hw.channels_max = 6;
  FUNC_1(VAR_8, 0,
        VAR_0,
        &VAR_3);
 }
 if ((VAR_9 = FUNC_0(VAR_8, VAR_1)) < 0)
  return VAR_9;
 return 0;
}
