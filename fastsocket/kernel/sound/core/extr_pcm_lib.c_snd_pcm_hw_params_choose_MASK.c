
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,int,int *) ;
 int FUNC_2 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,int,int *) ;

int FUNC_3(struct snd_pcm_substream *VAR_0,
        struct snd_pcm_hw_params *VAR_1)
{
 static int VAR_2[] = {
  135,
  132,
  129,
  133,
  130,
  131,
  134,
  128,
  -1
 };
 int VAR_3, *VAR_4;

 for (VAR_4 = VAR_2; *VAR_4 != -1; VAR_4++) {
  if (*VAR_4 != 134)
   VAR_3 = FUNC_1(VAR_0, VAR_1, *VAR_4, ((void*)0));
  else
   VAR_3 = FUNC_2(VAR_0, VAR_1, *VAR_4, ((void*)0));
  if (FUNC_0(VAR_3 < 0))
   return VAR_3;
 }
 return 0;
}
