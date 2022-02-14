
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int* bits; } ;
struct snd_interval {int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_mask*) ;
 int FUNC_3 (struct snd_mask*,struct snd_mask*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_hw_params *VAR_4,
           struct snd_pcm_hw_rule *VAR_5)
{
 struct snd_interval *VAR_6 = FUNC_0(VAR_4,
         VAR_2);
 struct snd_mask *VAR_7 = FUNC_1(VAR_4, VAR_3);
 struct snd_mask VAR_8;

 FUNC_2(&VAR_8);



 if (VAR_6->min == 2) {
  VAR_8.bits[0] &= ~VAR_0;
  return FUNC_3(VAR_7, &VAR_8);
 }


 if (VAR_6->min > 2) {
  VAR_8.bits[0] &= ~(VAR_1 | VAR_0);
  return FUNC_3(VAR_7, &VAR_8);
 }

 return 0;
}
