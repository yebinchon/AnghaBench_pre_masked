
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct cmipci {int chip_version; } ;


 int VAR_0 ;
 struct cmipci* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_info *VAR_2)
{
 struct cmipci *VAR_3 = FUNC_0(VAR_1);
 static char *VAR_4[3] = { "Line-In", "Rear Output", "Bass Output" };
 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items = VAR_3->chip_version >= 39 ? 3 : 2;
 if (VAR_2->value.enumerated.item >= VAR_2->value.enumerated.items)
  VAR_2->value.enumerated.item = VAR_2->value.enumerated.items - 1;
 FUNC_1(VAR_2->value.enumerated.name, VAR_4[VAR_2->value.enumerated.item]);
 return 0;
}
