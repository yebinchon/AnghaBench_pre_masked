
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_ymfpci {int reg_lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 struct snd_ymfpci* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_ymfpci*,int ) ;
 int FUNC_2 (struct snd_ymfpci*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ymfpci *VAR_3 = FUNC_0(VAR_1);
 u16 VAR_4, VAR_5;

 FUNC_3(&VAR_3->reg_lock);
 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (VAR_2->value.enumerated.item[0] == 0)
  VAR_4 = VAR_5 & ~0x100;
 else
  VAR_4 = (VAR_5 & ~0x300) | 0x100 | ((VAR_2->value.enumerated.item[0] == 2) << 9);
 FUNC_2(VAR_3, VAR_0, VAR_4);
 FUNC_4(&VAR_3->reg_lock);
 return VAR_4 != VAR_5;
}
