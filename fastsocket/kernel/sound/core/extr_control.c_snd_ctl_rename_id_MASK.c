
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctl_elem_id {scalar_t__ numid; } ;
struct snd_kcontrol {scalar_t__ count; struct snd_ctl_elem_id id; } ;
struct snd_card {int controls_rwsem; scalar_t__ last_numid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct snd_kcontrol* FUNC_1 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct snd_card *VAR_1, struct snd_ctl_elem_id *VAR_2,
        struct snd_ctl_elem_id *VAR_3)
{
 struct snd_kcontrol *VAR_4;

 FUNC_0(&VAR_1->controls_rwsem);
 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(&VAR_1->controls_rwsem);
  return -VAR_0;
 }
 VAR_4->id = *VAR_3;
 VAR_4->id.numid = VAR_1->last_numid + 1;
 VAR_1->last_numid += VAR_4->count;
 FUNC_2(&VAR_1->controls_rwsem);
 return 0;
}
