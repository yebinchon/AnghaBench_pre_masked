
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_soc_codec*) ;
 scalar_t__ VAR_0 ;
 struct snd_soc_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_codec *VAR_3 = FUNC_1(VAR_1);

 if (VAR_0 == VAR_2->value.integer.value[0])
  return 0;

 VAR_0 = VAR_2->value.integer.value[0];
 FUNC_0(VAR_3);
 return 1;
}
