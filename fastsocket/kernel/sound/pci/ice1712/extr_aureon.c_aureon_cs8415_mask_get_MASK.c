
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 FUNC_0(VAR_1->value.iec958.status, 0xFF, 24);
 return 0;
}
