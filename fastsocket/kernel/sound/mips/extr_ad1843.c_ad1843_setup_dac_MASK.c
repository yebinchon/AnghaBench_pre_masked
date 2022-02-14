
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1843 {int dummy; } ;
typedef int snd_pcm_format_t ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_ad1843*,int *,unsigned int) ;
 int FUNC_1 (struct snd_ad1843*,int,int *,int,int *,int) ;

void FUNC_2(struct snd_ad1843 *VAR_6,
        unsigned int VAR_7,
        unsigned int VAR_8,
        snd_pcm_format_t VAR_9,
        unsigned int VAR_10)
{
 int VAR_11 = 0, VAR_12 = 0;

 switch (VAR_9) {
 case 129:
  VAR_11 = 0;
  break;
 case 128:
  VAR_11 = 0;
  break;
 case 130:
  VAR_11 = 1;
  break;
 case 131:
  VAR_11 = 2;
  break;
 case 132:
  VAR_11 = 3;
  break;
 default:
  break;
 }

 switch (VAR_10) {
 case 2:
  VAR_12 = 0;
  break;
 case 1:
  VAR_12 = 1;
  break;
 default:
  break;
 }

 if (VAR_7) {
  FUNC_0(VAR_6, &VAR_1, VAR_8);
  FUNC_1(VAR_6, 2,
       &VAR_5, VAR_12,
       &VAR_4, VAR_11);
 } else {
  FUNC_0(VAR_6, &VAR_0, VAR_8);
  FUNC_1(VAR_6, 2,
       &VAR_3, VAR_12,
       &VAR_2, VAR_11);
 }
}
