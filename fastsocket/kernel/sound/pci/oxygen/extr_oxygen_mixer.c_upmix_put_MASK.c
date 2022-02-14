
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {unsigned int dac_routing; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*) ;
 unsigned int FUNC_3 (struct oxygen*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct oxygen *VAR_3 = VAR_1->private_data;
 unsigned int VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 if (VAR_2->value.enumerated.item[0] >= VAR_4)
  return -VAR_0;
 FUNC_0(&VAR_3->mutex);
 VAR_5 = VAR_2->value.enumerated.item[0] != VAR_3->dac_routing;
 if (VAR_5) {
  VAR_3->dac_routing = VAR_2->value.enumerated.item[0];
  FUNC_2(VAR_3);
 }
 FUNC_1(&VAR_3->mutex);
 return VAR_5;
}
