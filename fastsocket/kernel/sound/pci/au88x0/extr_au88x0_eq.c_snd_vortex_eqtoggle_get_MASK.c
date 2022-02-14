
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ this54; } ;
struct TYPE_8__ {TYPE_4__ eq; } ;
typedef TYPE_3__ vortex_t ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int* value; } ;
struct TYPE_7__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
typedef TYPE_4__ eqlzr_t ;


 TYPE_3__* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int
FUNC_1(struct snd_kcontrol *VAR_0,
   struct snd_ctl_elem_value *VAR_1)
{
 vortex_t *VAR_2 = FUNC_0(VAR_0);
 eqlzr_t *VAR_3 = &(VAR_2->eq);


 VAR_1->value.integer.value[0] = VAR_3->this54 ? 0 : 1;

 return 0;
}
