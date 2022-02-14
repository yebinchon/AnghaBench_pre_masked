
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {scalar_t__ private; } ;
struct snd_pcm_hw_params {unsigned int msbits; } ;
struct snd_interval {int dummy; } ;


 int VAR_0 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 scalar_t__ FUNC_1 (struct snd_interval*) ;
 int FUNC_2 (struct snd_interval*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_hw_params *VAR_1,
      struct snd_pcm_hw_rule *VAR_2)
{
 unsigned int VAR_3 = (unsigned long) VAR_2->private;
 int VAR_4 = VAR_3 & 0xffff;
 unsigned int VAR_5 = VAR_3 >> 16;
 struct snd_interval *VAR_6 = FUNC_0(VAR_1, VAR_0);
 if (FUNC_1(VAR_6) && FUNC_2(VAR_6) == VAR_4)
  VAR_1->msbits = VAR_5;
 return 0;
}
