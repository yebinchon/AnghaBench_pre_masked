
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_5,
     struct snd_ctl_elem_value *VAR_6)
{
 VAR_6->value.iec958.status[0] = VAR_2 |
  VAR_1 | VAR_0;
 VAR_6->value.iec958.status[1] =
  VAR_3 | VAR_4;
 return 0;
}
