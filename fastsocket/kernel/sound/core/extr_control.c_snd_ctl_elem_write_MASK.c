
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_volatile {int access; struct snd_ctl_file* owner; } ;
struct snd_kcontrol {int (* put ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;struct snd_kcontrol_volatile* vd; } ;
struct snd_ctl_file {int dummy; } ;
struct snd_ctl_elem_value {int id; } ;
struct snd_card {int controls_rwsem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct snd_kcontrol*,unsigned int) ;
 struct snd_kcontrol* FUNC_2 (struct snd_card*,int *) ;
 unsigned int FUNC_3 (struct snd_kcontrol*,int *) ;
 int FUNC_4 (struct snd_card*,int ,int *) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_card *VAR_4, struct snd_ctl_file *VAR_5,
         struct snd_ctl_elem_value *VAR_6)
{
 struct snd_kcontrol *VAR_7;
 struct snd_kcontrol_volatile *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 FUNC_0(&VAR_4->controls_rwsem);
 VAR_7 = FUNC_2(VAR_4, &VAR_6->id);
 if (VAR_7 == ((void*)0)) {
  VAR_10 = -VAR_0;
 } else {
  VAR_9 = FUNC_3(VAR_7, &VAR_6->id);
  VAR_8 = &VAR_7->vd[VAR_9];
  if (!(VAR_8->access & VAR_2) ||
      VAR_7->put == ((void*)0) ||
      (VAR_5 && VAR_8->owner && VAR_8->owner != VAR_5)) {
   VAR_10 = -VAR_1;
  } else {
   FUNC_1(&VAR_6->id, VAR_7, VAR_9);
   VAR_10 = VAR_7->put(VAR_7, VAR_6);
  }
  if (VAR_10 > 0) {
   FUNC_6(&VAR_4->controls_rwsem);
   FUNC_4(VAR_4, VAR_3,
           &VAR_6->id);
   return 0;
  }
 }
 FUNC_6(&VAR_4->controls_rwsem);
 return VAR_10;
}
