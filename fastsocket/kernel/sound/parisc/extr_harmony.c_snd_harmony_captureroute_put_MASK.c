
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int gain; } ;
struct snd_harmony {TYPE_3__ st; int mixer_lock; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_harmony*) ;
 struct snd_harmony* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct snd_harmony *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;
 int VAR_6 = VAR_4->st.gain;

 FUNC_2(&VAR_4->mixer_lock);

 VAR_5 = VAR_3->value.enumerated.item[0] & 1;
 VAR_4->st.gain &= ~VAR_0;
  VAR_4->st.gain |= VAR_5 << VAR_1;

 FUNC_0(VAR_4);

 FUNC_3(&VAR_4->mixer_lock);

 return VAR_4->st.gain != VAR_6;
}
