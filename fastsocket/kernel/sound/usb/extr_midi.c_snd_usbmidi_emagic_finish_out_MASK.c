
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_usb_midi_out_endpoint {int dummy; } ;
typedef int finish_data ;


 int FUNC_0 (struct snd_usb_midi_out_endpoint*,int const*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_midi_out_endpoint* VAR_0)
{
 static const u8 VAR_1[] = {

  0xf0,
  0x00, 0x20, 0x31,
  0x64,
  0x10,
  0x00,
  0x7f,
  0x40,
  0xf7
 };
 FUNC_0(VAR_0, VAR_1, sizeof(VAR_1));
}
