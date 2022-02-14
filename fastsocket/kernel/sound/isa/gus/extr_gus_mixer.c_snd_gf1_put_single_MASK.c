
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_6__ {unsigned char active_voice; } ;
struct snd_gus_card {unsigned char mix_cntrl_reg; int reg_lock; TYPE_3__ gf1; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char,int ) ;
 struct snd_gus_card* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_gus_card *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 int VAR_6 = VAR_2->private_value & 0xff;
 int VAR_7 = (VAR_2->private_value >> 8) & 1;
 int VAR_8;
 unsigned char VAR_9, VAR_10;

 VAR_10 = VAR_3->value.integer.value[0] & 1;
 if (VAR_7)
  VAR_10 ^= 1;
 VAR_10 <<= VAR_6;
 FUNC_3(&VAR_4->reg_lock, VAR_5);
 VAR_9 = VAR_4->mix_cntrl_reg;
 VAR_10 = (VAR_9 & ~(1 << VAR_6)) | VAR_10;
 VAR_8 = VAR_10 != VAR_9;
 FUNC_1(VAR_4->mix_cntrl_reg = VAR_10, FUNC_0(VAR_4, VAR_1));
 FUNC_1(VAR_4->gf1.active_voice = 0, FUNC_0(VAR_4, VAR_0));
 FUNC_4(&VAR_4->reg_lock, VAR_5);
 return VAR_8;
}
