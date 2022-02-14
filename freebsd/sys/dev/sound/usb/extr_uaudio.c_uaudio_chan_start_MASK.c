
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uaudio_chan {int running; scalar_t__ buf; scalar_t__ cur; scalar_t__ end; scalar_t__ start; int set_alt; struct uaudio_softc* priv_sc; } ;
struct uaudio_softc {int sc_udev; struct uaudio_chan sc_play_chan; struct uaudio_chan sc_rec_chan; } ;


 scalar_t__ FUNC_0 (struct uaudio_softc*) ;
 int FUNC_1 (struct uaudio_chan*) ;
 int FUNC_2 (struct uaudio_chan*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct uaudio_chan *VAR_0)
{
 struct uaudio_softc *VAR_1 = VAR_0->priv_sc;


 FUNC_3(VAR_1->sc_udev);


 if (VAR_0->running == 0) {
    uint32_t VAR_2;


  VAR_2 = 2 * FUNC_2(VAR_0, VAR_0->set_alt);


  VAR_0->running = 1;


  VAR_0->start = VAR_0->buf;
  VAR_0->end = VAR_0->buf + VAR_2;
  VAR_0->cur = VAR_0->buf;

  if (FUNC_0(VAR_1)) {




   FUNC_1(&VAR_1->sc_rec_chan);
   FUNC_1(&VAR_1->sc_play_chan);
  } else {
   FUNC_1(VAR_0);
  }
 }


 FUNC_4(VAR_1->sc_udev);
}
