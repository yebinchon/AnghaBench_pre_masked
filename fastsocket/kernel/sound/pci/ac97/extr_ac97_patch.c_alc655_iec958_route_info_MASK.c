
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int items; int item; int name; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; } ;
struct TYPE_4__ {scalar_t__ dev_flags; } ;
struct snd_ac97 {TYPE_1__ spec; } ;


 int VAR_0 ;
 struct snd_ac97* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 static char *VAR_3[3] = { "PCM", "Analog In", "IEC958 In" };
 static char *VAR_4[4] = { "PCM", "Analog1 In", "Analog2 In", "IEC958 In" };
 struct snd_ac97 *VAR_5 = FUNC_0(VAR_1);

 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items = VAR_5->spec.dev_flags ? 4 : 3;
 if (VAR_2->value.enumerated.item >= VAR_2->value.enumerated.items)
  VAR_2->value.enumerated.item = VAR_2->value.enumerated.items - 1;
 FUNC_1(VAR_2->value.enumerated.name,
        VAR_5->spec.dev_flags ?
        VAR_4[VAR_2->value.enumerated.item] :
        VAR_3[VAR_2->value.enumerated.item]);
 return 0;
}
