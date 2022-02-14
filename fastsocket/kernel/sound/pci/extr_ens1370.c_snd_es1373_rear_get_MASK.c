
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct ensoniq {int cssr; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ensoniq* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_value *VAR_4)
{
 struct ensoniq *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = 0;

 FUNC_1(&VAR_5->reg_lock);
 if ((VAR_5->cssr & (VAR_2|VAR_1|
         VAR_0)) == VAR_1)
      VAR_6 = 1;
 VAR_4->value.integer.value[0] = VAR_6;
 FUNC_2(&VAR_5->reg_lock);
 return 0;
}
