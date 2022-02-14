
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_bt87x {int reg_control; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_bt87x*,int ,int) ;
 struct snd_bt87x* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_3,
     struct snd_ctl_elem_value *VAR_4)
{
 struct snd_bt87x *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6;
 int VAR_7;

 FUNC_2(&VAR_5->reg_lock);
 VAR_6 = VAR_5->reg_control;
 VAR_5->reg_control = (VAR_5->reg_control & ~VAR_0)
  | (VAR_4->value.enumerated.item[0] << VAR_1);
 FUNC_0(VAR_5, VAR_2, VAR_5->reg_control);
 VAR_7 = VAR_5->reg_control != VAR_6;
 FUNC_3(&VAR_5->reg_lock);
 return VAR_7;
}
