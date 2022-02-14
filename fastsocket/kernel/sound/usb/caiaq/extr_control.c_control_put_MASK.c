
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ usb_id; int dev; } ;
struct snd_usb_caiaqdev {int* control_state; int* ep8_out_buf; TYPE_3__ chip; } ;
struct snd_usb_audio {int card; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct snd_usb_caiaqdev* FUNC_1 (int ) ;
 struct snd_usb_audio* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_usb_caiaqdev*,unsigned char,int*,int) ;
 int FUNC_4 (int ,int ,int*,int,int*,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_6,
         struct snd_ctl_elem_value *VAR_7)
{
 struct snd_usb_audio *VAR_8 = FUNC_2(VAR_6);
 struct snd_usb_caiaqdev *VAR_9 = FUNC_1(VAR_8->card);
 int VAR_10 = VAR_6->private_value;
 int VAR_11 = VAR_7->value.integer.value[0];
 unsigned char VAR_12 = VAR_2;

 if (VAR_9->chip.usb_id ==
  FUNC_0(VAR_5, VAR_4))
  VAR_12 = VAR_1;

 if (VAR_10 & VAR_0) {
  int VAR_13 = VAR_10 & ~VAR_0;

  VAR_9->control_state[VAR_13] = VAR_11;

  if (VAR_9->chip.usb_id ==
   FUNC_0(VAR_5, VAR_3)) {
   int VAR_14;

   VAR_9->ep8_out_buf[0] = VAR_13;
   VAR_9->ep8_out_buf[1] = VAR_11;

   FUNC_4(VAR_9->chip.dev,
         FUNC_5(VAR_9->chip.dev, 8),
         VAR_9->ep8_out_buf, sizeof(VAR_9->ep8_out_buf),
         &VAR_14, 200);
  } else {
   FUNC_3(VAR_9, VAR_12,
     VAR_9->control_state, sizeof(VAR_9->control_state));
  }
 } else {
  if (VAR_11)
   VAR_9->control_state[VAR_10 / 8] |= 1 << (VAR_10 % 8);
  else
   VAR_9->control_state[VAR_10 / 8] &= ~(1 << (VAR_10 % 8));

  FUNC_3(VAR_9, VAR_12,
    VAR_9->control_state, sizeof(VAR_9->control_state));
 }

 return 1;
}
