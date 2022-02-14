
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {struct hdspm* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int dummy; } ;
struct hdspm {unsigned int qs_channels; unsigned int ds_channels; unsigned int ss_channels; scalar_t__ is_aes32; } ;


 int VAR_0 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*,int,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_1,
          struct snd_pcm_hw_rule *VAR_2)
{
 unsigned int VAR_3[3];
 struct hdspm *VAR_4 = VAR_2->private;
 struct snd_interval *VAR_5 = FUNC_0(VAR_1,
   VAR_0);
 if (VAR_4->is_aes32) {
  VAR_3[0] = VAR_4->qs_channels;
  VAR_3[1] = VAR_4->ds_channels;
  VAR_3[2] = VAR_4->ss_channels;
  return FUNC_1(VAR_5, 3, VAR_3, 0);
 } else {
  VAR_3[0] = VAR_4->ds_channels;
  VAR_3[1] = VAR_4->ss_channels;
  return FUNC_1(VAR_5, 2, VAR_3, 0);
 }
}
