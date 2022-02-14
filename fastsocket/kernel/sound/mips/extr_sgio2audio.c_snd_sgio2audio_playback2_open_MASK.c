
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sgio2audio {int * channel; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int * private_data; int hw; } ;


 struct snd_sgio2audio* FUNC_0 (struct snd_pcm_substream*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct snd_sgio2audio *VAR_2 = FUNC_0(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;

 VAR_3->hw = VAR_0;
 VAR_3->private_data = &VAR_2->channel[2];
 return 0;
}
