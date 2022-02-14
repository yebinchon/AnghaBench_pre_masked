
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct au1xpsc_audio_data {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct au1xpsc_audio_data*,int) ;
 int FUNC_2 (struct au1xpsc_audio_data*,int) ;
 struct au1xpsc_audio_data* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2, int VAR_3,
          struct snd_soc_dai *VAR_4)
{
 struct au1xpsc_audio_data *VAR_5 = VAR_1;
 int VAR_6, VAR_7 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 130:
 case 131:
  VAR_6 = FUNC_1(VAR_5, VAR_7);
  break;
 case 129:
 case 128:
  VAR_6 = FUNC_2(VAR_5, VAR_7);
  break;
 default:
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
