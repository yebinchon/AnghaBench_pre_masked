
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int pcm_volume_level_right1; int pcm_volume_level_left1; } ;
struct snd_gus_card {int pcm_volume_level_lock; TYPE_3__ gf1; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_gus_card* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_gus_card *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->pcm_volume_level_lock, VAR_3);
 VAR_1->value.integer.value[0] = VAR_2->gf1.pcm_volume_level_left1;
 VAR_1->value.integer.value[1] = VAR_2->gf1.pcm_volume_level_right1;
 FUNC_2(&VAR_2->pcm_volume_level_lock, VAR_3);
 return 0;
}
