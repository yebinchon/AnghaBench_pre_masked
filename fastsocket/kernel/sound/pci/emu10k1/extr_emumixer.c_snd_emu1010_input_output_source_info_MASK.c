
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1 {TYPE_1__* card_capabilities; } ;
struct TYPE_5__ {int items; int item; int name; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; } ;
struct TYPE_4__ {scalar_t__ emu_model; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;
 struct snd_emu10k1* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_4,
      struct snd_ctl_elem_info *VAR_5)
{
 struct snd_emu10k1 *VAR_6 = FUNC_0(VAR_4);
 char **VAR_7;

 VAR_5->type = VAR_1;
 VAR_5->count = 1;
 if (VAR_6->card_capabilities->emu_model == VAR_0) {
  VAR_5->value.enumerated.items = 49;
  VAR_7 = VAR_3;
 } else {
  VAR_5->value.enumerated.items = 53;
  VAR_7 = VAR_2;
 }
 if (VAR_5->value.enumerated.item >= VAR_5->value.enumerated.items)
  VAR_5->value.enumerated.item =
   VAR_5->value.enumerated.items - 1;
 FUNC_1(VAR_5->value.enumerated.name,
        VAR_7[VAR_5->value.enumerated.item]);
 return 0;
}
