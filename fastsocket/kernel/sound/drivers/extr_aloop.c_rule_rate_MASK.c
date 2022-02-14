
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int var; struct snd_pcm_hardware* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_pcm_hardware {int rate_max; int rate_min; } ;
struct snd_interval {scalar_t__ integer; scalar_t__ openmax; scalar_t__ openmin; int max; int min; } ;


 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (int ,struct snd_interval*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_0,
       struct snd_pcm_hw_rule *VAR_1)
{
 struct snd_pcm_hardware *VAR_2 = VAR_1->private;
 struct snd_interval VAR_3;

        VAR_3.min = VAR_2->rate_min;
        VAR_3.max = VAR_2->rate_max;
        VAR_3.openmin = VAR_3.openmax = 0;
        VAR_3.integer = 0;
 return FUNC_1(FUNC_0(VAR_0, VAR_1->var), &VAR_3);
}
