
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {int dummy; } ;
struct hda_channel_mode {int channels; } ;



int FUNC_0(struct hda_codec *VAR_0,
   struct snd_ctl_elem_value *VAR_1,
   const struct hda_channel_mode *VAR_2,
   int VAR_3,
   int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_4 == VAR_2[VAR_5].channels) {
   VAR_1->value.enumerated.item[0] = VAR_5;
   break;
  }
 }
 return 0;
}
