
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm8993_priv {int class_w_users; } ;
struct snd_soc_dapm_widget {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dev; struct wm8993_priv* private_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 struct snd_soc_dapm_widget* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_dapm_widget *VAR_5 = FUNC_1(VAR_3);
 struct snd_soc_codec *VAR_6 = VAR_5->codec;
 struct wm8993_priv *VAR_7 = VAR_6->private_data;
 int VAR_8;


 if (VAR_4->value.integer.value[0] == 0) {
  if (VAR_7->class_w_users == 0) {
   FUNC_0(VAR_6->dev, "Disabling Class W\n");
   FUNC_3(VAR_6, VAR_0,
         VAR_1 |
         VAR_2,
         0);
  }
  VAR_7->class_w_users++;
 }


 VAR_8 = FUNC_2(VAR_3, VAR_4);


 if (VAR_4->value.integer.value[0] == 1) {
  if (VAR_7->class_w_users == 1) {
   FUNC_0(VAR_6->dev, "Enabling Class W\n");
   FUNC_3(VAR_6, VAR_0,
         VAR_1 |
         VAR_2,
         VAR_1 |
         VAR_2);
  }
  VAR_7->class_w_users--;
 }

 FUNC_0(VAR_6->dev, "Indirect DAC use count now %d\n",
  VAR_7->class_w_users);

 return VAR_8;
}
