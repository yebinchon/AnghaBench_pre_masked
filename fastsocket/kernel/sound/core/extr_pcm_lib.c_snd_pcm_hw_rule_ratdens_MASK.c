
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {scalar_t__ var; struct snd_pcm_hw_constraint_ratdens* private; } ;
struct snd_pcm_hw_params {unsigned int rate_num; unsigned int rate_den; } ;
struct snd_pcm_hw_constraint_ratdens {int rats; int nrats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_hw_params*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_1,
       struct snd_pcm_hw_rule *VAR_2)
{
 struct snd_pcm_hw_constraint_ratdens *VAR_3 = VAR_2->private;
 unsigned int VAR_4 = 0, VAR_5 = 0;
 int VAR_6 = FUNC_1(FUNC_0(VAR_1, VAR_2->var),
      VAR_3->nrats, VAR_3->rats, &VAR_4, &VAR_5);
 if (VAR_6 >= 0 && VAR_5 && VAR_2->var == VAR_0) {
  VAR_1->rate_num = VAR_4;
  VAR_1->rate_den = VAR_5;
 }
 return VAR_6;
}
