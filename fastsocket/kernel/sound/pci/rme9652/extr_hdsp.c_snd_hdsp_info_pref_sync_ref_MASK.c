
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int items; size_t item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct hdsp {int io_type; } ;






 int VAR_0 ;
 struct hdsp* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 static char *VAR_3[] = {"Word", "IEC958", "ADAT1", "ADAT Sync", "ADAT2", "ADAT3" };
 struct hdsp *VAR_4 = FUNC_0(VAR_1);

 VAR_2->type = VAR_0;
 VAR_2->count = 1;

 switch (VAR_4->io_type) {
 case 131:
 case 129:
  VAR_2->value.enumerated.items = 6;
  break;
 case 128:
  VAR_2->value.enumerated.items = 4;
  break;
 case 130:
  VAR_2->value.enumerated.items = 3;
  break;
 default:
  VAR_2->value.enumerated.items = 0;
  break;
 }

 if (VAR_2->value.enumerated.item >= VAR_2->value.enumerated.items)
  VAR_2->value.enumerated.item = VAR_2->value.enumerated.items - 1;
 FUNC_1(VAR_2->value.enumerated.name, VAR_3[VAR_2->value.enumerated.item]);
 return 0;
}
