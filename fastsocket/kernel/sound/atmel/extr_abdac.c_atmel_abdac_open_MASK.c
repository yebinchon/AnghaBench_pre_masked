
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atmel_abdac {int rates_num; int constraints_rates; int * rates; struct snd_pcm_substream* substream; } ;
struct TYPE_4__ {int rate_min; int rate_max; } ;
struct TYPE_3__ {TYPE_2__ hw; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 struct atmel_abdac* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2)
{
 struct atmel_abdac *VAR_3 = FUNC_1(VAR_2);

 VAR_3->substream = VAR_2;
 VAR_1.rate_max = VAR_3->rates[VAR_3->rates_num - 1];
 VAR_1.rate_min = VAR_3->rates[0];
 VAR_2->runtime->hw = VAR_1;

 return FUNC_0(VAR_2->runtime, 0,
   VAR_0, &VAR_3->constraints_rates);
}
