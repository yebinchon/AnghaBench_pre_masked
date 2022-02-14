
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {size_t private_value; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int shift; int mask; } ;


 int FUNC_0 (int ,int,int ,int,int ) ;
 int FUNC_1 (struct snd_kcontrol*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 return FUNC_0(FUNC_1(VAR_1), 0x60,
         VAR_0[VAR_1->private_value].mask,
         VAR_2->value.enumerated.item[0]<<
         VAR_0[VAR_1->private_value].shift,
         0);
}
