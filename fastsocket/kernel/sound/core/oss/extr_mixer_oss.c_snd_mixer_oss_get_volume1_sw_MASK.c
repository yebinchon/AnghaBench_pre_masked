
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_mixer_oss_slot {int dummy; } ;
struct snd_mixer_oss_file {struct snd_card* card; } ;
struct snd_kcontrol {scalar_t__ (* get ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;scalar_t__ (* info ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;} ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {int count; TYPE_2__ value; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; } ;
struct snd_card {int controls_rwsem; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ctl_elem_value*) ;
 struct snd_ctl_elem_value* FUNC_2 (int,int ) ;
 struct snd_kcontrol* FUNC_3 (struct snd_card*,unsigned int) ;
 scalar_t__ FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 scalar_t__ FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct snd_mixer_oss_file *VAR_2,
      struct snd_mixer_oss_slot *VAR_3,
      unsigned int VAR_4,
      int *VAR_5, int *VAR_6,
      int VAR_7)
{
 struct snd_ctl_elem_info *VAR_8;
 struct snd_ctl_elem_value *VAR_9;
 struct snd_kcontrol *VAR_10;
 struct snd_card *VAR_11 = VAR_2->card;

 if (VAR_4 == VAR_1)
  return;
 FUNC_0(&VAR_11->controls_rwsem);
 if ((VAR_10 = FUNC_3(VAR_11, VAR_4)) == ((void*)0)) {
  FUNC_6(&VAR_11->controls_rwsem);
  return;
 }
 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_0);
 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0);
 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
  goto __unalloc;
 if (VAR_10->info(VAR_10, VAR_8))
  goto __unalloc;
 if (VAR_10->get(VAR_10, VAR_9))
  goto __unalloc;
 if (!VAR_9->value.integer.value[0]) {
  *VAR_5 = 0;
  if (VAR_8->count == 1)
   *VAR_6 = 0;
 }
 if (VAR_8->count > 1 && !VAR_9->value.integer.value[VAR_7 ? 3 : 1])
  *VAR_6 = 0;
      __unalloc:
 FUNC_6(&VAR_11->controls_rwsem);
       FUNC_1(VAR_9);
 FUNC_1(VAR_8);
}
