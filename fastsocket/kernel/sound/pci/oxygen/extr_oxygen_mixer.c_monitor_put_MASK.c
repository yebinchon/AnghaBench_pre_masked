
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {int private_value; struct oxygen* private_data; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct oxygen*,int ) ;
 int FUNC_1 (struct oxygen*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct oxygen *VAR_3 = VAR_1->private_data;
 u8 VAR_4 = VAR_1->private_value;
 int VAR_5 = VAR_1->private_value & (1 << 8);
 u8 VAR_6, VAR_7;
 int VAR_8;

 FUNC_2(&VAR_3->reg_lock);
 VAR_6 = FUNC_0(VAR_3, VAR_0);
 if ((!!VAR_2->value.integer.value[0] ^ !!VAR_5) != 0)
  VAR_7 = VAR_6 | VAR_4;
 else
  VAR_7 = VAR_6 & ~VAR_4;
 VAR_8 = VAR_7 != VAR_6;
 if (VAR_8)
  FUNC_1(VAR_3, VAR_0, VAR_7);
 FUNC_3(&VAR_3->reg_lock);
 return VAR_8;
}
