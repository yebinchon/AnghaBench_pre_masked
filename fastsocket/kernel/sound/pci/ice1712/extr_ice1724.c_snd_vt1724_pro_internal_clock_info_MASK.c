
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {TYPE_1__* hw_rates; } ;
struct TYPE_5__ {size_t items; size_t item; int name; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; } ;
struct TYPE_4__ {size_t count; int* list; } ;


 int VAR_0 ;
 struct snd_ice1712* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
           struct snd_ctl_elem_info *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_0(VAR_1);

 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items = VAR_3->hw_rates->count + 1;
 if (VAR_2->value.enumerated.item >= VAR_2->value.enumerated.items)
  VAR_2->value.enumerated.item = VAR_2->value.enumerated.items - 1;
 if (VAR_2->value.enumerated.item == VAR_2->value.enumerated.items - 1)
  FUNC_2(VAR_2->value.enumerated.name, "IEC958 Input");
 else
  FUNC_1(VAR_2->value.enumerated.name, "%d",
   VAR_3->hw_rates->list[VAR_2->value.enumerated.item]);
 return 0;
}
