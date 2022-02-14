
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {unsigned int private_value; struct snd_soc_codec* private_data; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_soc_codec*,char*) ;
 int FUNC_1 (struct snd_soc_codec*,char*) ;
 int FUNC_2 (struct snd_soc_codec*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_codec *VAR_2 = VAR_0->private_data;
 unsigned int VAR_3 = (VAR_1->value.enumerated.item[0] != 0);
 char *VAR_4 = "Audio Out Differential";
 char *VAR_5 = "Audio Out Stereo";

 if (VAR_0->private_value == VAR_3)
  return 0;
 VAR_0->private_value = VAR_3;
 FUNC_0(VAR_2, VAR_3 ? VAR_4 : VAR_5);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2, VAR_3 ? VAR_5 : VAR_4);
 FUNC_2(VAR_2);

 return 1;
}
