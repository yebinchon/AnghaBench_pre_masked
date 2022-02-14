
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {scalar_t__ model; struct pmac_tumbler* mixer_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pmac_tumbler {unsigned int drc_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct pmac_tumbler*) ;
 struct snd_pmac* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct pmac_tumbler*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_5,
     struct snd_ctl_elem_value *VAR_6)
{
 struct snd_pmac *VAR_7 = FUNC_1(VAR_5);
 struct pmac_tumbler *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 if (! (VAR_8 = VAR_7->mixer_data))
  return -VAR_1;
 VAR_9 = VAR_6->value.integer.value[0];
 if (VAR_7->model == VAR_2) {
  if (VAR_9 > VAR_3)
   return -VAR_0;
 } else {
  if (VAR_9 > VAR_4)
   return -VAR_0;
 }
 VAR_10 = VAR_8->drc_range != VAR_9;
 if (VAR_10) {
  VAR_8->drc_range = VAR_9;
  if (VAR_7->model == VAR_2)
   FUNC_2(VAR_8);
  else
   FUNC_0(VAR_8);
 }
 return VAR_10;
}
