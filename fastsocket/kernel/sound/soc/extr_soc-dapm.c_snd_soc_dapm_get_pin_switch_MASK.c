
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {int mutex; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_soc_codec* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_soc_codec*,char const*) ;

int FUNC_4(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_codec *VAR_2 = FUNC_2(VAR_0);
 const char *VAR_3 = (const char *)VAR_0->private_value;

 FUNC_0(&VAR_2->mutex);

 VAR_1->value.integer.value[0] =
  FUNC_3(VAR_2, VAR_3);

 FUNC_1(&VAR_2->mutex);

 return 0;
}
