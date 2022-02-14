
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_interface {scalar_t__ chip; } ;
struct snd_usb_audio {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ftu_eff_switch_priv_val {int cached_value; int is_cached; scalar_t__ mixer; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,int const,int const,unsigned char*,int const) ;
 int const FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_7,
     struct snd_ctl_elem_value *VAR_8)
{
 struct snd_usb_audio *VAR_9;
 struct snd_ftu_eff_switch_priv_val *VAR_10;

 struct usb_mixer_interface *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned char VAR_16[2];


 const int VAR_17 = 6;
 const int VAR_18 = 1;
 const int VAR_19 = 2;

 VAR_12 = 0;

 VAR_10 = (struct snd_ftu_eff_switch_priv_val *)
  VAR_7->private_value;
 VAR_13 = VAR_10->cached_value;
 VAR_15 = VAR_8->value.enumerated.item[0];

 VAR_11 = (struct usb_mixer_interface *) VAR_10->mixer;
 if (FUNC_0(!VAR_11))
  return -VAR_0;

 VAR_9 = (struct snd_usb_audio *) VAR_11->chip;
 if (FUNC_0(!VAR_9))
  return -VAR_0;

 if (!VAR_10->is_cached) {

  VAR_14 = FUNC_1(VAR_9->dev,
    FUNC_3(VAR_9->dev, 0), VAR_1,
    VAR_5 | VAR_6 | VAR_3,
    VAR_18 << 8, FUNC_2(VAR_9) | (VAR_17 << 8),
    VAR_16, VAR_19);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_13 = VAR_16[0];
  VAR_10->cached_value = VAR_13;
  VAR_10->is_cached = 1;
 }

 if (VAR_13 != VAR_15) {
  VAR_16[0] = VAR_15;
  VAR_16[1] = 0;
  VAR_14 = FUNC_1(VAR_9->dev,
    FUNC_4(VAR_9->dev, 0), VAR_2,
    VAR_5 | VAR_6 | VAR_4,
    VAR_18 << 8, FUNC_2(VAR_9) | (VAR_17 << 8),
    VAR_16, VAR_19);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_10->cached_value = VAR_15;
  VAR_10->is_cached = 1;
  VAR_12 = 1;
 }

 return VAR_12;
}
