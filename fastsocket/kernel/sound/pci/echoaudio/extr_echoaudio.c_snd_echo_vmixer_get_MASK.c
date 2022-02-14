
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {size_t index; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ id; TYPE_2__ value; } ;
struct echoaudio {int ** vmixer_gain; } ;


 size_t FUNC_0 (struct echoaudio*) ;
 struct echoaudio* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct echoaudio *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 VAR_1->value.integer.value[0] =
  VAR_2->vmixer_gain[VAR_1->id.index / FUNC_0(VAR_2)]
   [VAR_1->id.index % FUNC_0(VAR_2)];
 return 0;
}
