
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {scalar_t__ rmask; } ;
struct snd_mask {int dummy; } ;
typedef int snd_pcm_hw_param_t ;


 int FUNC_0 (struct snd_pcm_hw_params*,int ,struct snd_mask const*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_hw_params *VAR_1,
     snd_pcm_hw_param_t VAR_2,
     const struct snd_mask *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_1->rmask) {
  int VAR_5 = FUNC_1(VAR_0, VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
 }
 return 0;
}
