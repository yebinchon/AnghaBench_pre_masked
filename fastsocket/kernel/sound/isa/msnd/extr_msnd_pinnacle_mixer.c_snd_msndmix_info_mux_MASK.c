
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_msnd {int flags; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int items; unsigned int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_msnd* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_info *VAR_3)
{
 static char *VAR_4[3] = {
  "Analog", "MASS", "SPDIF",
 };
 struct snd_msnd *VAR_5 = FUNC_0(VAR_2);
 unsigned VAR_6 = FUNC_2(VAR_0, &VAR_5->flags) ? 3 : 2;

 VAR_3->type = VAR_1;
 VAR_3->count = 1;
 VAR_3->value.enumerated.items = VAR_6;
 if (VAR_3->value.enumerated.item >= VAR_6)
  VAR_3->value.enumerated.item = VAR_6 - 1;
 FUNC_1(VAR_3->value.enumerated.name,
  VAR_4[VAR_3->value.enumerated.item]);
 return 0;
}
