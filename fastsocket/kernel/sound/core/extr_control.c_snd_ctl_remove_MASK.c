
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctl_elem_id {int numid; int index; } ;
struct snd_kcontrol {unsigned int count; struct snd_ctl_elem_id id; int list; } ;
struct snd_card {unsigned int controls_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_card*,int ,struct snd_ctl_elem_id*) ;

int FUNC_4(struct snd_card *VAR_2, struct snd_kcontrol *VAR_3)
{
 struct snd_ctl_elem_id VAR_4;
 unsigned int VAR_5;

 if (FUNC_1(!VAR_2 || !VAR_3))
  return -VAR_0;
 FUNC_0(&VAR_3->list);
 VAR_2->controls_count -= VAR_3->count;
 VAR_4 = VAR_3->id;
 for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++, VAR_4.index++, VAR_4.numid++)
  FUNC_3(VAR_2, VAR_1, &VAR_4);
 FUNC_2(VAR_3);
 return 0;
}
