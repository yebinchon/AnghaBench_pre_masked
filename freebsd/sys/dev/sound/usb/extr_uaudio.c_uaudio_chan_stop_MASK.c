
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_chan {scalar_t__ running; struct uaudio_softc* priv_sc; } ;
struct uaudio_softc {int sc_udev; struct uaudio_chan sc_play_chan; struct uaudio_chan sc_rec_chan; } ;


 scalar_t__ FUNC_0 (struct uaudio_softc*) ;
 scalar_t__ FUNC_1 (struct uaudio_softc*) ;
 int FUNC_2 (struct uaudio_chan*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct uaudio_chan *VAR_0)
{
 struct uaudio_softc *VAR_1 = VAR_0->priv_sc;


 FUNC_3(VAR_1->sc_udev);


 if (VAR_0->running != 0) {

  VAR_0->running = 0;

  if (FUNC_0(VAR_1)) {




  } else if (FUNC_1(VAR_1)) {




   FUNC_2(&VAR_1->sc_rec_chan);
   FUNC_2(&VAR_1->sc_play_chan);
  } else {
   FUNC_2(VAR_0);
  }
 }


 FUNC_4(VAR_1->sc_udev);
}
