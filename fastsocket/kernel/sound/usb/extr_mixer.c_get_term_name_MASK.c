
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_audio_term {int type; int id; scalar_t__ name; } ;
struct mixer_build {int dummy; } ;
struct iterm_name_combo {int type; char* name; } ;






 struct iterm_name_combo* VAR_0 ;
 int FUNC_0 (struct mixer_build*,scalar_t__,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,char*,int) ;
 int FUNC_2 (unsigned char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct mixer_build *VAR_1, struct usb_audio_term *VAR_2,
    unsigned char *VAR_3, int VAR_4, int VAR_5)
{
 struct iterm_name_combo *VAR_6;

 if (VAR_2->name)
  return FUNC_0(VAR_1, VAR_2->name, VAR_3, VAR_4);


 if (VAR_2->type >> 16) {
  if (VAR_5)
   return 0;
  switch (VAR_2->type >> 16) {
  case 128:
   FUNC_2(VAR_3, "Selector"); return 8;
  case 130:
   FUNC_2(VAR_3, "Process Unit"); return 12;
  case 131:
   FUNC_2(VAR_3, "Ext Unit"); return 8;
  case 129:
   FUNC_2(VAR_3, "Mixer"); return 5;
  default:
   return FUNC_1(VAR_3, "Unit %d", VAR_2->id);
  }
 }

 switch (VAR_2->type & 0xff00) {
 case 0x0100:
  FUNC_2(VAR_3, "PCM"); return 3;
 case 0x0200:
  FUNC_2(VAR_3, "Mic"); return 3;
 case 0x0400:
  FUNC_2(VAR_3, "Headset"); return 7;
 case 0x0500:
  FUNC_2(VAR_3, "Phone"); return 5;
 }

 for (VAR_6 = VAR_0; VAR_6->type; VAR_6++)
  if (VAR_6->type == VAR_2->type) {
   FUNC_2(VAR_3, VAR_6->name);
   return FUNC_3(VAR_6->name);
  }
 return 0;
}
