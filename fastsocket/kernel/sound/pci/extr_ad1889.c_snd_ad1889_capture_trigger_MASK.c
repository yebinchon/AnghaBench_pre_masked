
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int reg; } ;
struct snd_ad1889 {TYPE_1__ ramc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (struct snd_ad1889*,int ) ;
 int FUNC_1 (struct snd_ad1889*,int ) ;
 int FUNC_2 (struct snd_ad1889*,int ,int ) ;
 int FUNC_3 (struct snd_ad1889*,int ,int) ;
 struct snd_ad1889* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_5(struct snd_pcm_substream *VAR_9, int VAR_10)
{
 u16 VAR_11;
 struct snd_ad1889 *VAR_12 = FUNC_4(VAR_9);

 VAR_11 = FUNC_1(VAR_12, VAR_6);

 switch (VAR_10) {
 case 129:

  FUNC_3(VAR_12, VAR_1, VAR_5 | VAR_4);
  VAR_11 |= VAR_7;

  FUNC_2(VAR_12, VAR_2, VAR_3);
  break;
 case 128:
  VAR_11 &= ~VAR_7;
  break;
 default:
  return -VAR_8;
 }

 VAR_12->ramc.reg = VAR_11;
 FUNC_3(VAR_12, VAR_6, VAR_11);
 FUNC_1(VAR_12, VAR_6);


 if (VAR_10 == 128)
  FUNC_0(VAR_12, VAR_0);

 return 0;
}
