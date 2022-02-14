
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; struct oxygen* private_data; } ;
struct TYPE_3__ {scalar_t__* value; } ;
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
 u32 VAR_4 = VAR_1->private_value;
 u32 VAR_5, VAR_6;
 int VAR_7;

 FUNC_2(&VAR_3->reg_lock);
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (VAR_2->value.integer.value[0])
  VAR_6 = VAR_5 | VAR_4;
 else
  VAR_6 = VAR_5 & ~VAR_4;
 VAR_7 = VAR_6 != VAR_5;
 if (VAR_7)
  FUNC_1(VAR_3, VAR_0, VAR_6);
 FUNC_3(&VAR_3->reg_lock);
 return VAR_7;
}
