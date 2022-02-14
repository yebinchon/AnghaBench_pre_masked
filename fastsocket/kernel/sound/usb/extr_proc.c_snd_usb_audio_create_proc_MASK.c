
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int card; } ;
struct snd_info_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct snd_info_entry**) ;
 int FUNC_1 (struct snd_info_entry*,struct snd_usb_audio*,int ) ;

void FUNC_2(struct snd_usb_audio *VAR_2)
{
 struct snd_info_entry *VAR_3;
 if (!FUNC_0(VAR_2->card, "usbbus", &VAR_3))
  FUNC_1(VAR_3, VAR_2, VAR_0);
 if (!FUNC_0(VAR_2->card, "usbid", &VAR_3))
  FUNC_1(VAR_3, VAR_2, VAR_1);
}
