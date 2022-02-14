
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xonar_cs43xx {int* cs4398_regs; int* cs4362a_regs; } ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct xonar_cs43xx* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxygen*,int,int) ;
 int FUNC_1 (struct oxygen*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_value *VAR_3)
{
 struct oxygen *VAR_4 = VAR_2->private_data;
 struct xonar_cs43xx *VAR_5 = VAR_4->model_data;
 int VAR_6;
 u8 VAR_7;

 FUNC_2(&VAR_4->mutex);
 VAR_7 = VAR_5->cs4398_regs[7];
 if (VAR_3->value.enumerated.item[0])
  VAR_7 |= VAR_1;
 else
  VAR_7 &= ~VAR_1;
 VAR_6 = VAR_7 != VAR_5->cs4398_regs[7];
 if (VAR_6) {
  FUNC_1(VAR_4, 7, VAR_7);
  if (VAR_7 & VAR_1)
   VAR_7 = VAR_5->cs4362a_regs[0x04] | VAR_0;
  else
   VAR_7 = VAR_5->cs4362a_regs[0x04] & ~VAR_0;
  FUNC_0(VAR_4, 0x04, VAR_7);
 }
 FUNC_3(&VAR_4->mutex);
 return VAR_6;
}
