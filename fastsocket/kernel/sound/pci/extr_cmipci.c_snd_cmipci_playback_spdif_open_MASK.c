
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int rates; int rate_max; int formats; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct cmipci {int chip_version; int dig_status; int dig_pcm_status; scalar_t__ can_96k; scalar_t__ can_ac3_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cmipci*,int ,struct snd_pcm_substream*) ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int,int) ;
 struct cmipci* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_7)
{
 struct cmipci *VAR_8 = FUNC_3(VAR_7);
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 int VAR_10;

 if ((VAR_10 = FUNC_0(VAR_8, VAR_0, VAR_7)) < 0)
  return VAR_10;
 if (VAR_8->can_ac3_hw) {
  VAR_9->hw = VAR_6;
  if (VAR_8->chip_version >= 37) {
   VAR_9->hw.formats |= VAR_1;
   FUNC_2(VAR_9, 0, 32, 24);
  }
  if (VAR_8->can_96k) {
   VAR_9->hw.rates |= VAR_3 |
          VAR_4;
   VAR_9->hw.rate_max = 96000;
  }
 } else {
  VAR_9->hw = VAR_5;
 }
 FUNC_1(VAR_9, VAR_2, 0, 0x40000);
 VAR_8->dig_pcm_status = VAR_8->dig_status;
 return 0;
}
