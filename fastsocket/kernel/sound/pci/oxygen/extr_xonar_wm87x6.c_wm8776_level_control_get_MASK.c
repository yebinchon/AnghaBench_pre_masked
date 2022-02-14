
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xonar_wm87x6 {int* wm8776_regs; } ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_5,
        struct snd_ctl_elem_value *VAR_6)
{
 struct oxygen *VAR_7 = VAR_5->private_data;
 struct xonar_wm87x6 *VAR_8 = VAR_7->model_data;

 if (!(VAR_8->wm8776_regs[VAR_1] & VAR_2))
  VAR_6->value.enumerated.item[0] = 0;
 else if ((VAR_8->wm8776_regs[VAR_0] & VAR_4) ==
   VAR_3)
  VAR_6->value.enumerated.item[0] = 1;
 else
  VAR_6->value.enumerated.item[0] = 2;
 return 0;
}
