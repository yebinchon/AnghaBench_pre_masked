
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {struct dg* model_data; } ;
struct dg {int* cs4245_regs; } ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct oxygen *VAR_4 = VAR_2->private_data;
 struct dg *VAR_5 = VAR_4->model_data;

 VAR_3->value.enumerated.item[0] =
  !!(VAR_5->cs4245_regs[VAR_0] & VAR_1);
 return 0;
}
