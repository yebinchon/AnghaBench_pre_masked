
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int id; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_kcontrol*,int *) ;
 int FUNC_1 (int ,char const* const) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_info *VAR_2)
{
 static const char * const VAR_3[] = {
  "PCM Out",
  "H/W In 0", "H/W In 1", "H/W In 2", "H/W In 3",
  "H/W In 4", "H/W In 5", "H/W In 6", "H/W In 7",
  "IEC958 In L", "IEC958 In R",
  "Digital Mixer",
 };

 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items =
  FUNC_0(VAR_1, &VAR_2->id) < 2 ? 12 : 11;
 if (VAR_2->value.enumerated.item >= VAR_2->value.enumerated.items)
  VAR_2->value.enumerated.item = VAR_2->value.enumerated.items - 1;
 FUNC_1(VAR_2->value.enumerated.name, VAR_3[VAR_2->value.enumerated.item]);
 return 0;
}
