
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_opl4 {int reg_lock; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_opl4* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_opl4*,int) ;
 int FUNC_2 (struct snd_opl4*,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_opl4 *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;
 u8 VAR_4 = VAR_0->private_value;
 u8 VAR_5, VAR_6;

 VAR_5 = (7 - (VAR_1->value.integer.value[0] & 7)) |
  ((7 - (VAR_1->value.integer.value[1] & 7)) << 3);
 FUNC_3(&VAR_2->reg_lock, VAR_3);
 VAR_6 = FUNC_1(VAR_2, VAR_4);
 FUNC_2(VAR_2, VAR_4, VAR_5);
 FUNC_4(&VAR_2->reg_lock, VAR_3);
 return VAR_5 != VAR_6;
}
