
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1843 {int dummy; } ;
typedef int snd_pcm_format_t ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ad1843*,int *,unsigned int) ;
 int FUNC_1 (struct snd_ad1843*,int,int *,int,int *,int) ;

void FUNC_2(struct snd_ad1843 *VAR_3,
        unsigned int VAR_4,
        snd_pcm_format_t VAR_5,
        unsigned int VAR_6)
{
 int VAR_7 = 0;

 switch (VAR_5) {
 case 129: VAR_7 = 0; break;
 case 128: VAR_7 = 0; break;
 case 130: VAR_7 = 1; break;
 case 131: VAR_7 = 2; break;
 case 132: VAR_7 = 3; break;
 default: break;
 }

 FUNC_0(VAR_3, &VAR_2, VAR_4);
 FUNC_1(VAR_3, 2,
      &VAR_0, VAR_7, &VAR_1, VAR_7);
}
