
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
          int VAR_2)
{
 switch (VAR_2) {
 case 129:

  FUNC_0(VAR_1);
  break;
 case 128:

  FUNC_1(VAR_1);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
