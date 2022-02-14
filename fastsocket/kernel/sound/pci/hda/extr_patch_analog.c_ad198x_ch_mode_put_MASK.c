
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_2__ {int max_channels; int num_dacs; } ;
struct ad198x_spec {TYPE_1__ multiout; scalar_t__ need_dac_fix; int num_channel_mode; int channel_mode; } ;


 int FUNC_0 (struct hda_codec*,struct snd_ctl_elem_value*,int ,int ,int*) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_1(VAR_0);
 struct ad198x_spec *VAR_3 = VAR_2->spec;
 int VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3->channel_mode,
          VAR_3->num_channel_mode,
          &VAR_3->multiout.max_channels);
 if (VAR_4 >= 0 && VAR_3->need_dac_fix)
  VAR_3->multiout.num_dacs = VAR_3->multiout.max_channels / 2;
 return VAR_4;
}
