
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_bt87x {int reg_control; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_bt87x*,int ,int) ;
 struct snd_bt87x* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
           struct snd_ctl_elem_value *VAR_3)
{
 struct snd_bt87x *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5;
 int VAR_6;

 FUNC_2(&VAR_4->reg_lock);
 VAR_5 = VAR_4->reg_control;
 VAR_4->reg_control = (VAR_4->reg_control & ~VAR_0)
  | (VAR_3->value.integer.value[0] ? VAR_0 : 0);
 FUNC_0(VAR_4, VAR_1, VAR_4->reg_control);
 VAR_6 = VAR_4->reg_control != VAR_5;
 FUNC_3(&VAR_4->reg_lock);
 return VAR_6;
}
