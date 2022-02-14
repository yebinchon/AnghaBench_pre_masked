
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int items; int item; int name; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int type; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_info *VAR_3)
{
 VAR_3->type = VAR_0;
 VAR_3->count = 1;
 VAR_3->value.enumerated.items = 3;
 if (VAR_3->value.enumerated.item > 2) {
  VAR_3->value.enumerated.item = 2;
 }
 FUNC_0(VAR_3->value.enumerated.name, VAR_1[VAR_3->value.enumerated.item]);
 return 0;
}
