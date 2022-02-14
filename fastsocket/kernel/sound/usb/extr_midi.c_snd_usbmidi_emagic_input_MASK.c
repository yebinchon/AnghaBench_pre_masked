
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct snd_usb_midi_in_endpoint {int seen_f5; int current_port; } ;


 int FUNC_0 (struct snd_usb_midi_in_endpoint*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_midi_in_endpoint* VAR_0,
         uint8_t* VAR_1, int VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
  if (VAR_1[VAR_3] == 0xff) {
   VAR_2 = VAR_3;
   break;
  }


 if (VAR_0->seen_f5)
  goto switch_port;

 while (VAR_2 > 0) {

  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
   if (VAR_1[VAR_3] == 0xf5)
    break;
  FUNC_0(VAR_0, VAR_0->current_port, VAR_1, VAR_3);
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;

  if (VAR_2 <= 0)
   break;

  VAR_0->seen_f5 = 1;
  ++VAR_1;
  --VAR_2;

 switch_port:
  if (VAR_2 <= 0)
   break;
  if (VAR_1[0] < 0x80) {
   VAR_0->current_port = (VAR_1[0] - 1) & 15;
   ++VAR_1;
   --VAR_2;
  }
  VAR_0->seen_f5 = 0;
 }
}
