
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int xfer; void* operation; } ;
struct TYPE_3__ {int xfer; void* operation; } ;
struct uaudio_softc {scalar_t__ sc_sndstat_valid; int sc_sndstat; TYPE_2__ sc_rec_chan; TYPE_1__ sc_play_chan; int sc_udev; int * sc_config_msg; } ;
typedef int device_t ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct uaudio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct uaudio_softc*) ;
 int FUNC_5 (struct uaudio_softc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_2)
{
 struct uaudio_softc *VAR_3 = FUNC_2(VAR_2);






 FUNC_7(VAR_3->sc_udev);
 VAR_3->sc_play_chan.operation = VAR_0;
 VAR_3->sc_rec_chan.operation = VAR_0;
 FUNC_8(VAR_3->sc_udev,
     &VAR_3->sc_config_msg[0], &VAR_3->sc_config_msg[1]);
 FUNC_9(VAR_3->sc_udev);

 FUNC_10(VAR_3->sc_play_chan.xfer, VAR_1 + 1);
 FUNC_10(VAR_3->sc_rec_chan.xfer, VAR_1 + 1);

 FUNC_4(VAR_3);

 if (FUNC_1(VAR_2) != 0) {
  FUNC_0("detach failed!\n");
 }
 FUNC_3(&VAR_3->sc_sndstat);
 VAR_3->sc_sndstat_valid = 0;

 FUNC_6(VAR_2);



 FUNC_5(VAR_3);

 return (0);
}
