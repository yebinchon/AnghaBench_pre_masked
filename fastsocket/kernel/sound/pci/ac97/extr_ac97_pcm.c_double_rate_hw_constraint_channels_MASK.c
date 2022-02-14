
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*,struct snd_interval const*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_2,
           struct snd_pcm_hw_rule *VAR_3)
{
 struct snd_interval *VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4->min > 48000) {
  static const struct snd_interval VAR_5 = {
   .min = 2,
   .max = 2,
  };
  struct snd_interval *VAR_6 = FUNC_0(VAR_2, VAR_0);
  return FUNC_1(VAR_6, &VAR_5);
 }
 return 0;
}
