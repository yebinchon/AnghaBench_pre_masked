
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {struct hdspm* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {scalar_t__ min; int max; int integer; } ;
struct hdspm {scalar_t__ ss_channels; scalar_t__ ds_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_2,
        struct snd_pcm_hw_rule * VAR_3)
{
 struct hdspm *VAR_4 = VAR_3->private;
 struct snd_interval *VAR_5 =
     FUNC_0(VAR_2, VAR_0);
 struct snd_interval *VAR_6 =
     FUNC_0(VAR_2, VAR_1);

 if (VAR_5->min >= VAR_4->ss_channels) {
  struct snd_interval VAR_7 = {
   .min = 32000,
   .max = 48000,
   .integer = 1,
  };
  return FUNC_1(VAR_6, &VAR_7);
 } else if (VAR_5->max <= VAR_4->ds_channels) {
  struct snd_interval VAR_8 = {
   .min = 64000,
   .max = 96000,
   .integer = 1,
  };

  return FUNC_1(VAR_6, &VAR_8);
 }
 return 0;
}
