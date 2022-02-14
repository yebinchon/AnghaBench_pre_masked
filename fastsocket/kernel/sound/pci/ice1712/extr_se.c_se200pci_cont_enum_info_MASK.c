
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int items; int item; int name; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct TYPE_6__ {int * member; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
       struct snd_ctl_elem_info *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_3->private_value;
 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6)
  return -VAR_0;
 VAR_4->type = VAR_1;
 VAR_4->count = 1;
 VAR_4->value.enumerated.items = VAR_6;
 if (VAR_4->value.enumerated.item >= VAR_6)
  VAR_4->value.enumerated.item = VAR_6 - 1;
 FUNC_1(VAR_4->value.enumerated.name,
        VAR_2[VAR_5].member[VAR_4->value.enumerated.item]);
 return 0;
}
