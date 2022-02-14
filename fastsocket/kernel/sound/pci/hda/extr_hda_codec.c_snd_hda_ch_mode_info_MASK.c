
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct hda_codec {int dummy; } ;
struct hda_channel_mode {int channels; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

int FUNC_1(struct hda_codec *VAR_1,
    struct snd_ctl_elem_info *VAR_2,
    const struct hda_channel_mode *VAR_3,
    int VAR_4)
{
 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items = VAR_4;
 if (VAR_2->value.enumerated.item >= VAR_4)
  VAR_2->value.enumerated.item = VAR_4 - 1;
 FUNC_0(VAR_2->value.enumerated.name, "%dch",
  VAR_3[VAR_2->value.enumerated.item].channels);
 return 0;
}
