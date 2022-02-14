
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct xonar_wm87x6 {unsigned int* wm8776_regs; struct snd_kcontrol* mic_adcmux_control; struct snd_kcontrol* line_adcmux_control; } ;
struct snd_kcontrol {unsigned int private_value; int id; struct oxygen* private_data; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; int card; struct xonar_wm87x6* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct oxygen*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_4,
    struct snd_ctl_elem_value *VAR_5)
{
 struct oxygen *VAR_6 = VAR_4->private_data;
 struct xonar_wm87x6 *VAR_7 = VAR_6->model_data;
 struct snd_kcontrol *VAR_8;
 unsigned int VAR_9 = VAR_4->private_value;
 u16 VAR_10;
 int VAR_11;

 FUNC_0(&VAR_6->mutex);
 VAR_10 = VAR_7->wm8776_regs[VAR_3];
 if (VAR_5->value.integer.value[0]) {
  VAR_10 |= VAR_9;

  VAR_9 ^= 3;
  if (VAR_10 & VAR_9) {
   VAR_10 &= ~VAR_9;
   if (VAR_9 == 1)
    VAR_8 = VAR_7->line_adcmux_control;
   else
    VAR_8 = VAR_7->mic_adcmux_control;
   FUNC_3(VAR_6->card, VAR_2,
           &VAR_8->id);
  }
 } else
  VAR_10 &= ~VAR_9;
 VAR_11 = VAR_10 != VAR_7->wm8776_regs[VAR_3];
 if (VAR_11) {
  FUNC_2(VAR_6, VAR_1,
          VAR_10 & 1 ? VAR_0 : 0,
          VAR_0);
  FUNC_4(VAR_6, VAR_3, VAR_10);
 }
 FUNC_1(&VAR_6->mutex);
 return VAR_11;
}
