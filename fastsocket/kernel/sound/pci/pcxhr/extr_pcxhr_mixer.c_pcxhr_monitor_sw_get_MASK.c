
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {TYPE_1__* mgr; int * monitoring_active; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int * value; } ;
struct TYPE_5__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_4__ {int mixer_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_pcxhr* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pcxhr *VAR_2 = FUNC_2(VAR_0);
 FUNC_0(&VAR_2->mgr->mixer_mutex);
 VAR_1->value.integer.value[0] = VAR_2->monitoring_active[0];
 VAR_1->value.integer.value[1] = VAR_2->monitoring_active[1];
 FUNC_1(&VAR_2->mgr->mixer_mutex);
 return 0;
}
