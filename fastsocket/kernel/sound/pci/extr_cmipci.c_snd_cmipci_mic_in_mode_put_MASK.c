
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cmipci {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmipci*,int ,int ) ;
 int FUNC_1 (struct cmipci*,int ,int ) ;
 struct cmipci* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_value *VAR_3)
{
 struct cmipci *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 FUNC_3(&VAR_4->reg_lock);
 if (VAR_3->value.enumerated.item[0])
  VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_1);
 else
  VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_1);
 FUNC_4(&VAR_4->reg_lock);
 return VAR_5;
}
