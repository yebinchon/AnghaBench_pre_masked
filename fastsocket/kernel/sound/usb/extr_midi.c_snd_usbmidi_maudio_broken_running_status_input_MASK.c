
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t u8 ;
struct usbmidi_in_port {int running_status_length; } ;
struct snd_usb_midi_in_endpoint {struct usbmidi_in_port* ports; } ;


 int* VAR_0 ;
 int FUNC_0 (struct snd_usb_midi_in_endpoint*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(
     struct snd_usb_midi_in_endpoint* VAR_1,
     uint8_t* VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 + 3 < VAR_3; VAR_4 += 4)
  if (VAR_2[VAR_4] != 0) {
   int VAR_5 = VAR_2[VAR_4] >> 4;
   u8 VAR_6 = VAR_2[VAR_4] & 0x0f;
   struct usbmidi_in_port *VAR_7 = &VAR_1->ports[VAR_5];
   int VAR_8;

   VAR_8 = VAR_0[VAR_6];
   if (VAR_6 == 0xf && VAR_2[VAR_4 + 1] >= 0xf8)
    ;
   else if (VAR_6 >= 0x8 && VAR_6 <= 0xe)

    VAR_7->running_status_length = VAR_8 - 1;
   else if (VAR_6 == 0x4 &&
     VAR_7->running_status_length != 0 &&
     VAR_2[VAR_4 + 1] < 0x80)

    VAR_8 = VAR_7->running_status_length;
   else






    VAR_7->running_status_length = 0;
   FUNC_0(VAR_1, VAR_5, &VAR_2[VAR_4 + 1], VAR_8);
  }
}
