
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_constraints {int dummy; } ;
struct snd_pcm_runtime {struct snd_pcm_hw_constraints hw_constraints; } ;
struct snd_interval {unsigned int min; unsigned int max; scalar_t__ integer; scalar_t__ openmax; scalar_t__ openmin; } ;
typedef int snd_pcm_hw_param_t ;


 int FUNC_0 (struct snd_pcm_hw_constraints*,int ) ;
 int FUNC_1 (int ,struct snd_interval*) ;

int FUNC_2(struct snd_pcm_runtime *VAR_0, snd_pcm_hw_param_t VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 struct snd_pcm_hw_constraints *VAR_4 = &VAR_0->hw_constraints;
 struct snd_interval VAR_5;
 VAR_5.min = VAR_2;
 VAR_5.max = VAR_3;
 VAR_5.openmin = VAR_5.openmax = 0;
 VAR_5.integer = 0;
 return FUNC_1(FUNC_0(VAR_4, VAR_1), &VAR_5);
}
