
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_mixer_oss_slot {int dummy; } ;
struct snd_mixer_oss_file {struct snd_card* card; } ;
struct snd_kcontrol {int (* put ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;int id; scalar_t__ (* info ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;} ;
struct TYPE_3__ {scalar_t__ min; int max; void** value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {scalar_t__ type; int count; TYPE_2__ value; } ;
struct snd_ctl_elem_info {scalar_t__ type; int count; TYPE_2__ value; } ;
struct snd_card {int controls_rwsem; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ctl_elem_value*) ;
 struct snd_ctl_elem_value* FUNC_2 (int,int ) ;
 struct snd_kcontrol* FUNC_3 (struct snd_card*,unsigned int) ;
 int FUNC_4 (struct snd_card*,int ,int *) ;
 void* FUNC_5 (int,scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_7 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct snd_mixer_oss_file *VAR_4,
       struct snd_mixer_oss_slot *VAR_5,
       unsigned int VAR_6,
       int VAR_7, int VAR_8)
{
 struct snd_ctl_elem_info *VAR_9;
 struct snd_ctl_elem_value *VAR_10;
 struct snd_kcontrol *VAR_11;
 struct snd_card *VAR_12 = VAR_4->card;
 int VAR_13;

 if (VAR_6 == VAR_1)
  return;
 FUNC_0(&VAR_12->controls_rwsem);
 if ((VAR_11 = FUNC_3(VAR_12, VAR_6)) == ((void*)0)) {
  FUNC_8(&VAR_12->controls_rwsem);
  return;
 }
 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0);
 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_0);
 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
  goto __unalloc;
 if (VAR_11->info(VAR_11, VAR_9))
  goto __unalloc;
 if (VAR_9->type == VAR_2 &&
     VAR_9->value.integer.min == 0 && VAR_9->value.integer.max == 1)
  goto __unalloc;
 VAR_10->value.integer.value[0] = FUNC_5(VAR_7, VAR_9->value.integer.min, VAR_9->value.integer.max);
 if (VAR_9->count > 1)
  VAR_10->value.integer.value[1] = FUNC_5(VAR_8, VAR_9->value.integer.min, VAR_9->value.integer.max);
 if ((VAR_13 = VAR_11->put(VAR_11, VAR_10)) < 0)
  goto __unalloc;
 if (VAR_13 > 0)
  FUNC_4(VAR_12, VAR_3, &VAR_11->id);
      __unalloc:
 FUNC_8(&VAR_12->controls_rwsem);
       FUNC_1(VAR_10);
 FUNC_1(VAR_9);
}
