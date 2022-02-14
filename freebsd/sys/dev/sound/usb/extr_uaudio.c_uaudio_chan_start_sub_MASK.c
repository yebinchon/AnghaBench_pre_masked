
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_softc {int * sc_config_msg; int sc_udev; } ;
struct uaudio_chan {scalar_t__ operation; scalar_t__ cur_alt; scalar_t__ set_alt; int * xfer; int pcm_mtx; struct uaudio_softc* priv_sc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct uaudio_chan *VAR_3)
{
 struct uaudio_softc *VAR_4 = VAR_3->priv_sc;
 int VAR_5 = 0;

 if (VAR_3->operation != VAR_0) {
  if (VAR_3->cur_alt == VAR_3->set_alt &&
      VAR_3->operation == VAR_1 &&
      FUNC_0(VAR_3->pcm_mtx) != 0) {

   VAR_5 = 1;
  } else {
   VAR_3->operation = VAR_2;
   (void)FUNC_1(VAR_4->sc_udev,
       &VAR_4->sc_config_msg[0], &VAR_4->sc_config_msg[1]);
  }
 }
 if (VAR_5) {
  FUNC_2(VAR_3->xfer[0]);
  FUNC_2(VAR_3->xfer[1]);
 }
}
