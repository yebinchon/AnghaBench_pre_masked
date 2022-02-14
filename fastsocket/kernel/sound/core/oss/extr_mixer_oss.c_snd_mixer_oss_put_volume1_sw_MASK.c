
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_mixer_oss_slot {int dummy; } ;
struct snd_mixer_oss_file {struct snd_card* card; } ;
struct snd_kcontrol {int (* put ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;int id; scalar_t__ (* info ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;} ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {int count; TYPE_2__ value; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; } ;
struct snd_card {int controls_rwsem; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ctl_elem_value*) ;
 struct snd_ctl_elem_value* FUNC_2 (int,int ) ;
 struct snd_kcontrol* FUNC_3 (struct snd_card*,unsigned int) ;
 int FUNC_4 (struct snd_card*,int ,int *) ;
 scalar_t__ FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_6 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct snd_mixer_oss_file *VAR_3,
      struct snd_mixer_oss_slot *VAR_4,
      unsigned int VAR_5,
      int VAR_6, int VAR_7,
      int VAR_8)
{
 struct snd_ctl_elem_info *VAR_9;
 struct snd_ctl_elem_value *VAR_10;
 struct snd_kcontrol *VAR_11;
 struct snd_card *VAR_12 = VAR_3->card;
 int VAR_13;

 if (VAR_5 == VAR_1)
  return;
 FUNC_0(&VAR_12->controls_rwsem);
 if ((VAR_11 = FUNC_3(VAR_12, VAR_5)) == ((void*)0)) {
  FUNC_7(&VAR_12->controls_rwsem);
  return;
 }
 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0);
 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_0);
 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
  goto __unalloc;
 if (VAR_11->info(VAR_11, VAR_9))
  goto __unalloc;
 if (VAR_9->count > 1) {
  VAR_10->value.integer.value[0] = VAR_6 > 0 ? 1 : 0;
  VAR_10->value.integer.value[VAR_8 ? 3 : 1] = VAR_7 > 0 ? 1 : 0;
  if (VAR_8) {
   VAR_10->value.integer.value[1] =
   VAR_10->value.integer.value[2] = 0;
  }
 } else {
  VAR_10->value.integer.value[0] = (VAR_6 > 0 || VAR_7 > 0) ? 1 : 0;
 }
 if ((VAR_13 = VAR_11->put(VAR_11, VAR_10)) < 0)
  goto __unalloc;
 if (VAR_13 > 0)
  FUNC_4(VAR_12, VAR_2, &VAR_11->id);
      __unalloc:
 FUNC_7(&VAR_12->controls_rwsem);
       FUNC_1(VAR_10);
 FUNC_1(VAR_9);
}
