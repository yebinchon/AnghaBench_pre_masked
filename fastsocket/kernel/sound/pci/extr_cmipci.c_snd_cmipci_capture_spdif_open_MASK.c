
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rates; int rate_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct cmipci {int chip_version; scalar_t__ can_96k; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cmipci*,int ,struct snd_pcm_substream*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct cmipci* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5)
{
 struct cmipci *VAR_6 = FUNC_2(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 int VAR_8;

 if ((VAR_8 = FUNC_0(VAR_6, VAR_0, VAR_5)) < 0)
  return VAR_8;
 VAR_7->hw = VAR_4;
 if (VAR_6->can_96k && !(VAR_6->chip_version == 68)) {
  VAR_7->hw.rates |= VAR_2 |
         VAR_3;
  VAR_7->hw.rate_max = 96000;
 }
 FUNC_1(VAR_7, VAR_1, 0, 0x40000);
 return 0;
}
