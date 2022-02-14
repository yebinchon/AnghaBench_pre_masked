
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_6__ {int * value; } ;
struct TYPE_5__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_4__ {unsigned int dac_channels_mixer; } ;
struct oxygen {int mutex; int * dac_volume; TYPE_1__ model; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct oxygen *VAR_2 = VAR_0->private_data;
 unsigned int VAR_3;

 FUNC_0(&VAR_2->mutex);
 for (VAR_3 = 0; VAR_3 < VAR_2->model.dac_channels_mixer; ++VAR_3)
  VAR_1->value.integer.value[VAR_3] = VAR_2->dac_volume[VAR_3];
 FUNC_1(&VAR_2->mutex);
 return 0;
}
