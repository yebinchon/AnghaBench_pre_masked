
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct snd_usb_midi_in_endpoint {int dummy; } ;


 int FUNC_0 (struct snd_usb_midi_in_endpoint*,int ,int*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_midi_in_endpoint *VAR_0,
       uint8_t *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = (unsigned int)VAR_2;
 while (VAR_3 < VAR_4) {
  unsigned int VAR_5 = (VAR_1[VAR_3] >> 4) - 1;
  unsigned int VAR_6 = VAR_1[VAR_3] & 0x0f;
  VAR_3++;
  if (VAR_3 + VAR_6 <= VAR_4 && VAR_5 < 2)
   FUNC_0(VAR_0, 0, &VAR_1[VAR_3], VAR_6);
  VAR_3 += VAR_6;
 }
}
