
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {int dummy; } ;
struct hda_channel_mode {int channels; scalar_t__ sequence; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,scalar_t__) ;

int FUNC_1(struct hda_codec *VAR_1,
   struct snd_ctl_elem_value *VAR_2,
   const struct hda_channel_mode *VAR_3,
   int VAR_4,
   int *VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = VAR_2->value.enumerated.item[0];
 if (VAR_6 >= VAR_4)
  return -VAR_0;
 if (*VAR_5 == VAR_3[VAR_6].channels)
  return 0;

 *VAR_5 = VAR_3[VAR_6].channels;
 if (VAR_3[VAR_6].sequence)
  FUNC_0(VAR_1, VAR_3[VAR_6].sequence);
 return 1;
}
