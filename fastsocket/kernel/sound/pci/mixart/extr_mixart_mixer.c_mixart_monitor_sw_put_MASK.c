
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_mixart {int* monitoring_active; TYPE_3__* mgr; int pipe_out_ana; int pipe_in_ana; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int mixer_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_mixart*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_mixart* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_mixart*,int ,int,int) ;
 int FUNC_5 (TYPE_3__*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_mixart *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;
 int VAR_5;
 FUNC_1(&VAR_3->mgr->mixer_mutex);
 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  if (VAR_3->monitoring_active[VAR_5] !=
      VAR_2->value.integer.value[VAR_5]) {
   VAR_3->monitoring_active[VAR_5] =
    !!VAR_2->value.integer.value[VAR_5];
   VAR_4 |= (1<<VAR_5);
  }
 }
 if (VAR_4) {

  int VAR_6 = VAR_3->monitoring_active[0] ||
   VAR_3->monitoring_active[1];
  if (VAR_6) {

   FUNC_4(VAR_3, VAR_0, 0, 1);

   FUNC_4(VAR_3, VAR_0, 1, 1);
  }
  if (VAR_4 & 0x01)
   FUNC_0(VAR_3, 0);
  if (VAR_4 & 0x02)
   FUNC_0(VAR_3, 1);
  if (!VAR_6) {

   FUNC_5(VAR_3->mgr,
       &VAR_3->pipe_in_ana, 1);

   FUNC_5(VAR_3->mgr,
       &VAR_3->pipe_out_ana, 1);
  }
 }

 FUNC_2(&VAR_3->mgr->mixer_mutex);
 return (VAR_4 != 0);
}
