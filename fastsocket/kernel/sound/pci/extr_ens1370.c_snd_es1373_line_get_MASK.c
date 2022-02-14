
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ensoniq {int ctrl; int reg_lock; } ;


 int VAR_0 ;
 struct ensoniq* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct ensoniq *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0;

 FUNC_1(&VAR_3->reg_lock);
 if ((VAR_3->ctrl & VAR_0) >= 4)
      VAR_4 = 1;
 VAR_2->value.integer.value[0] = VAR_4;
 FUNC_2(&VAR_3->reg_lock);
 return 0;
}
