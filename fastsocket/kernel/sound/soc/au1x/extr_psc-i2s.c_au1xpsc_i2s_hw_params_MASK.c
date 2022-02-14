
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {scalar_t__ msbits; } ;
struct au1xpsc_audio_data {scalar_t__ rate; int cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct au1xpsc_audio_data*) ;
 int FUNC_1 (struct au1xpsc_audio_data*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct au1xpsc_audio_data* VAR_3 ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_4,
     struct snd_pcm_hw_params *VAR_5,
     struct snd_soc_dai *VAR_6)
{
 struct au1xpsc_audio_data *VAR_7 = VAR_3;

 int VAR_8;
 unsigned long VAR_9;


 VAR_9 = FUNC_4(FUNC_1(VAR_7));
 if (VAR_9 & (VAR_2 | VAR_1)) {

  VAR_8 = FUNC_4(FUNC_0(VAR_7));
  if ((FUNC_2(VAR_8) != VAR_5->msbits) ||
      (FUNC_5(VAR_5) != VAR_7->rate))
   return -VAR_0;
 } else {

  VAR_7->cfg &= ~(0x1f << 4);
  VAR_7->cfg |= FUNC_3(VAR_5->msbits);

  VAR_7->rate = FUNC_5(VAR_5);
 }
 return 0;
}
