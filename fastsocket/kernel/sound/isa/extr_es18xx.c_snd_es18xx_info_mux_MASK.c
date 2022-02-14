
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_es18xx {int version; } ;
struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_es18xx* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_info *VAR_3)
{
 static char *VAR_4[4] = {
  "Mic", "CD", "Line", "Master"
 };
 static char *VAR_5[5] = {
  "Mic", "CD", "Line", "Master", "Mix"
 };
 static char *VAR_6[8] = {
  "Mic", "Mic Master", "CD", "AOUT",
  "Mic1", "Mix", "Line", "Master"
 };
 struct snd_es18xx *VAR_7 = FUNC_0(VAR_2);

 VAR_3->type = VAR_1;
 VAR_3->count = 1;
 switch (VAR_7->version) {
 case 0x1868:
 case 0x1878:
  VAR_3->value.enumerated.items = 4;
  if (VAR_3->value.enumerated.item > 3)
   VAR_3->value.enumerated.item = 3;
  FUNC_1(VAR_3->value.enumerated.name, VAR_4[VAR_3->value.enumerated.item]);
  break;
 case 0x1887:
 case 0x1888:
  VAR_3->value.enumerated.items = 5;
  if (VAR_3->value.enumerated.item > 4)
   VAR_3->value.enumerated.item = 4;
  FUNC_1(VAR_3->value.enumerated.name, VAR_5[VAR_3->value.enumerated.item]);
  break;
 case 0x1869:
 case 0x1879:
  VAR_3->value.enumerated.items = 8;
  if (VAR_3->value.enumerated.item > 7)
   VAR_3->value.enumerated.item = 7;
  FUNC_1(VAR_3->value.enumerated.name, VAR_6[VAR_3->value.enumerated.item]);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
