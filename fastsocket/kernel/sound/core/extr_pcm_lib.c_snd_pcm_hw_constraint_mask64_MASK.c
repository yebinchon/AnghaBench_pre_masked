
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
struct snd_pcm_hw_constraints {int dummy; } ;
struct snd_pcm_runtime {struct snd_pcm_hw_constraints hw_constraints; } ;
struct snd_mask {int * bits; } ;
typedef int snd_pcm_hw_param_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_mask* FUNC_0 (struct snd_pcm_hw_constraints*,int ) ;
 int FUNC_1 (int *,int ,int) ;

int FUNC_2(struct snd_pcm_runtime *VAR_2, snd_pcm_hw_param_t VAR_3,
     u_int64_t VAR_4)
{
 struct snd_pcm_hw_constraints *VAR_5 = &VAR_2->hw_constraints;
 struct snd_mask *VAR_6 = FUNC_0(VAR_5, VAR_3);
 VAR_6->bits[0] &= (u_int32_t)VAR_4;
 VAR_6->bits[1] &= (u_int32_t)(VAR_4 >> 32);
 FUNC_1(VAR_6->bits + 2, 0, (VAR_1-64) / 8);
 if (! VAR_6->bits[0] && ! VAR_6->bits[1])
  return -VAR_0;
 return 0;
}
