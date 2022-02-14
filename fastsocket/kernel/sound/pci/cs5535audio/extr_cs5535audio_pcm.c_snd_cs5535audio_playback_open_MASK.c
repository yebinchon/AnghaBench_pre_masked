
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int rates; } ;
struct snd_pcm_runtime {int * private_data; TYPE_2__ hw; } ;
struct cs5535audio {int * dmas; struct snd_pcm_substream* playback_substream; TYPE_1__* ac97; } ;
struct TYPE_3__ {int * rates; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*) ;
 struct cs5535audio* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4)
{
 int VAR_5;
 struct cs5535audio *VAR_6 = FUNC_2(VAR_4);
 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;

 VAR_7->hw = VAR_3;
 VAR_7->hw.rates = VAR_6->ac97->rates[VAR_0];
 FUNC_1(VAR_7);
 VAR_6->playback_substream = VAR_4;
 VAR_7->private_data = &(VAR_6->dmas[VAR_1]);
 if ((VAR_5 = FUNC_0(VAR_7,
    VAR_2)) < 0)
  return VAR_5;

 return 0;
}
