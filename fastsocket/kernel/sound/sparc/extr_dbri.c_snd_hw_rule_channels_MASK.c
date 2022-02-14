
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int* bits; } ;
struct snd_interval {int min; int max; int integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_interval*) ;
 int FUNC_3 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_hw_params *VAR_3,
    struct snd_pcm_hw_rule *VAR_4)
{
 struct snd_interval *VAR_5 = FUNC_0(VAR_3,
    VAR_1);
 struct snd_mask *VAR_6 = FUNC_1(VAR_3, VAR_2);
 struct snd_interval VAR_7;

 FUNC_2(&VAR_7);
 if (!(VAR_6->bits[0] & VAR_0)) {
  VAR_7.min = 1;
  VAR_7.max = 1;
  VAR_7.integer = 1;
  return FUNC_3(VAR_5, &VAR_7);
 }
 return 0;
}
