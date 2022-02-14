
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_mixer_interface {int* audigy2nx_leds; TYPE_3__* chip; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {scalar_t__ usb_id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_mixer_interface* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int ,int ,int,int,int,int,int *,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_4, struct snd_ctl_elem_value *VAR_5)
{
 struct usb_mixer_interface *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = VAR_4->private_value;
 int VAR_8 = VAR_5->value.integer.value[0];
 int VAR_9, VAR_10;

 if (VAR_8 > 1)
  return -VAR_0;
 VAR_10 = VAR_8 != VAR_6->audigy2nx_leds[VAR_7];
 if (VAR_6->chip->usb_id == FUNC_0(0x041e, 0x3042))
  VAR_9 = FUNC_2(VAR_6->chip->dev,
         FUNC_3(VAR_6->chip->dev, 0), 0x24,
         VAR_1 | VAR_3 | VAR_2,
         !VAR_8, 0, ((void*)0), 0);

 if (VAR_6->chip->usb_id == FUNC_0(0x041e, 0x30df))
  VAR_9 = FUNC_2(VAR_6->chip->dev,
         FUNC_3(VAR_6->chip->dev, 0), 0x24,
         VAR_1 | VAR_3 | VAR_2,
         !VAR_8, 0, ((void*)0), 0);
 else
  VAR_9 = FUNC_2(VAR_6->chip->dev,
         FUNC_3(VAR_6->chip->dev, 0), 0x24,
         VAR_1 | VAR_3 | VAR_2,
         VAR_8, VAR_7 + 2, ((void*)0), 0);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_6->audigy2nx_leds[VAR_7] = VAR_8;
 return VAR_10;
}
