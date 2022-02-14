
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int items; unsigned int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const* const) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_info *VAR_2)
{
 static const char * const VAR_3[] = {
  "On", "Off", "Follow Master"
 };
 unsigned int VAR_4;

 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items = 3;
 VAR_4 = VAR_2->value.enumerated.item;
 if (VAR_4 >= 3)
  VAR_4 = 2;
 FUNC_0(VAR_2->value.enumerated.name, VAR_3[VAR_4]);
 return 0;
}
