
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_wss {int* eimage; int reg_lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct snd_wss*,int ,unsigned short) ;
 unsigned short FUNC_2 (int) ;
 struct snd_wss* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_wss *VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5;
 int VAR_6;
 unsigned short VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_3->value.integer.value[0] & 0x7f);
 VAR_8 = FUNC_2(VAR_3->value.integer.value[1] & 0x7f);
 FUNC_4(&VAR_4->reg_lock, VAR_5);
 VAR_7 = (VAR_4->eimage[FUNC_0(VAR_0)] & ~0x7f) | VAR_7;
 VAR_8 = (VAR_4->eimage[FUNC_0(VAR_1)] & ~0x7f) | VAR_8;
 VAR_6 = VAR_7 != VAR_4->eimage[FUNC_0(VAR_0)] || VAR_8 != VAR_4->eimage[FUNC_0(VAR_1)];
 FUNC_1(VAR_4, VAR_0, VAR_7);
 FUNC_1(VAR_4, VAR_1, VAR_8);
 FUNC_5(&VAR_4->reg_lock, VAR_5);
 return VAR_6;
}
