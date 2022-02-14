
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_korg1212 {scalar_t__ leftADCInSens; scalar_t__ rightADCInSens; int lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct snd_korg1212* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_korg1212*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct snd_korg1212 *VAR_4 = FUNC_0(VAR_2);
        int VAR_5 = 0;

 FUNC_2(&VAR_4->lock);

 if (VAR_3->value.integer.value[0] >= VAR_1 &&
     VAR_3->value.integer.value[0] <= VAR_0 &&
     VAR_3->value.integer.value[0] != VAR_4->leftADCInSens) {
                VAR_4->leftADCInSens = VAR_3->value.integer.value[0];
                VAR_5 = 1;
        }
 if (VAR_3->value.integer.value[1] >= VAR_1 &&
     VAR_3->value.integer.value[1] <= VAR_0 &&
     VAR_3->value.integer.value[1] != VAR_4->rightADCInSens) {
                VAR_4->rightADCInSens = VAR_3->value.integer.value[1];
                VAR_5 = 1;
        }

 FUNC_3(&VAR_4->lock);

        if (VAR_5)
                FUNC_1(VAR_4);

        return VAR_5;
}
