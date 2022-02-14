
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_msnd {int* left_levels; int* right_levels; int mixer_lock; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_msnd* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_msnd*,int,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_msnd *VAR_2 = FUNC_0(VAR_0);
 int VAR_3, VAR_4 = VAR_0->private_value;
 int VAR_5, VAR_6;
 unsigned long VAR_7;

 VAR_5 = VAR_1->value.integer.value[0] % 101;
 VAR_6 = VAR_1->value.integer.value[1] % 101;
 FUNC_2(&VAR_2->mixer_lock, VAR_7);
 VAR_3 = VAR_2->left_levels[VAR_4] != VAR_5
  || VAR_2->right_levels[VAR_4] != VAR_6;
 FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6);
 FUNC_3(&VAR_2->mixer_lock, VAR_7);
 return VAR_3;
}
