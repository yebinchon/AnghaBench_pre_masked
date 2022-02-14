
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct au1xpsc_audio_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct au1xpsc_audio_data*) ;
 int FUNC_5 (struct au1xpsc_audio_data*) ;
 int VAR_0 ;




 int FUNC_6 (struct snd_pcm_substream*) ;
 struct au1xpsc_audio_data* VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_2,
    int VAR_3, struct snd_soc_dai *VAR_4)
{

 struct au1xpsc_audio_data *VAR_5 = VAR_1;
 int VAR_6, VAR_7 = FUNC_6(VAR_2);

 VAR_6 = 0;

 switch (VAR_3) {
 case 130:
 case 131:
  FUNC_9(FUNC_0(VAR_7), FUNC_4(VAR_5));
  FUNC_8();
  FUNC_9(FUNC_1(VAR_7), FUNC_4(VAR_5));
  FUNC_8();
  break;
 case 129:
 case 128:
  FUNC_9(FUNC_2(VAR_7), FUNC_4(VAR_5));
  FUNC_8();

  while (FUNC_7(FUNC_5(VAR_5)) & FUNC_3(VAR_7))
   asm volatile ("nop");

  FUNC_9(FUNC_0(VAR_7), FUNC_4(VAR_5));
  FUNC_8();

  break;
 default:
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
