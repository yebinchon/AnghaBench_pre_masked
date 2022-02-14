
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_wss {int reg_lock; int * image; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {void** value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int ) ;
 struct snd_wss* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_wss *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->reg_lock, VAR_5);
 VAR_3->value.integer.value[0] = FUNC_0(VAR_4->image[VAR_0]);
 VAR_3->value.integer.value[1] = FUNC_0(VAR_4->image[VAR_1]);
 FUNC_3(&VAR_4->reg_lock, VAR_5);
 return 0;
}
