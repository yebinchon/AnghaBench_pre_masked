
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 unsigned int VAR_3 = VAR_0;

 VAR_2->value.iec958.status[0] = (VAR_3 >> 0) & 0xff;
 VAR_2->value.iec958.status[1] = (VAR_3 >> 8) & 0xff;
 VAR_2->value.iec958.status[2] = (VAR_3 >> 16) & 0xff;
 VAR_2->value.iec958.status[3] = (VAR_3 >> 24) & 0xff;

 return 0;
}
