
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rates; int rate_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct cmipci {int chip_version; int dig_status; int dig_pcm_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cmipci*,int ,struct snd_pcm_substream*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct cmipci* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_8)
{
 struct cmipci *VAR_9 = FUNC_3(VAR_8);
 struct snd_pcm_runtime *VAR_10 = VAR_8->runtime;
 int VAR_11;

 if ((VAR_11 = FUNC_0(VAR_9, VAR_0, VAR_8)) < 0)
  return VAR_11;
 VAR_10->hw = VAR_7;
 if (VAR_9->chip_version == 68) {
  VAR_10->hw.rates |= VAR_3 |
         VAR_4;
  VAR_10->hw.rate_max = 96000;
 } else if (VAR_9->chip_version == 55) {
  VAR_11 = FUNC_1(VAR_10, 0,
   VAR_2, &VAR_6);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_10->hw.rates |= VAR_5;
  VAR_10->hw.rate_max = 128000;
 }
 FUNC_2(VAR_10, VAR_1, 0, 0x10000);
 VAR_9->dig_pcm_status = VAR_9->dig_status;
 return 0;
}
