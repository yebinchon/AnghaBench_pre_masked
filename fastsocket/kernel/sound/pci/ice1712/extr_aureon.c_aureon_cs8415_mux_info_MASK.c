
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;
struct TYPE_5__ {int items; int item; int name; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct snd_ice1712* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char const* const) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_info *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_0(VAR_2);
 static const char * const VAR_5[] = {
  "CD",
  "Optical"
 };
 static const char * const VAR_6[] = {
  "CD",
  "Coax"
 };
 VAR_3->type = VAR_0;
 VAR_3->count = 1;
 VAR_3->value.enumerated.items = 2;
 if (VAR_3->value.enumerated.item >= VAR_3->value.enumerated.items)
  VAR_3->value.enumerated.item = VAR_3->value.enumerated.items - 1;
 if (VAR_4->eeprom.subvendor == VAR_1)
  FUNC_1(VAR_3->value.enumerated.name, VAR_6[VAR_3->value.enumerated.item]);
 else
  FUNC_1(VAR_3->value.enumerated.name, VAR_5[VAR_3->value.enumerated.item]);
 return 0;
}
