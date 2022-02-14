
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umidi_chan {int mtx; } ;
struct uaudio_softc {struct umidi_chan sc_midi_chan; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct uaudio_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_2)
{
 struct uaudio_softc *VAR_3 = FUNC_0(VAR_2);
 struct umidi_chan *VAR_4 = &VAR_3->sc_midi_chan;

 FUNC_1(&VAR_4->mtx, "umidi lock", ((void*)0), VAR_0 | VAR_1);
}
