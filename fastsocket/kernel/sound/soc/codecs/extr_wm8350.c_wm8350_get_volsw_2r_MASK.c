
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm8350_output {int right_vol; int left_vol; } ;
struct wm8350_data {struct wm8350_output out2; struct wm8350_output out1; } ;
struct soc_mixer_control {unsigned int reg; } ;
struct snd_soc_codec {struct wm8350_data* private_data; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;




 struct snd_soc_codec* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_codec *VAR_2 = FUNC_0(VAR_0);
 struct wm8350_data *VAR_3 = VAR_2->private_data;
 struct wm8350_output *VAR_4 = &VAR_3->out1;
 struct wm8350_output *VAR_5 = &VAR_3->out2;
 struct soc_mixer_control *VAR_6 =
  (struct soc_mixer_control *)VAR_0->private_value;
 unsigned int VAR_7 = VAR_6->reg;


 switch (VAR_7) {
 case 129:
  VAR_1->value.integer.value[0] = VAR_4->left_vol;
  VAR_1->value.integer.value[1] = VAR_4->right_vol;
  return 0;

 case 128:
  VAR_1->value.integer.value[0] = VAR_5->left_vol;
  VAR_1->value.integer.value[1] = VAR_5->right_vol;
  return 0;

 default:
  break;
 }

 return FUNC_1(VAR_0, VAR_1);
}
