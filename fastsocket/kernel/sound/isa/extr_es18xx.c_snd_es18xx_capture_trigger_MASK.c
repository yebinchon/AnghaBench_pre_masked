
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_es18xx {int active; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct snd_es18xx*,int,int) ;
 struct snd_es18xx* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
          int VAR_3)
{
        struct snd_es18xx *VAR_4 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 130:
 case 131:
  if (VAR_4->active & VAR_0)
   return 0;
  VAR_4->active |= VAR_0;

                FUNC_0(VAR_4, 0xB8, 0x0f);
  break;
 case 129:
 case 128:
  if (!(VAR_4->active & VAR_0))
   return 0;
  VAR_4->active &= ~VAR_0;

                FUNC_0(VAR_4, 0xB8, 0x00);
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
