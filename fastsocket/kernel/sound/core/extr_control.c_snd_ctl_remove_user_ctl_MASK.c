
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int count; TYPE_1__* vd; } ;
struct snd_ctl_file {struct snd_card* card; } ;
struct snd_ctl_elem_id {int dummy; } ;
struct snd_card {int controls_rwsem; int user_ctl_count; } ;
struct TYPE_2__ {int access; struct snd_ctl_file* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct snd_kcontrol* FUNC_1 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_2 (struct snd_card*,struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_ctl_file * VAR_4,
       struct snd_ctl_elem_id *VAR_5)
{
 struct snd_card *VAR_6 = VAR_4->card;
 struct snd_kcontrol *VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(&VAR_6->controls_rwsem);
 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (VAR_7 == ((void*)0)) {
  VAR_9 = -VAR_2;
  goto error;
 }
 if (!(VAR_7->vd[0].access & VAR_3)) {
  VAR_9 = -VAR_1;
  goto error;
 }
 for (VAR_8 = 0; VAR_8 < VAR_7->count; VAR_8++)
  if (VAR_7->vd[VAR_8].owner != ((void*)0) && VAR_7->vd[VAR_8].owner != VAR_4) {
   VAR_9 = -VAR_0;
   goto error;
  }
 VAR_9 = FUNC_2(VAR_6, VAR_7);
 if (VAR_9 < 0)
  goto error;
 VAR_6->user_ctl_count--;
error:
 FUNC_3(&VAR_6->controls_rwsem);
 return VAR_9;
}
