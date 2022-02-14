
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int id; int (* put ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;int (* get ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;TYPE_1__* vd; } ;
struct TYPE_5__ {scalar_t__* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct cmipci {scalar_t__* mixer_res_status; int card; struct snd_kcontrol** mixer_res_ctl; scalar_t__ mixer_insensitive; } ;
struct TYPE_4__ {int access; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_ctl_elem_value*) ;
 struct snd_ctl_elem_value* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_ctl_elem_value*,int ,int) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static void FUNC_6(struct cmipci *VAR_5)
{
 if (VAR_5->mixer_insensitive) {
  struct snd_ctl_elem_value *VAR_6;
  unsigned int VAR_7;

  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return;
  VAR_5->mixer_insensitive = 0;

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   struct snd_kcontrol *VAR_8 = VAR_5->mixer_res_ctl[VAR_7];
   if (VAR_8) {
    int VAR_9;

    FUNC_2(VAR_6, 0, sizeof(*VAR_6));
    VAR_8->vd[0].access &= ~VAR_2;
    VAR_8->get(VAR_8, VAR_6);
    VAR_9 = VAR_3;
    if (VAR_6->value.integer.value[0] != VAR_5->mixer_res_status[VAR_7]) {
     VAR_6->value.integer.value[0] = VAR_5->mixer_res_status[VAR_7];
     VAR_8->put(VAR_8, VAR_6);
     VAR_9 |= VAR_4;
    }
    FUNC_3(VAR_5->card, VAR_9, &VAR_8->id);
   }
  }
  FUNC_0(VAR_6);
 }
}
