
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {unsigned long long formats; scalar_t__ rate_max; scalar_t__ rate_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct atmel_ac97c {int cur_format; struct snd_pcm_substream* playback_substream; scalar_t__ cur_rate; int opened; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct atmel_ac97c* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct atmel_ac97c *VAR_3 = FUNC_2(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;

 FUNC_0(&VAR_1);
 VAR_3->opened++;
 VAR_4->hw = VAR_0;
 if (VAR_3->cur_rate) {
  VAR_4->hw.rate_min = VAR_3->cur_rate;
  VAR_4->hw.rate_max = VAR_3->cur_rate;
 }
 if (VAR_3->cur_format)
  VAR_4->hw.formats = (1ULL << VAR_3->cur_format);
 FUNC_1(&VAR_1);
 VAR_3->playback_substream = VAR_2;
 return 0;
}
