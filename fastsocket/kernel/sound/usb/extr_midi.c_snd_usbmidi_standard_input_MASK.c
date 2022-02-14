
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct snd_usb_midi_in_endpoint {int dummy; } ;


 int* VAR_0 ;
 int FUNC_0 (struct snd_usb_midi_in_endpoint*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_midi_in_endpoint* VAR_1,
           uint8_t* VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 + 3 < VAR_3; VAR_4 += 4)
  if (VAR_2[VAR_4] != 0) {
   int VAR_5 = VAR_2[VAR_4] >> 4;
   int VAR_6 = VAR_0[VAR_2[VAR_4] & 0x0f];
   FUNC_0(VAR_1, VAR_5, &VAR_2[VAR_4 + 1], VAR_6);
  }
}
