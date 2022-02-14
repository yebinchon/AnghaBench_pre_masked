
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snd_pcm_hw_rule {int var; struct snd_pcm_hardware* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_pcm_hardware {int formats; } ;
struct snd_mask {int * bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_mask* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_2,
         struct snd_pcm_hw_rule *VAR_3)
{

 struct snd_pcm_hardware *VAR_4 = VAR_3->private;
 struct snd_mask *VAR_5 = FUNC_0(VAR_2, VAR_3->var);

 VAR_5->bits[0] &= (u_int32_t)VAR_4->formats;
 VAR_5->bits[1] &= (u_int32_t)(VAR_4->formats >> 32);
 FUNC_1(VAR_5->bits + 2, 0, (VAR_1-64) / 8);
 if (! VAR_5->bits[0] && ! VAR_5->bits[1])
  return -VAR_0;
 return 0;
}
