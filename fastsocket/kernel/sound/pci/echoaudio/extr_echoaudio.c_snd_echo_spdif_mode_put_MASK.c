
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct echoaudio {int professional_spdif; int lock; } ;


 int FUNC_0 (struct echoaudio*,int) ;
 struct echoaudio* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct echoaudio *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = !!VAR_1->value.enumerated.item[0];
 if (VAR_3 != VAR_2->professional_spdif) {
  FUNC_2(&VAR_2->lock);
  FUNC_0(VAR_2, VAR_3);
  FUNC_3(&VAR_2->lock);
  return 1;
 }
 return 0;
}
