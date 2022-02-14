
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wm8903_priv {int class_w_users; } ;
struct snd_soc_dapm_widget {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct i2c_client* control_data; struct wm8903_priv* private_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 struct snd_soc_dapm_widget* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_3 (struct snd_soc_codec*,int ) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_dapm_widget *VAR_5 = FUNC_1(VAR_3);
 struct snd_soc_codec *VAR_6 = VAR_5->codec;
 struct wm8903_priv *VAR_7 = VAR_6->private_data;
 struct i2c_client *VAR_8 = VAR_6->control_data;
 u16 VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_6, VAR_0);


 if (VAR_4->value.integer.value[0]) {
  if (VAR_7->class_w_users == 0) {
   FUNC_0(&VAR_8->dev, "Disabling Class W\n");
   FUNC_4(VAR_6, VAR_0, VAR_9 &
         ~(VAR_1 | VAR_2));
  }
  VAR_7->class_w_users++;
 }


 VAR_10 = FUNC_2(VAR_3, VAR_4);


 if (!VAR_4->value.integer.value[0]) {
  if (VAR_7->class_w_users == 1) {
   FUNC_0(&VAR_8->dev, "Enabling Class W\n");
   FUNC_4(VAR_6, VAR_0, VAR_9 |
         VAR_1 | VAR_2);
  }
  VAR_7->class_w_users--;
 }

 FUNC_0(&VAR_8->dev, "Bypass use count now %d\n",
  VAR_7->class_w_users);

 return VAR_10;
}
