
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_constraints {int dummy; } ;
struct snd_pcm_runtime {struct snd_pcm_hw_constraints hw_constraints; } ;
typedef int snd_pcm_hw_param_t ;


 int FUNC_0 (struct snd_pcm_hw_constraints*,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct snd_pcm_runtime *VAR_0, snd_pcm_hw_param_t VAR_1)
{
 struct snd_pcm_hw_constraints *VAR_2 = &VAR_0->hw_constraints;
 return FUNC_1(FUNC_0(VAR_2, VAR_1));
}
