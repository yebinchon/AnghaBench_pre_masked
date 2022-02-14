
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_interface {scalar_t__ chip; } ;
struct snd_usb_audio {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ftu_eff_switch_priv_val {int is_cached; unsigned char cached_value; scalar_t__ mixer; } ;
struct TYPE_3__ {unsigned char* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,int const,int const,unsigned char*,int const) ;
 int const FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_5,
     struct snd_ctl_elem_value *VAR_6)
{
 struct snd_usb_audio *VAR_7;
 struct usb_mixer_interface *VAR_8;
 struct snd_ftu_eff_switch_priv_val *VAR_9;
 int VAR_10;
 unsigned char VAR_11[2];

 const int VAR_12 = 6;
 const int VAR_13 = 1;
 const int VAR_14 = 2;

 VAR_11[0] = 0x00;
 VAR_11[1] = 0x00;

 VAR_9 = (struct snd_ftu_eff_switch_priv_val *)
  VAR_5->private_value;

 if (VAR_9->is_cached) {
  VAR_6->value.enumerated.item[0] = VAR_9->cached_value;
  return 0;
 }

 VAR_8 = (struct usb_mixer_interface *) VAR_9->mixer;
 if (FUNC_0(!VAR_8))
  return -VAR_0;

 VAR_7 = (struct snd_usb_audio *) VAR_8->chip;
 if (FUNC_0(!VAR_7))
  return -VAR_0;


 VAR_10 = FUNC_1(VAR_7->dev,
   FUNC_3(VAR_7->dev, 0), VAR_1,
   VAR_3 | VAR_4 | VAR_2,
   VAR_13 << 8, FUNC_2(VAR_7) | (VAR_12 << 8),
   VAR_11, VAR_14);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_6->value.enumerated.item[0] = VAR_11[0];
 VAR_9->cached_value = VAR_11[0];
 VAR_9->is_cached = 1;

 return 0;
}
