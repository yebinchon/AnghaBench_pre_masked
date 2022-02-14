
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {int dummy; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned int FUNC_0 (int) ;
 struct snd_pmac* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_pmac*,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pmac *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3 = FUNC_0(VAR_0->private_value & 0xff);
 int VAR_4 = VAR_0->private_value & 0x300;
 FUNC_2(VAR_2, VAR_3,
   VAR_1->value.integer.value, VAR_4);
 return 0;
}
