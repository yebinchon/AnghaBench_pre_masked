
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {unsigned int (* get_rate ) (struct snd_ice1712*) ;int reg_lock; TYPE_1__* hw_rates; scalar_t__ (* is_spdif_master ) (struct snd_ice1712*) ;} ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_4__ {unsigned int count; unsigned int* list; } ;


 struct snd_ice1712* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct snd_ice1712*) ;
 unsigned int FUNC_4 (struct snd_ice1712*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3, VAR_4;

 FUNC_1(&VAR_2->reg_lock);
 if (VAR_2->is_spdif_master(VAR_2)) {
  VAR_1->value.enumerated.item[0] = VAR_2->hw_rates->count;
 } else {
  VAR_4 = VAR_2->get_rate(VAR_2);
  VAR_1->value.enumerated.item[0] = 0;
  for (VAR_3 = 0; VAR_3 < VAR_2->hw_rates->count; VAR_3++) {
   if (VAR_2->hw_rates->list[VAR_3] == VAR_4) {
    VAR_1->value.enumerated.item[0] = VAR_3;
    break;
   }
  }
 }
 FUNC_2(&VAR_2->reg_lock);
 return 0;
}
