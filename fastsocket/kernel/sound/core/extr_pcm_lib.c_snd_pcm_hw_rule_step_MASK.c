
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int var; scalar_t__ private; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_0,
    struct snd_pcm_hw_rule *VAR_1)
{
 unsigned long VAR_2 = (unsigned long) VAR_1->private;
 return FUNC_1(FUNC_0(VAR_0, VAR_1->var), 0, VAR_2);
}
