
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cmipci {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cmipci*,int ,int) ;
 int FUNC_1 (struct cmipci*,int ,int ) ;
 int FUNC_2 (struct cmipci*,int ,int) ;
 int FUNC_3 (struct cmipci*,int ,int ) ;
 struct cmipci* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_5,
           struct snd_ctl_elem_value *VAR_6)
{
 struct cmipci *VAR_7 = FUNC_4(VAR_5);
 int VAR_8;

 FUNC_5(&VAR_7->reg_lock);
 if (VAR_6->value.enumerated.item[0] == 2)
  VAR_8 = FUNC_2(VAR_7, VAR_3, VAR_1 | VAR_0);
 else
  VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_1 | VAR_0);
 if (VAR_6->value.enumerated.item[0] == 1)
  VAR_8 |= FUNC_3(VAR_7, VAR_4, VAR_2);
 else
  VAR_8 |= FUNC_1(VAR_7, VAR_4, VAR_2);
 FUNC_6(&VAR_7->reg_lock);
 return VAR_8;
}
