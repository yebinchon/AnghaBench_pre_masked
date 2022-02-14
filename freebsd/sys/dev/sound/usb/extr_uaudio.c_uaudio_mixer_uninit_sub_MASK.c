
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_softc {int * sc_mixer_lock; int sc_mixer_xfer; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;

int
FUNC_2(struct uaudio_softc *VAR_0)
{
 FUNC_0("\n");

 FUNC_1(VAR_0->sc_mixer_xfer, 1);

 VAR_0->sc_mixer_lock = ((void*)0);

 return (0);
}
