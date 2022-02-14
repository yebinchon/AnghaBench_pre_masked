
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_volatile {int owner_pid; struct snd_ctl_file* owner; int access; } ;
struct snd_kcontrol {int (* info ) (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;struct snd_kcontrol_volatile* vd; } ;
struct snd_ctl_file {struct snd_card* card; } ;
struct snd_ctl_elem_info {int owner; int access; int id; } ;
struct snd_card {int controls_rwsem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct snd_kcontrol*,unsigned int) ;
 struct snd_kcontrol* FUNC_3 (struct snd_card*,int *) ;
 unsigned int FUNC_4 (struct snd_kcontrol*,int *) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_ctl_file *VAR_3,
        struct snd_ctl_elem_info *VAR_4)
{
 struct snd_card *VAR_5 = VAR_3->card;
 struct snd_kcontrol *VAR_6;
 struct snd_kcontrol_volatile *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 FUNC_0(&VAR_5->controls_rwsem);
 VAR_6 = FUNC_3(VAR_5, &VAR_4->id);
 if (VAR_6 == ((void*)0)) {
  FUNC_6(&VAR_5->controls_rwsem);
  return -VAR_0;
 }



 VAR_9 = VAR_6->info(VAR_6, VAR_4);
 if (VAR_9 >= 0) {
  FUNC_1(VAR_4->access);
  VAR_8 = FUNC_4(VAR_6, &VAR_4->id);
  VAR_7 = &VAR_6->vd[VAR_8];
  FUNC_2(&VAR_4->id, VAR_6, VAR_8);
  VAR_4->access = VAR_7->access;
  if (VAR_7->owner) {
   VAR_4->access |= VAR_1;
   if (VAR_7->owner == VAR_3)
    VAR_4->access |= VAR_2;
   VAR_4->owner = VAR_7->owner_pid;
  } else {
   VAR_4->owner = -1;
  }
 }
 FUNC_6(&VAR_5->controls_rwsem);
 return VAR_9;
}
