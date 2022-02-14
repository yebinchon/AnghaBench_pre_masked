
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {long private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct hda_codec {int control_mutex; } ;
struct hda_bind_ctls {long* values; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

int FUNC_4(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_2(VAR_0);
 struct hda_bind_ctls *VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2->control_mutex);
 VAR_3 = (struct hda_bind_ctls *)VAR_0->private_value;
 VAR_0->private_value = *VAR_3->values;
 VAR_4 = VAR_3->ops->get(VAR_0, VAR_1);
 VAR_0->private_value = (long)VAR_3;
 FUNC_1(&VAR_2->control_mutex);
 return VAR_4;
}
