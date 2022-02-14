
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_korg1212 {scalar_t__* volumePhase; int lock; TYPE_3__* sharedBufferPtr; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int* volumeData; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_korg1212* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct snd_korg1212 *VAR_4 = FUNC_1(VAR_2);
        int VAR_5 = 0;
        int VAR_6;
 int VAR_7;

 FUNC_2(&VAR_4->lock);

 VAR_6 = VAR_2->private_value;

 if (VAR_3->value.integer.value[0] >= VAR_1 &&
     VAR_3->value.integer.value[0] >= VAR_0 &&
     VAR_3->value.integer.value[0] !=
     FUNC_0(VAR_4->sharedBufferPtr->volumeData[VAR_6])) {
  VAR_7 = VAR_4->volumePhase[VAR_6] > 0 ? -1 : 1;
  VAR_7 *= VAR_3->value.integer.value[0];
  VAR_4->sharedBufferPtr->volumeData[VAR_6] = VAR_7;
  VAR_5 = 1;
 }

 if (VAR_6 >= 8) {
  if (VAR_3->value.integer.value[1] >= VAR_1 &&
      VAR_3->value.integer.value[1] >= VAR_0 &&
      VAR_3->value.integer.value[1] !=
      FUNC_0(VAR_4->sharedBufferPtr->volumeData[VAR_6+1])) {
   VAR_7 = VAR_4->volumePhase[VAR_6+1] > 0 ? -1 : 1;
   VAR_7 *= VAR_3->value.integer.value[1];
   VAR_4->sharedBufferPtr->volumeData[VAR_6+1] = VAR_7;
   VAR_5 = 1;
  }
 }

 FUNC_3(&VAR_4->lock);

        return VAR_5;
}
