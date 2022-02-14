
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uaudio_softc {int sc_mixer_iface_index; int sc_udev; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int*,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct uaudio_softc *VAR_5, int VAR_6)
{
 uint8_t VAR_7[2][4] = {
  {0x20, 0x20, 0x00, 0},
  {0x20, 0x30, 0x02, 1}
 };
 int VAR_8;

 if (VAR_6 & VAR_2)
  VAR_7[1][1] = 0x00;
 else
  VAR_7[1][1] = 0x02;

 if (VAR_6 & VAR_3)
  VAR_7[0][1] = 0x60;

 if (VAR_6 & VAR_1)
  VAR_7[1][1] = 0x03;

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  if (FUNC_0(VAR_5->sc_udev, ((void*)0),
      VAR_7[VAR_8], sizeof(VAR_7[0]),
      VAR_5->sc_mixer_iface_index, VAR_4, 0) != 0) {
   return (VAR_0);
  }
 }
 return (0);
}
