
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int items; unsigned int item; int name; } ;
struct TYPE_4__ {TYPE_3__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int type; } ;
struct hda_input_mux {unsigned int num_items; TYPE_2__* items; } ;
struct TYPE_5__ {int label; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(const struct hda_input_mux *VAR_1,
      struct snd_ctl_elem_info *VAR_2)
{
 unsigned int VAR_3;

 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items = VAR_1->num_items;
 if (!VAR_1->num_items)
  return 0;
 VAR_3 = VAR_2->value.enumerated.item;
 if (VAR_3 >= VAR_1->num_items)
  VAR_3 = VAR_1->num_items - 1;
 FUNC_0(VAR_2->value.enumerated.name, VAR_1->items[VAR_3].label);
 return 0;
}
