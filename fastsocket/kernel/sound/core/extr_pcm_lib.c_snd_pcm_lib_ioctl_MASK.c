
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct snd_pcm_substream*,void*) ;
 int FUNC_1 (struct snd_pcm_substream*,void*) ;
 int FUNC_2 (struct snd_pcm_substream*,void*) ;

int FUNC_3(struct snd_pcm_substream *VAR_1,
        unsigned int VAR_2, void *VAR_3)
{
 switch (VAR_2) {
 case 129:
  return 0;
 case 128:
  return FUNC_2(VAR_1, VAR_3);
 case 131:
  return FUNC_0(VAR_1, VAR_3);
 case 130:
  return FUNC_1(VAR_1, VAR_3);
 }
 return -VAR_0;
}
