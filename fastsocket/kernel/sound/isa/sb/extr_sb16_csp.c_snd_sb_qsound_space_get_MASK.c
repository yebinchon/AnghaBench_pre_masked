
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sb_csp {int q_lock; int qpos_right; int qpos_left; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_sb_csp* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_sb_csp *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->q_lock, VAR_3);
 VAR_1->value.integer.value[0] = VAR_2->qpos_left;
 VAR_1->value.integer.value[1] = VAR_2->qpos_right;
 FUNC_2(&VAR_2->q_lock, VAR_3);
 return 0;
}
