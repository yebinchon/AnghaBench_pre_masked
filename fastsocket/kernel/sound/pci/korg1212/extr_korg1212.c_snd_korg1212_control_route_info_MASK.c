
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_3,
        struct snd_ctl_elem_info *VAR_4)
{
 VAR_4->type = VAR_0;
 VAR_4->count = (VAR_3->private_value >= 8) ? 2 : 1;
 VAR_4->value.enumerated.items = VAR_2;
 if (VAR_4->value.enumerated.item > VAR_2-1) {
  VAR_4->value.enumerated.item = VAR_2-1;
 }
 FUNC_0(VAR_4->value.enumerated.name, VAR_1[VAR_4->value.enumerated.item]);
 return 0;
}
