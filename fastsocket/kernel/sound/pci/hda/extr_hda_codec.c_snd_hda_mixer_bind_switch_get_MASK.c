
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {unsigned long private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct hda_codec {int control_mutex; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;

int FUNC_4(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0(&VAR_3->control_mutex);
 VAR_4 = VAR_1->private_value;
 VAR_1->private_value = VAR_4 & ~VAR_0;
 VAR_5 = FUNC_2(VAR_1, VAR_2);
 VAR_1->private_value = VAR_4;
 FUNC_1(&VAR_3->control_mutex);
 return VAR_5;
}
