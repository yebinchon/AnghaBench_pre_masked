
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {struct cs4270_private* private_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cs4270_private {int manual_mute; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_codec* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_codec *VAR_4 = FUNC_0(VAR_2);
 struct cs4270_private *VAR_5 = VAR_4->private_data;
 int VAR_6 = !VAR_3->value.integer.value[0];
 int VAR_7 = !VAR_3->value.integer.value[1];

 VAR_5->manual_mute = (VAR_6 ? VAR_0 : 0) |
         (VAR_7 ? VAR_1 : 0);

 return FUNC_1(VAR_2, VAR_3);
}
