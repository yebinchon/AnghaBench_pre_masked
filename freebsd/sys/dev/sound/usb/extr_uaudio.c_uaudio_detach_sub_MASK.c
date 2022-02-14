
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_softc {scalar_t__ sc_mixer_init; scalar_t__ sc_pcm_registered; int (* sc_set_spdif_fn ) (struct uaudio_softc*,int ) ;} ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct uaudio_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uaudio_softc*,int ) ;
 int FUNC_6 (int *,int) ;

int
FUNC_7(device_t VAR_1)
{
 struct uaudio_softc *VAR_2 = FUNC_1(FUNC_0(VAR_1));
 int VAR_3 = 0;


 (void) VAR_2->sc_set_spdif_fn(VAR_2, 0);

repeat:
 if (VAR_2->sc_pcm_registered) {
  VAR_3 = FUNC_4(VAR_1);
 } else {
  if (VAR_2->sc_mixer_init) {
   VAR_3 = FUNC_3(VAR_1);
  }
 }

 if (VAR_3) {
  FUNC_2(VAR_1, "Waiting for sound application to exit!\n");
  FUNC_6(((void*)0), 2 * VAR_0);
  goto repeat;
 }
 return (0);
}
