
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int reg_lock; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_1 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 struct snd_ice1712* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_3(VAR_2);
 unsigned char VAR_5, VAR_6;

 FUNC_4(&VAR_4->reg_lock);
 VAR_5 = FUNC_1(FUNC_0(VAR_4, VAR_1));
 VAR_6 = VAR_5 & ~VAR_0;
 if (VAR_3->value.integer.value[0])
  VAR_6 |= VAR_0;
 FUNC_2(VAR_6, FUNC_0(VAR_4, VAR_1));
 FUNC_5(&VAR_4->reg_lock);
 return VAR_5 != VAR_6;
}
