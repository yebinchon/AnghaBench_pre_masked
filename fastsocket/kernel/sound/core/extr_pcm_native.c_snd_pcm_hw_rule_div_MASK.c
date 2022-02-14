
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int var; int * deps; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int dummy; } ;


 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (int ,int ,struct snd_interval*) ;
 int FUNC_3 (int ,struct snd_interval*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_hw_params *VAR_0,
          struct snd_pcm_hw_rule *VAR_1)
{
 struct snd_interval VAR_2;
 FUNC_2(FUNC_1(VAR_0, VAR_1->deps[0]),
       FUNC_1(VAR_0, VAR_1->deps[1]), &VAR_2);
 return FUNC_3(FUNC_0(VAR_0, VAR_1->var), &VAR_2);
}
