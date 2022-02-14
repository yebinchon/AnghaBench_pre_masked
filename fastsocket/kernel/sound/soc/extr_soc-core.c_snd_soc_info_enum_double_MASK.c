
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {scalar_t__ shift_l; scalar_t__ shift_r; int max; int * texts; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_info *VAR_2)
{
 struct soc_enum *VAR_3 = (struct soc_enum *)VAR_1->private_value;

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_3->shift_l == VAR_3->shift_r ? 1 : 2;
 VAR_2->value.enumerated.items = VAR_3->max;

 if (VAR_2->value.enumerated.item > VAR_3->max - 1)
  VAR_2->value.enumerated.item = VAR_3->max - 1;
 FUNC_0(VAR_2->value.enumerated.name,
  VAR_3->texts[VAR_2->value.enumerated.item]);
 return 0;
}
