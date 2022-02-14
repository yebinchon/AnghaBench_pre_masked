
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int (* info ) (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;} ;
struct snd_ctl_elem_id {int dummy; } ;
struct snd_ctl_elem_info {int type; int count; struct snd_ctl_elem_id id; } ;
struct snd_card {int controls_rwsem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ctl_elem_info*) ;
 struct snd_ctl_elem_info* FUNC_2 (int,int ) ;
 struct snd_kcontrol* FUNC_3 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_card *VAR_3, struct snd_ctl_elem_id *VAR_4,
   int *VAR_5)
{
 struct snd_kcontrol *VAR_6;
 struct snd_ctl_elem_info *VAR_7;
 int VAR_8;

 FUNC_0(&VAR_3->controls_rwsem);
 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (! VAR_6) {
  FUNC_5(&VAR_3->controls_rwsem);
  return -VAR_1;
 }
 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_5(&VAR_3->controls_rwsem);
  return -VAR_0;
 }
 VAR_7->id = *VAR_4;
 VAR_8 = VAR_6->info(VAR_6, VAR_7);
 FUNC_5(&VAR_3->controls_rwsem);
 if (VAR_8 >= 0) {
  VAR_8 = VAR_7->type;
  *VAR_5 = VAR_7->count;
 }
 FUNC_1(VAR_7);
 return VAR_8;
}
