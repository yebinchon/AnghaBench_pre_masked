
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int rates; int rate_max; int rate_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct snd_ice1712 {TYPE_2__* hw_rates; } ;
struct TYPE_4__ {int count; int * list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct snd_ice1712 *VAR_2,
    struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;

 VAR_4->hw.rate_min = VAR_2->hw_rates->list[0];
 VAR_4->hw.rate_max = VAR_2->hw_rates->list[VAR_2->hw_rates->count - 1];
 VAR_4->hw.rates = VAR_1;
 return FUNC_0(VAR_4, 0,
       VAR_0,
       VAR_2->hw_rates);
}
