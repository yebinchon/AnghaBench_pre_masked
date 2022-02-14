
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {struct hdsp* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int max; int integer; } ;
struct hdsp {scalar_t__ io_type; int qs_out_channels; int ds_out_channels; int ss_out_channels; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_3,
          struct snd_pcm_hw_rule *VAR_4)
{
 struct hdsp *VAR_5 = VAR_4->private;
 struct snd_interval *VAR_6 = FUNC_0(VAR_3, VAR_1);
 struct snd_interval *VAR_7 = FUNC_0(VAR_3, VAR_2);
 if (VAR_7->min > 96000 && VAR_5->io_type == VAR_0) {
  struct snd_interval VAR_8 = {
   .min = VAR_5->qs_out_channels,
   .max = VAR_5->qs_out_channels,
   .integer = 1,
  };
  return FUNC_1(VAR_6, &VAR_8);
 } else if (VAR_7->min > 48000 && VAR_7->max <= 96000) {
  struct snd_interval VAR_9 = {
   .min = VAR_5->ds_out_channels,
   .max = VAR_5->ds_out_channels,
   .integer = 1,
  };
  return FUNC_1(VAR_6, &VAR_9);
 } else if (VAR_7->max < 64000) {
  struct snd_interval VAR_10 = {
   .min = VAR_5->ss_out_channels,
   .max = VAR_5->ss_out_channels,
   .integer = 1,
  };
  return FUNC_1(VAR_6, &VAR_10);
 }
 return 0;
}
