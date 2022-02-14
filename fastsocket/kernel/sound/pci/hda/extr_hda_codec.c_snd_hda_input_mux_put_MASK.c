
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct hda_input_mux {unsigned int num_items; TYPE_1__* items; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;

int FUNC_1(struct hda_codec *VAR_1,
     const struct hda_input_mux *VAR_2,
     struct snd_ctl_elem_value *VAR_3,
     hda_nid_t VAR_4,
     unsigned int *VAR_5)
{
 unsigned int VAR_6;

 if (!VAR_2->num_items)
  return 0;
 VAR_6 = VAR_3->value.enumerated.item[0];
 if (VAR_6 >= VAR_2->num_items)
  VAR_6 = VAR_2->num_items - 1;
 if (*VAR_5 == VAR_6)
  return 0;
 FUNC_0(VAR_1, VAR_4, 0, VAR_0,
      VAR_2->items[VAR_6].index);
 *VAR_5 = VAR_6;
 return 1;
}
