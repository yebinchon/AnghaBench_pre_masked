
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_mixer_interface {int xonar_u1_status; TYPE_3__* chip; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_mixer_interface* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,int ,int,int,int,int ,int*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
       struct snd_ctl_elem_value *VAR_4)
{
 struct usb_mixer_interface *VAR_5 = FUNC_0(VAR_3);
 u8 VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = VAR_5->xonar_u1_status;
 if (VAR_4->value.integer.value[0])
  VAR_7 = VAR_6 | 0x02;
 else
  VAR_7 = VAR_6 & ~0x02;
 VAR_9 = VAR_7 != VAR_6;
 VAR_8 = FUNC_1(VAR_5->chip->dev,
         FUNC_2(VAR_5->chip->dev, 0), 0x08,
         VAR_0 | VAR_2 | VAR_1,
         50, 0, &VAR_7, 1);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_5->xonar_u1_status = VAR_7;
 return VAR_9;
}
