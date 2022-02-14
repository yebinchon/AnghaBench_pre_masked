
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ymfpci {int reg_lock; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;


 struct snd_ymfpci* FUNC_0 (struct snd_kcontrol*) ;
 unsigned int FUNC_1 (struct snd_ymfpci*,int) ;
 int FUNC_2 (struct snd_ymfpci*,int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ymfpci *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_1->private_value & 0xffff;
 unsigned int VAR_5 = (VAR_1->private_value >> 16) & 0xff;
  unsigned int VAR_6 = 1;
 int VAR_7;
 unsigned int VAR_8, VAR_9;

 switch (VAR_4) {
 case 128: break;
 case 129: break;
 default: return -VAR_0;
 }
 VAR_8 = (VAR_2->value.integer.value[0] & VAR_6);
 VAR_8 <<= VAR_5;
 FUNC_3(&VAR_3->reg_lock);
 VAR_9 = FUNC_1(VAR_3, VAR_4);
 VAR_8 = (VAR_9 & ~(VAR_6 << VAR_5)) | VAR_8;
 VAR_7 = VAR_8 != VAR_9;
 FUNC_2(VAR_3, VAR_4, VAR_8);
 FUNC_4(&VAR_3->reg_lock);
 return VAR_7;
}
