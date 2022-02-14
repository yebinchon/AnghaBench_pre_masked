
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_7__ {int* pcmreg; } ;
struct TYPE_8__ {TYPE_3__ ad18xx; } ;
struct snd_ac97 {int page_mutex; TYPE_4__ spec; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ac97* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ac97 *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = VAR_0->private_value & 3;

 FUNC_0(&VAR_2->page_mutex);
 VAR_1->value.integer.value[0] = 31 - ((VAR_2->spec.ad18xx.pcmreg[VAR_3] >> 0) & 31);
 VAR_1->value.integer.value[1] = 31 - ((VAR_2->spec.ad18xx.pcmreg[VAR_3] >> 8) & 31);
 FUNC_1(&VAR_2->page_mutex);
 return 0;
}
