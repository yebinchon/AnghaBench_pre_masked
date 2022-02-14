
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int min; int max; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_3,
    struct snd_ctl_elem_info *VAR_4)
{
 int VAR_5 = VAR_3->private_value & 0xff;

 VAR_4->type = VAR_2;
 VAR_4->count = 2;

 if ((VAR_5 >= VAR_0) && (VAR_5 <= VAR_1)) {



  VAR_4->value.integer.min = - 0x7f;
  VAR_4->value.integer.max = 0x7f;
 } else {



  VAR_4->value.integer.min = 0;
  VAR_4->value.integer.max = 0x20;
 }

 return 0;
}
