
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_proc_msg {int dummy; } ;
struct uaudio_softc {int sc_udev; int sc_rec_chan; int sc_play_chan; } ;
struct uaudio_configure_msg {struct uaudio_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uaudio_softc*,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct usb_proc_msg *VAR_2)
{
 struct uaudio_softc *VAR_3 = ((struct uaudio_configure_msg *)VAR_2)->sc;

 FUNC_2(VAR_3->sc_udev);
 FUNC_0(VAR_3, &VAR_3->sc_play_chan, VAR_0);
 FUNC_0(VAR_3, &VAR_3->sc_rec_chan, VAR_1);
 FUNC_1(VAR_3->sc_udev);
}
