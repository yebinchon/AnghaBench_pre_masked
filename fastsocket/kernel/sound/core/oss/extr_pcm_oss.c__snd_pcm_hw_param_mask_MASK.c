
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int cmask; int rmask; } ;
struct snd_mask {int dummy; } ;
typedef int snd_pcm_hw_param_t ;


 int FUNC_0 (struct snd_pcm_hw_params*,int) ;
 int FUNC_1 (int ,struct snd_mask const*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_0,
      snd_pcm_hw_param_t VAR_1,
      const struct snd_mask *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_1(FUNC_0(VAR_0, VAR_1), VAR_2);
 if (VAR_3) {
  VAR_0->cmask |= 1 << VAR_1;
  VAR_0->rmask |= 1 << VAR_1;
 }
 return VAR_3;
}
