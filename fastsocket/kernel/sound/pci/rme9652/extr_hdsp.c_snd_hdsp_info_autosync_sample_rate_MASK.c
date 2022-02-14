
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
struct hdsp {scalar_t__ io_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct hdsp* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_info *VAR_3)
{
 struct hdsp *VAR_4 = FUNC_0(VAR_2);
 static char *VAR_5[] = {"32000", "44100", "48000", "64000", "88200", "96000", "None", "128000", "176400", "192000"};
 VAR_3->type = VAR_1;
 VAR_3->count = 1;
 VAR_3->value.enumerated.items = (VAR_4->io_type == VAR_0) ? 10 : 7 ;
 if (VAR_3->value.enumerated.item >= VAR_3->value.enumerated.items)
  VAR_3->value.enumerated.item = VAR_3->value.enumerated.items - 1;
 FUNC_1(VAR_3->value.enumerated.name, VAR_5[VAR_3->value.enumerated.item]);
 return 0;
}
