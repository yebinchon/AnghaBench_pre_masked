
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int rates; int rate_min; } ;
struct snd_pcm_runtime {TYPE_2__ hw; } ;
struct snd_ice1712 {TYPE_1__* ac97; struct snd_pcm_substream* capture_con_substream; } ;
struct TYPE_3__ {int* rates; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 struct snd_ice1712* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 struct snd_ice1712 *VAR_5 = FUNC_0(VAR_3);

 VAR_5->capture_con_substream = VAR_3;
 VAR_4->hw = VAR_2;
 VAR_4->hw.rates = VAR_5->ac97->rates[VAR_0];
 if (!(VAR_4->hw.rates & VAR_1))
  VAR_4->hw.rate_min = 48000;
 return 0;
}
