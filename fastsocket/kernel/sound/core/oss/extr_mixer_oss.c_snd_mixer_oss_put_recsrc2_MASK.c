
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_mixer_oss_slot {scalar_t__ private_data; } ;
struct snd_mixer_oss_file {struct snd_card* card; struct snd_mixer_oss* mixer; } ;
struct snd_mixer_oss {int mask_recsrc; struct snd_mixer_oss_slot* slots; } ;
struct snd_kcontrol {int (* info ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;int (* put ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;int id; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {unsigned int count; TYPE_2__ value; } ;
struct snd_ctl_elem_info {unsigned int count; TYPE_2__ value; } ;
struct snd_card {int controls_rwsem; } ;
struct slot {scalar_t__ signature; int present; int capture_item; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ctl_elem_value*) ;
 struct snd_ctl_elem_value* FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_card*,int ,int *) ;
 struct snd_kcontrol* FUNC_4 (struct snd_mixer_oss*,char*,int ) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_6 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_mixer_oss_file *VAR_6, unsigned int VAR_7)
{
 struct snd_card *VAR_8 = VAR_6->card;
 struct snd_mixer_oss *VAR_9 = VAR_6->mixer;
 struct snd_kcontrol *VAR_10;
 struct snd_mixer_oss_slot *VAR_11;
 struct slot *VAR_12 = ((void*)0);
 struct snd_ctl_elem_info *VAR_13;
 struct snd_ctl_elem_value *VAR_14;
 int VAR_15;
 unsigned int VAR_16;

 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_2);
 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_2);
 if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0)) {
  VAR_15 = -VAR_1;
  goto __free_only;
 }
 FUNC_0(&VAR_8->controls_rwsem);
 VAR_10 = FUNC_4(VAR_9, "Capture Source", 0);
 if (! VAR_10) {
  VAR_15 = -VAR_0;
  goto __unlock;
 }
 if ((VAR_15 = VAR_10->info(VAR_10, VAR_13)) < 0)
  goto __unlock;
 for (VAR_16 = 0; VAR_16 < 32; VAR_16++) {
  if (!(VAR_9->mask_recsrc & (1 << VAR_16)))
   continue;
  VAR_11 = &VAR_9->slots[VAR_16];
  VAR_12 = (struct slot *)VAR_11->private_data;
  if (VAR_12->signature != VAR_5)
   continue;
  if (!(VAR_12->present & VAR_4))
   continue;
  if (VAR_16 == VAR_7)
   break;
  VAR_12 = ((void*)0);
 }
 if (! VAR_12)
  goto __unlock;
 for (VAR_16 = 0; VAR_16 < VAR_13->count; VAR_16++)
  VAR_14->value.enumerated.item[VAR_16] = VAR_12->capture_item;
 VAR_15 = VAR_10->put(VAR_10, VAR_14);
 if (VAR_15 > 0)
  FUNC_3(VAR_6->card, VAR_3, &VAR_10->id);
 VAR_15 = 0;
      __unlock:
 FUNC_7(&VAR_8->controls_rwsem);
      __free_only:
 FUNC_1(VAR_14);
 FUNC_1(VAR_13);
 return VAR_15;
}
