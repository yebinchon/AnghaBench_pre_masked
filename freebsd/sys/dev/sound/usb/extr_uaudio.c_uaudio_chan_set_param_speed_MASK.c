
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
struct uaudio_softc {int sc_udev; } ;
struct uaudio_chan {size_t num_alt; size_t set_alt; TYPE_1__* usb_alt; struct uaudio_softc* priv_sc; } ;
struct TYPE_2__ {scalar_t__ sample_rate; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct uaudio_chan *VAR_0, uint32_t VAR_1)
{
 struct uaudio_softc *VAR_2;
 uint8_t VAR_3;

 VAR_2 = VAR_0->priv_sc;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_alt; VAR_3++) {
  if (VAR_0->usb_alt[VAR_3].sample_rate < VAR_1) {

   break;
  }
 }

 if (VAR_3 != 0)
  VAR_3--;

 FUNC_1(VAR_2->sc_udev);
 VAR_0->set_alt = VAR_3;
 FUNC_2(VAR_2->sc_udev);

 FUNC_0("Selecting alt %d\n", (int)VAR_3);

 return (VAR_0->usb_alt[VAR_3].sample_rate);
}
