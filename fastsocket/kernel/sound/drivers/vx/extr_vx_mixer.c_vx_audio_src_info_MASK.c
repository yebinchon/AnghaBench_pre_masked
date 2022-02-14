
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_core {scalar_t__ type; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vx_core* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_info *VAR_3)
{
 static char *VAR_4[3] = {
  "Digital", "Line", "Mic"
 };
 static char *VAR_5[2] = {
  "Digital", "Analog"
 };
 struct vx_core *VAR_6 = FUNC_0(VAR_2);

 VAR_3->type = VAR_0;
 VAR_3->count = 1;
 if (VAR_6->type >= VAR_1) {
  VAR_3->value.enumerated.items = 3;
  if (VAR_3->value.enumerated.item > 2)
   VAR_3->value.enumerated.item = 2;
  FUNC_1(VAR_3->value.enumerated.name,
         VAR_4[VAR_3->value.enumerated.item]);
 } else {
  VAR_3->value.enumerated.items = 2;
  if (VAR_3->value.enumerated.item > 1)
   VAR_3->value.enumerated.item = 1;
  FUNC_1(VAR_3->value.enumerated.name,
         VAR_5[VAR_3->value.enumerated.item]);
 }
 return 0;
}
